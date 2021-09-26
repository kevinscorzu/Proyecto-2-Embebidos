/* 
 * "Small Hello World" example. 
 * 
 * This example prints 'Hello from Nios II' to the STDOUT stream. It runs on
 * the Nios II 'standard', 'full_featured', 'fast', and 'low_cost' example 
 * designs. It requires a STDOUT  device in your system's hardware. 
 *
 * The purpose of this example is to demonstrate the smallest possible Hello 
 * World application, using the Nios II HAL library.  The memory footprint
 * of this hosted application is ~332 bytes by default using the standard 
 * reference design.  For a more fully featured Hello World application
 * example, see the example titled "Hello World".
 *
 * The memory footprint of this example has been reduced by making the
 * following changes to the normal "Hello World" example.
 * Check in the Nios II Software Developers Manual for a more complete 
 * description.
 * 
 * In the SW Application project (small_hello_world):
 *
 *  - In the C/C++ Build page
 * 
 *    - Set the Optimization Level to -Os
 * 
 * In System Library project (small_hello_world_syslib):
 *  - In the C/C++ Build page
 * 
 *    - Set the Optimization Level to -Os
 * 
 *    - Define the preprocessor option ALT_NO_INSTRUCTION_EMULATION 
 *      This removes software exception handling, which means that you cannot 
 *      run code compiled for Nios II cpu with a hardware multiplier on a core 
 *      without a the multiply unit. Check the Nios II Software Developers 
 *      Manual for more details.
 *
 *  - In the System Library page:
 *    - Set Periodic system timer and Timestamp timer to none
 *      This prevents the automatic inclusion of the timer driver.
 *
 *    - Set Max file descriptors to 4
 *      This reduces the size of the file handle pool.
 *
 *    - Check Main function does not exit
 *    - Uncheck Clean exit (flush buffers)
 *      This removes the unneeded call to exit when main returns, since it
 *      won't.
 *
 *    - Check Don't use C++
 *      This builds without the C++ support code.
 *
 *    - Check Small C library
 *      This uses a reduced functionality C library, which lacks  
 *      support for buffering, file IO, floating point and getch(), etc. 
 *      Check the Nios II Software Developers Manual for a complete list.
 *
 *    - Check Reduced device drivers
 *      This uses reduced functionality drivers if they're available. For the
 *      standard design this means you get polled UART and JTAG UART drivers,
 *      no support for the LCD driver and you lose the ability to program 
 *      CFI compliant flash devices.
 *
 *    - Check Access device drivers directly
 *      This bypasses the device file system to access device drivers directly.
 *      This eliminates the space required for the device file system services.
 *      It also provides a HAL version of libc services that access the drivers
 *      directly, further reducing space. Only a limited number of libc
 *      functions are available in this configuration.
 *
 *    - Use ALT versions of stdio routines:
 *
 *           Function                  Description
 *        ===============  =====================================
 *        alt_printf       Only supports %s, %x, and %c ( < 1 Kbyte)
 *        alt_putstr       Smaller overhead than puts with direct drivers
 *                         Note this function doesn't add a newline.
 *        alt_putchar      Smaller overhead than putchar with direct drivers
 *        alt_getchar      Smaller overhead than getchar with direct drivers
 *
 */

#include "sys/alt_stdio.h"
#include "sys/alt_irq.h"
#include "altera_avalon_pio_regs.h"
#include "altera_avalon_timer_regs.h"

#define TIMERMODE 0x4000
#define TIMERIRQ 1

#define BTMODE 0x5060
#define BTMODEIRQ 2
#define BTMODEIRQID 0

#define BTINC 0x5080
#define BTINCIRQ 4
#define BTINCIRQID 0

#define BTSEL 0x5070
#define BTSELIRQ 3
#define BTSELIRQID 0

volatile int btModeEdgeCapture;
volatile int btIncEdgeCapture;
volatile int btSelEdgeCapture;

volatile unsigned char* ramPtr = (unsigned char *) 0x1000;
volatile unsigned char* modePtr;
volatile unsigned char* segPtr;
volatile unsigned char* minPtr;
volatile unsigned char* hourPtr;
volatile unsigned char* configPtr;

volatile unsigned char* segS0Ptr = (unsigned char *) 0x5000;
volatile unsigned char* segS1Ptr = (unsigned char *) 0x5010;
volatile unsigned char* segM0Ptr = (unsigned char *) 0x5020;
volatile unsigned char* segM1Ptr = (unsigned char *) 0x5030;
volatile unsigned char* segH0Ptr = (unsigned char *) 0x5040;
volatile unsigned char* segH1Ptr = (unsigned char *) 0x5050;

volatile unsigned char* ledsPtr = (unsigned char *) 0x5090;

void initializeInterrupts();
void handleTimer();
void changeMode();
void changeTimeMode();
void countTime();
void changeTime();

void showNumbers();
void numberToSeg7(int num,volatile  unsigned char* seg7);

int main() { 

  modePtr = ramPtr + 1;
  segPtr = ramPtr + 2;
  minPtr = ramPtr + 3;
  hourPtr = ramPtr + 4;
  configPtr = ramPtr + 5;

  *segS0Ptr = 0;
  *segS1Ptr = 0;
  *segM0Ptr = 0;
  *segM1Ptr = 0;
  *segH0Ptr = 0;
  *segH1Ptr = 0;

  *modePtr = 0;
  
  *segPtr = 0;
  *minPtr = 0;
  *hourPtr = 0;

  *configPtr = 0;

  *ledsPtr = 0b00000001;
  
  initializeInterrupts();

  while (1);

  return 0;

}

