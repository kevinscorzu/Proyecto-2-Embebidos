// system_tb.v

// Generated using ACDS version 20.1 720

`timescale 1 ps / 1 ps
module system_tb (
	);

	wire        system_inst_clk_bfm_clk_clk;       // system_inst_clk_bfm:clk -> [system_inst:clk_clk, system_inst_reset_bfm:clk]
	wire  [6:0] system_inst_seg7s0_export;         // system_inst:seg7s0_export -> system_inst_seg7s0_bfm:sig_export
	wire        system_inst_reset_bfm_reset_reset; // system_inst_reset_bfm:reset -> system_inst:reset_reset_n

	system system_inst (
		.clk_clk       (system_inst_clk_bfm_clk_clk),       //    clk.clk
		.reset_reset_n (system_inst_reset_bfm_reset_reset), //  reset.reset_n
		.seg7s0_export (system_inst_seg7s0_export)          // seg7s0.export
	);

	altera_avalon_clock_source #(
		.CLOCK_RATE (50000000),
		.CLOCK_UNIT (1)
	) system_inst_clk_bfm (
		.clk (system_inst_clk_bfm_clk_clk)  // clk.clk
	);

	altera_avalon_reset_source #(
		.ASSERT_HIGH_RESET    (0),
		.INITIAL_RESET_CYCLES (50)
	) system_inst_reset_bfm (
		.reset (system_inst_reset_bfm_reset_reset), // reset.reset_n
		.clk   (system_inst_clk_bfm_clk_clk)        //   clk.clk
	);

	altera_conduit_bfm system_inst_seg7s0_bfm (
		.sig_export (system_inst_seg7s0_export)  // conduit.export
	);

endmodule
