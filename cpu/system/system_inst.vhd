	component system is
		port (
			clk_clk       : in  std_logic                    := 'X'; -- clk
			reset_reset_n : in  std_logic                    := 'X'; -- reset_n
			seg7h0_export : out std_logic_vector(6 downto 0);        -- export
			seg7h1_export : out std_logic_vector(6 downto 0);        -- export
			seg7m0_export : out std_logic_vector(6 downto 0);        -- export
			seg7m1_export : out std_logic_vector(6 downto 0);        -- export
			seg7s0_export : out std_logic_vector(6 downto 0);        -- export
			seg7s1_export : out std_logic_vector(6 downto 0);        -- export
			btmode_export : in  std_logic                    := 'X'; -- export
			btsel_export  : in  std_logic                    := 'X'; -- export
			leds_export   : out std_logic_vector(7 downto 0);        -- export
			btinc_export  : in  std_logic                    := 'X'  -- export
		);
	end component system;

	u0 : component system
		port map (
			clk_clk       => CONNECTED_TO_clk_clk,       --    clk.clk
			reset_reset_n => CONNECTED_TO_reset_reset_n, --  reset.reset_n
			seg7h0_export => CONNECTED_TO_seg7h0_export, -- seg7h0.export
			seg7h1_export => CONNECTED_TO_seg7h1_export, -- seg7h1.export
			seg7m0_export => CONNECTED_TO_seg7m0_export, -- seg7m0.export
			seg7m1_export => CONNECTED_TO_seg7m1_export, -- seg7m1.export
			seg7s0_export => CONNECTED_TO_seg7s0_export, -- seg7s0.export
			seg7s1_export => CONNECTED_TO_seg7s1_export, -- seg7s1.export
			btmode_export => CONNECTED_TO_btmode_export, -- btmode.export
			btsel_export  => CONNECTED_TO_btsel_export,  --  btsel.export
			leds_export   => CONNECTED_TO_leds_export,   --   leds.export
			btinc_export  => CONNECTED_TO_btinc_export   --  btinc.export
		);

