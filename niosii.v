module NiosII (clk, rst_n, led_output);

  input clk 						      /* synthesis chip_pin = "J5" */;
  input rst_n 						    /* synthesis chip_pin = "J9" */;
  output [7:0] led_output 		/* synthesis chip_pin = "K11, L11, K12, L15, M12, M14, N14, N15" */;

  niosii u0 (
    .clk_clk (clk),               // clk.clk
    .pio_led_export (led_output), // pio_led_external_connection.export
    .pio_rst_export (rst_n)       //pio_rst_external_connection.export
  );

endmodule