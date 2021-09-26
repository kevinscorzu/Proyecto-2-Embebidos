/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'CPU' in SOPC Builder design 'system'
 * SOPC Builder design path: C:/Users/leahy/Documents/TEC/II-SEM-2021/SistemasEmbebidos/Proyecto-2-Embebidos/cpu/system.sopcinfo
 *
 * Generated: Sat Sep 25 18:49:22 CST 2021
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * BT_INC configuration
 *
 */

#define ALT_MODULE_CLASS_BT_INC altera_avalon_pio
#define BT_INC_BASE 0x5080
#define BT_INC_BIT_CLEARING_EDGE_REGISTER 0
#define BT_INC_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BT_INC_CAPTURE 1
#define BT_INC_DATA_WIDTH 1
#define BT_INC_DO_TEST_BENCH_WIRING 0
#define BT_INC_DRIVEN_SIM_VALUE 0
#define BT_INC_EDGE_TYPE "RISING"
#define BT_INC_FREQ 50000000
#define BT_INC_HAS_IN 1
#define BT_INC_HAS_OUT 0
#define BT_INC_HAS_TRI 0
#define BT_INC_IRQ 4
#define BT_INC_IRQ_INTERRUPT_CONTROLLER_ID 0
#define BT_INC_IRQ_TYPE "EDGE"
#define BT_INC_NAME "/dev/BT_INC"
#define BT_INC_RESET_VALUE 0
#define BT_INC_SPAN 16
#define BT_INC_TYPE "altera_avalon_pio"


/*
 * BT_MODE configuration
 *
 */

#define ALT_MODULE_CLASS_BT_MODE altera_avalon_pio
#define BT_MODE_BASE 0x5060
#define BT_MODE_BIT_CLEARING_EDGE_REGISTER 0
#define BT_MODE_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BT_MODE_CAPTURE 1
#define BT_MODE_DATA_WIDTH 1
#define BT_MODE_DO_TEST_BENCH_WIRING 0
#define BT_MODE_DRIVEN_SIM_VALUE 0
#define BT_MODE_EDGE_TYPE "RISING"
#define BT_MODE_FREQ 50000000
#define BT_MODE_HAS_IN 1
#define BT_MODE_HAS_OUT 0
#define BT_MODE_HAS_TRI 0
#define BT_MODE_IRQ 2
#define BT_MODE_IRQ_INTERRUPT_CONTROLLER_ID 0
#define BT_MODE_IRQ_TYPE "EDGE"
#define BT_MODE_NAME "/dev/BT_MODE"
#define BT_MODE_RESET_VALUE 0
#define BT_MODE_SPAN 16
#define BT_MODE_TYPE "altera_avalon_pio"


/*
 * BT_SEL configuration
 *
 */

#define ALT_MODULE_CLASS_BT_SEL altera_avalon_pio
#define BT_SEL_BASE 0x5070
#define BT_SEL_BIT_CLEARING_EDGE_REGISTER 0
#define BT_SEL_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BT_SEL_CAPTURE 1
#define BT_SEL_DATA_WIDTH 1
#define BT_SEL_DO_TEST_BENCH_WIRING 0
#define BT_SEL_DRIVEN_SIM_VALUE 0
#define BT_SEL_EDGE_TYPE "RISING"
#define BT_SEL_FREQ 50000000
#define BT_SEL_HAS_IN 1
#define BT_SEL_HAS_OUT 0
#define BT_SEL_HAS_TRI 0
#define BT_SEL_IRQ 3
#define BT_SEL_IRQ_INTERRUPT_CONTROLLER_ID 0
#define BT_SEL_IRQ_TYPE "EDGE"
#define BT_SEL_NAME "/dev/BT_SEL"
#define BT_SEL_RESET_VALUE 0
#define BT_SEL_SPAN 16
#define BT_SEL_TYPE "altera_avalon_pio"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00002820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0xf
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00001020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0xe
#define ALT_CPU_NAME "CPU"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00001000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00002820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0xf
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00001020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0xe
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00001000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_GEN2


/*
 * LEDS configuration
 *
 */

#define ALT_MODULE_CLASS_LEDS altera_avalon_pio
#define LEDS_BASE 0x5090
#define LEDS_BIT_CLEARING_EDGE_REGISTER 0
#define LEDS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LEDS_CAPTURE 0
#define LEDS_DATA_WIDTH 8
#define LEDS_DO_TEST_BENCH_WIRING 0
#define LEDS_DRIVEN_SIM_VALUE 0
#define LEDS_EDGE_TYPE "NONE"
#define LEDS_FREQ 50000000
#define LEDS_HAS_IN 0
#define LEDS_HAS_OUT 1
#define LEDS_HAS_TRI 0
#define LEDS_IRQ -1
#define LEDS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LEDS_IRQ_TYPE "NONE"
#define LEDS_NAME "/dev/LEDS"
#define LEDS_RESET_VALUE 0
#define LEDS_SPAN 16
#define LEDS_TYPE "altera_avalon_pio"


