
module system (
	clk_clk,
	reset_reset_n,
	seg7h0_export,
	seg7h1_export,
	seg7m0_export,
	seg7m1_export,
	seg7s0_export,
	seg7s1_export,
	btmode_export,
	btsel_export,
	leds_export,
	btinc_export);	

	input		clk_clk;
	input		reset_reset_n;
	output	[6:0]	seg7h0_export;
	output	[6:0]	seg7h1_export;
	output	[6:0]	seg7m0_export;
	output	[6:0]	seg7m1_export;
	output	[6:0]	seg7s0_export;
	output	[6:0]	seg7s1_export;
	input		btmode_export;
	input		btsel_export;
	output	[7:0]	leds_export;
	input		btinc_export;
endmodule
