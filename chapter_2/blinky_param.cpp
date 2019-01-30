#include <stdio.h>
#include <stdlib.h>
#include "Vblinky_param.h"
#include "verilated.h"
#include "verilated_vcd_c.h" //para el waveform

//definimos la función paso de reloj
void tick(int tickcount, Vblinky_param *tb, VerilatedVcdC* tfp){
	tb->eval();
    if (tfp) //dumps 2ns before the tick
        tfp -> dump(tickcount*10-2);
	tb->i_clk = 1;
	tb->eval();
    if (tfp)
        tfp -> dump(tickcount*10);
	tb->i_clk = 0;
	tb->eval();
    if (tfp) { //trailing edge dump... ni zorra
        tfp -> dump(tickcount*10+5);
        tfp -> flush();
    }
	}




//definimos la simulacion
int main(int argc, char **argv){
    unsigned tickcount = 0;
	
    VerilatedVcdC*tfp = new VerilatedVcdC; //supongo que instanciamos la clase VerilatedVcdC en tfp
    Vblinky_param*tb = new Vblinky_param;
    Verilated::commandArgs(argc,argv);
    Verilated::traceEverOn(true);
    
    
    tb -> trace(tfp, 99); //esto no se lo que hace
    tfp -> open("blinky_paramtrace.vcd"); //creamos el archivo, I guess
    int last_led;
	for (int k=0; k<(1<<24); k++){
		tick(++tickcount, tb,tfp);
        last_led = tb->o_led;
		//tick(tb);
        
		//en lugar de que nos diga todo el tiempo el estado del led, que nos lo diga cuando este ha cambiado
		if (last_led != tb->o_led){//pero... las_led aun no esta definido... c++ es raro
			printf("k = %5d", k);
			printf(" contador = %5d", tb->contador_out);
			printf(" led = %d\n", tb ->o_led);
		} //aqui almacenamos el estado actual del led, pero en el proximo bucle hacemos un tick, por lo que el estado del led podría diferir del que almacenamos aqui
	}
}
