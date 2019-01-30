//'default_nettype none //lo comento porque no funciona
module thruwire_bus(i_sw, o_led); //defino variables de entrada salida (supongo) dentro de los parentesis
    input wire [8:0] i_sw;          //pareciera que wire es equivalente a signal
    output wire [8:0] o_led;
    
    assign o_led[0] = i_sw[0];
    assign o_led[4:0] = {i_sw[4:3], i_sw[2:0]}; //{*,*} concatena bits o vectores de bits // si la definición del wire era de mayor a menor, tienes que referenciarlos de mayor a menor
    assign o_led[8:5] = {i_sw[5],i_sw[6],i_sw[7],i_sw[8]};
endmodule