void initializeInterrupts() {

	alt_irq_register(TIMERIRQ, 0, handleTimer);

	IOWR_ALTERA_AVALON_TIMER_CONTROL(TIMERMODE,
		  ALTERA_AVALON_TIMER_CONTROL_CONT_MSK
		| ALTERA_AVALON_TIMER_CONTROL_START_MSK
		| ALTERA_AVALON_TIMER_CONTROL_ITO_MSK);

  
  void* btModeEdgeCapturePtr = (void *) &btModeEdgeCapture;
  void* btIncEdgeCapturePtr = (void *) &btIncEdgeCapture;
  void* btSelEdgeCapturePtr = (void *) &btSelEdgeCapture;

  IOWR_ALTERA_AVALON_PIO_IRQ_MASK(BTMODE, 0xf);
  IOWR_ALTERA_AVALON_PIO_IRQ_MASK(BTINC, 0xf);
  IOWR_ALTERA_AVALON_PIO_IRQ_MASK(BTSEL, 0xf);

  IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BTMODE, 0x0);
  IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BTINC, 0x0);
  IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BTSEL, 0x0);

  alt_ic_isr_register(BTMODEIRQID,
                      BTMODEIRQ, changeMode,
                      btModeEdgeCapturePtr, 0x0);  
  
  alt_ic_isr_register(BTINCIRQID,
                      BTINCIRQ, changeTime,
                      btIncEdgeCapturePtr, 0x0);  
  
  alt_ic_isr_register(BTSELIRQID,
                      BTSELIRQ, changeTimeMode,
                      btSelEdgeCapturePtr, 0x0);  

  return;

}

void handleTimer() {

  IOWR_ALTERA_AVALON_TIMER_STATUS(TIMERMODE, 0);

  if (*modePtr == 0) {
    countTime(); 
    showNumbers();
    //Verificar alarma
  }

  return;

}


void changeMode() {

  IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BTMODE, 0);
	IOWR_ALTERA_AVALON_PIO_IRQ_MASK(BTMODE, 0xf);

  *modePtr += 1;

  switch (*modePtr) {      
    case 1: 
      *ledsPtr = 0b00000010;

      break;

    case 2:
      *ledsPtr = 0b00000100;

      break;

    case 3:
      *ledsPtr = 0b00000001;
      *modePtr = 0;

      break;

  }

  return;

}

void changeTimeMode() {

  IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BTSEL, 0);
	IOWR_ALTERA_AVALON_PIO_IRQ_MASK(BTSEL, 0xf);

  if (*modePtr == 1) {
    *configPtr += 1;

    if (*configPtr == 3) {
        *configPtr = 0;
    }
  }

  return;

}

void changeTime() {

  IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BTINC, 0);
	IOWR_ALTERA_AVALON_PIO_IRQ_MASK(BTINC, 0xf);

  if (*modePtr == 1) {
    switch (*configPtr) {      
      case 0: 
        if (*segPtr == 59) {
            *segPtr = 0;
        }
        else {
            *segPtr += 1;
        }
        break;

      case 1:
        if (*minPtr == 59) {
            *minPtr = 0;
        }
        else {
            *minPtr += 1;
        }
        break;

      case 2:
        if (*hourPtr == 23) {
            *hourPtr = 0;
        }
        else {
            *hourPtr += 1;
        }
        break;

    }

    showNumbers();
  }

  return;

}

void countTime() {
  
  *segPtr += 1;
  
  if (*segPtr == 60) {
    *minPtr += 1;
    *segPtr = 0;
  }
  if (*minPtr == 60) {
    *hourPtr += 1;
    *minPtr = 0;
  }
  if (*hourPtr == 24) {
    *hourPtr = 0;
    *minPtr = 0;
    *segPtr = 0;
  }

  return;
  
}

void showNumbers() {

  numberToSeg7(*segPtr % 10, segS0Ptr);
  numberToSeg7(*segPtr / 10, segS1Ptr);

  numberToSeg7(*minPtr % 10, segM0Ptr);
  numberToSeg7(*minPtr / 10, segM1Ptr);

  numberToSeg7(*hourPtr % 10, segH0Ptr);
  numberToSeg7(*hourPtr / 10, segH1Ptr);

  return;

}

void numberToSeg7(int num, volatile unsigned char* seg7) {
  
  switch (num) {
    case 0:
      *seg7 = 0b1000000;
      break;

    case 1:
      *seg7 = 0b1111001;
      break;

    case 2:
      *seg7 = 0b0100100;
      break;
      
    case 3:
      *seg7 = 0b0110000;
      break;
  
    case 4:
      *seg7 = 0b0011001;
      break;

    case 5:
      *seg7 = 0b0010010;
      break;

    case 6:
      *seg7 = 0b0000010;
      break;

    case 7:
      *seg7 = 0b1111000;
      break;

    case 8: 
      *seg7 = 0b0000000;
      break;

    case 9:
      *seg7 = 0b0011000;
      break;

  }
  
  return;

}
