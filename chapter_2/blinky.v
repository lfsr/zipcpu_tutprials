module blinky(i_clk, o_led, contador_out);

	input wire i_clk;
	output wire o_led;
	output wire [15:0] contador_out; //este me lo saco yo de la manga
	reg [15:0] contador;

	always@(posedge i_clk)
		contador <= contador + 1'b1;
	assign o_led = contador[15];
	assign contador_out[15:0] = contador[15:0];
endmodule