//default_nettype none //lo comento porque no funciona
module thruwire(i_sw, o_led); //defino variables de entrada salida (supongo) dentro de los parentesis
    input wire i_sw;          //pareciera que wire es equivalente a signal
    output wire o_led;
    
    assign o_led = i_sw;      //supongo que esto es equivalente a =>
endmodule
