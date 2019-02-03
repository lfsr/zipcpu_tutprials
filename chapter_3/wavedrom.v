module wavedrom(clk, cout, stb_out);
    parameter WIDTH; //tamaño del registro
    parameter WIDTH_REG; //tamaño del contador
    input wire clk;
    reg [WIDTH_REG-1:0] registro;
    reg stb;
    output wire [WIDTH-1:0] cout;
    output wire stb_out;
    
    assign stb_out = stb;
    initial {stb, registro} = 0; //porq aqui no usamos WIDTH'b0? por que eso es opcional, puedes sumarle lo que te de le gana 
    initial cout = 'h1;
    always @(posedge clk)
        {stb, registro} <= registro + 1'b1;
    
    always @(posedge clk)
        if (stb)
            cout <= {cout[WIDTH-2:0], cout[WIDTH-1]}; //hacemos un shift hacia el MSB rotando (no me acuerdo de como se llamaba esto)
        
    //porque no esta todo en el mismo always?
endmodule 
