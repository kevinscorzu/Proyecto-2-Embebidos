
module system (
	btinc_export,
	btmode_export,
	btsel_export,
	clk_clk,
	leds_export,
	reset_reset_n,
	seg7h0_export,
	seg7h1_export,
	seg7m0_export,
	seg7m1_export,
	seg7s0_export,
	seg7s1_export);	

	input		btinc_export;
	input		btmode_export;
	input		btsel_export;
	input		clk_clk;
	output	[7:0]	leds_export;
	input		reset_reset_n;
	output	[6:0]	seg7h0_export;
	output	[6:0]	seg7h1_export;
	output	[6:0]	seg7m0_export;
	output	[6:0]	seg7m1_export;
	output	[6:0]	seg7s0_export;
	output	[6:0]	seg7s1_export;
endmodule