/*
 * RAM configuration
 *
 */

#define ALT_MODULE_CLASS_RAM altera_avalon_onchip_memory2
#define RAM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define RAM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define RAM_BASE 0x1000
#define RAM_CONTENTS_INFO ""
#define RAM_DUAL_PORT 0
#define RAM_GUI_RAM_BLOCK_TYPE "AUTO"
#define RAM_INIT_CONTENTS_FILE "system_RAM"
#define RAM_INIT_MEM_CONTENT 1
#define RAM_INSTANCE_ID "NONE"
#define RAM_IRQ -1
#define RAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RAM_NAME "/dev/RAM"
#define RAM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define RAM_RAM_BLOCK_TYPE "AUTO"
#define RAM_READ_DURING_WRITE_MODE "DONT_CARE"
#define RAM_SINGLE_CLOCK_OP 0
#define RAM_SIZE_MULTIPLE 1
#define RAM_SIZE_VALUE 4096
#define RAM_SPAN 4096
#define RAM_TYPE "altera_avalon_onchip_memory2"
#define RAM_WRITABLE 1


/*
 * SEG7_H0 configuration
 *
 */

#define ALT_MODULE_CLASS_SEG7_H0 altera_avalon_pio
#define SEG7_H0_BASE 0x5040
#define SEG7_H0_BIT_CLEARING_EDGE_REGISTER 0
#define SEG7_H0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG7_H0_CAPTURE 0
#define SEG7_H0_DATA_WIDTH 7
#define SEG7_H0_DO_TEST_BENCH_WIRING 0
#define SEG7_H0_DRIVEN_SIM_VALUE 0
#define SEG7_H0_EDGE_TYPE "NONE"
#define SEG7_H0_FREQ 50000000
#define SEG7_H0_HAS_IN 0
#define SEG7_H0_HAS_OUT 1
#define SEG7_H0_HAS_TRI 0
#define SEG7_H0_IRQ -1
#define SEG7_H0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG7_H0_IRQ_TYPE "NONE"
#define SEG7_H0_NAME "/dev/SEG7_H0"
#define SEG7_H0_RESET_VALUE 0
#define SEG7_H0_SPAN 16
#define SEG7_H0_TYPE "altera_avalon_pio"


/*
 * SEG7_H1 configuration
 *
 */

#define ALT_MODULE_CLASS_SEG7_H1 altera_avalon_pio
#define SEG7_H1_BASE 0x5050
#define SEG7_H1_BIT_CLEARING_EDGE_REGISTER 0
#define SEG7_H1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG7_H1_CAPTURE 0
#define SEG7_H1_DATA_WIDTH 7
#define SEG7_H1_DO_TEST_BENCH_WIRING 0
#define SEG7_H1_DRIVEN_SIM_VALUE 0
#define SEG7_H1_EDGE_TYPE "NONE"
#define SEG7_H1_FREQ 50000000
#define SEG7_H1_HAS_IN 0
#define SEG7_H1_HAS_OUT 1
#define SEG7_H1_HAS_TRI 0
#define SEG7_H1_IRQ -1
#define SEG7_H1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG7_H1_IRQ_TYPE "NONE"
#define SEG7_H1_NAME "/dev/SEG7_H1"
#define SEG7_H1_RESET_VALUE 0
#define SEG7_H1_SPAN 16
#define SEG7_H1_TYPE "altera_avalon_pio"


/*
 * SEG7_M0 configuration
 *
 */

#define ALT_MODULE_CLASS_SEG7_M0 altera_avalon_pio
#define SEG7_M0_BASE 0x5020
#define SEG7_M0_BIT_CLEARING_EDGE_REGISTER 0
#define SEG7_M0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG7_M0_CAPTURE 0
#define SEG7_M0_DATA_WIDTH 7
#define SEG7_M0_DO_TEST_BENCH_WIRING 0
#define SEG7_M0_DRIVEN_SIM_VALUE 0
#define SEG7_M0_EDGE_TYPE "NONE"
#define SEG7_M0_FREQ 50000000
#define SEG7_M0_HAS_IN 0
#define SEG7_M0_HAS_OUT 1
#define SEG7_M0_HAS_TRI 0
#define SEG7_M0_IRQ -1
#define SEG7_M0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG7_M0_IRQ_TYPE "NONE"
#define SEG7_M0_NAME "/dev/SEG7_M0"
#define SEG7_M0_RESET_VALUE 0
#define SEG7_M0_SPAN 16
#define SEG7_M0_TYPE "altera_avalon_pio"


/*
 * SEG7_M1 configuration
 *
 */

