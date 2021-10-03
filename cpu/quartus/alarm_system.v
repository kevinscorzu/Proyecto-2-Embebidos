module alarm_system(input wire CLK, RESET,bt_inc, bt_sel, bt_mode, uart_rx,
							output wire uart_tx,
							output wire [7:0] leds,
							output wire [6:0] seg7s0,seg7s1,seg7m0,seg7m1,seg7h0,seg7h1);


system alarmSystem (bt_inc, bt_mode ,bt_sel, CLK,leds,RESET,
							seg7h0,seg7h1,
							seg7m0,seg7m1,
							seg7s0,seg7s1,uart_rx,uart_tx);
							
						

endmodule 