module blinky_param(i_clk, o_led, contador_out);
    parameter WIDTH; //el valor se escribirá con el parámetro -GWIDTH=<valor>
	input wire i_clk;
	output wire o_led;
	output wire [WIDTH-1:0] contador_out; //este me lo saco yo de la manga
	reg [WIDTH-1:0] contador;

	always@(posedge i_clk)
		contador <= contador + 1'b1;
	assign o_led = contador[WIDTH-1];//ESTA LINEA NO DEBERIA SER ASÍ PERO QUIERO TINKEREAR :)
	assign contador_out[WIDTH-1:0] = contador[WIDTH-1:0]; 
endmodule