#define ALT_MODULE_CLASS_SEG7_M1 altera_avalon_pio
#define SEG7_M1_BASE 0x5030
#define SEG7_M1_BIT_CLEARING_EDGE_REGISTER 0
#define SEG7_M1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG7_M1_CAPTURE 0
#define SEG7_M1_DATA_WIDTH 7
#define SEG7_M1_DO_TEST_BENCH_WIRING 0
#define SEG7_M1_DRIVEN_SIM_VALUE 0
#define SEG7_M1_EDGE_TYPE "NONE"
#define SEG7_M1_FREQ 50000000
#define SEG7_M1_HAS_IN 0
#define SEG7_M1_HAS_OUT 1
#define SEG7_M1_HAS_TRI 0
#define SEG7_M1_IRQ -1
#define SEG7_M1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG7_M1_IRQ_TYPE "NONE"
#define SEG7_M1_NAME "/dev/SEG7_M1"
#define SEG7_M1_RESET_VALUE 0
#define SEG7_M1_SPAN 16
#define SEG7_M1_TYPE "altera_avalon_pio"


/*
 * SEG7_S0 configuration
 *
 */

#define ALT_MODULE_CLASS_SEG7_S0 altera_avalon_pio
#define SEG7_S0_BASE 0x5000
#define SEG7_S0_BIT_CLEARING_EDGE_REGISTER 0
#define SEG7_S0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG7_S0_CAPTURE 0
#define SEG7_S0_DATA_WIDTH 7
#define SEG7_S0_DO_TEST_BENCH_WIRING 0
#define SEG7_S0_DRIVEN_SIM_VALUE 0
#define SEG7_S0_EDGE_TYPE "NONE"
#define SEG7_S0_FREQ 50000000
#define SEG7_S0_HAS_IN 0
#define SEG7_S0_HAS_OUT 1
#define SEG7_S0_HAS_TRI 0
#define SEG7_S0_IRQ -1
#define SEG7_S0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG7_S0_IRQ_TYPE "NONE"
#define SEG7_S0_NAME "/dev/SEG7_S0"
#define SEG7_S0_RESET_VALUE 0
#define SEG7_S0_SPAN 16
#define SEG7_S0_TYPE "altera_avalon_pio"


/*
 * SEG7_S1 configuration
 *
 */

#define ALT_MODULE_CLASS_SEG7_S1 altera_avalon_pio
#define SEG7_S1_BASE 0x5010
#define SEG7_S1_BIT_CLEARING_EDGE_REGISTER 0
#define SEG7_S1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG7_S1_CAPTURE 0
#define SEG7_S1_DATA_WIDTH 7
#define SEG7_S1_DO_TEST_BENCH_WIRING 0
#define SEG7_S1_DRIVEN_SIM_VALUE 0
#define SEG7_S1_EDGE_TYPE "NONE"
#define SEG7_S1_FREQ 50000000
#define SEG7_S1_HAS_IN 0
#define SEG7_S1_HAS_OUT 1
#define SEG7_S1_HAS_TRI 0
#define SEG7_S1_IRQ -1
#define SEG7_S1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG7_S1_IRQ_TYPE "NONE"
#define SEG7_S1_NAME "/dev/SEG7_S1"
#define SEG7_S1_RESET_VALUE 0
#define SEG7_S1_SPAN 16
#define SEG7_S1_TYPE "altera_avalon_pio"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone V"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/UART"
#define ALT_STDERR_BASE 0x3000
#define ALT_STDERR_DEV UART
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/UART"
#define ALT_STDIN_BASE 0x3000
#define ALT_STDIN_DEV UART
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/UART"
#define ALT_STDOUT_BASE 0x3000
#define ALT_STDOUT_DEV UART
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "system"


/*
 * TIMER configuration
 *
 */

#define ALT_MODULE_CLASS_TIMER altera_avalon_timer
#define TIMER_ALWAYS_RUN 0
#define TIMER_BASE 0x4000
#define TIMER_COUNTER_SIZE 32
#define TIMER_FIXED_PERIOD 0
#define TIMER_FREQ 50000000
#define TIMER_IRQ 1
#define TIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_LOAD_VALUE 49999999
#define TIMER_MULT 1.0
#define TIMER_NAME "/dev/TIMER"
#define TIMER_PERIOD 1
#define TIMER_PERIOD_UNITS "s"
#define TIMER_RESET_OUTPUT 0
#define TIMER_SNAPSHOT 1
#define TIMER_SPAN 32
#define TIMER_TICKS_PER_SEC 1
#define TIMER_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_TYPE "altera_avalon_timer"


/*
 * UART configuration
 *
 */

#define ALT_MODULE_CLASS_UART altera_avalon_jtag_uart
#define UART_BASE 0x3000
#define UART_IRQ 0
#define UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define UART_NAME "/dev/UART"
#define UART_READ_DEPTH 64
#define UART_READ_THRESHOLD 8
#define UART_SPAN 8
#define UART_TYPE "altera_avalon_jtag_uart"
#define UART_WRITE_DEPTH 64
#define UART_WRITE_THRESHOLD 8


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 4
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none

#endif /* __SYSTEM_H_ */
