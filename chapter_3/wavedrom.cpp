#include <stdio.h>
#include <stdlib.h>
#include "Vwavedrom.h"
#include "verilated.h"
#include "verilated_vcd_c.h" //para el waveform

void tick(int tickcount, Vwavedrom *tb, VerilatedVcdC* tfp){
	tb->eval();
    if (tfp) //dumps 2ns before the tick
        tfp -> dump(tickcount*10-2);
	tb->clk = 1;
	tb->eval();
    if (tfp)
        tfp -> dump(tickcount*10);
	tb->clk = 0;
	tb->eval();
    if (tfp) { //trailing edge dump... ni zorra
        tfp -> dump(tickcount*10+5);
        tfp -> flush();
    }
	}

	
//definimos la simulacion
int main(int argc, char **argv){
    unsigned tickcount = 0;
	
    VerilatedVcdC * tfp = new VerilatedVcdC; //supongo que instanciamos la clase VerilatedVcdC en tfp
    Vwavedrom * tb = new Vwavedrom;
    Verilated::commandArgs(argc,argv);
    Verilated::traceEverOn(true);
    
    
    tb -> trace(tfp, 99); //esto no se lo que hace
    tfp -> open("wavedromtrace.vcd"); //creamos el archivo, I guess
    int last_led;
	for (int k=0; k<(1<<18); k++){
		tick(++tickcount, tb,tfp);
        
		//tick(tb);
        
		//en lugar de que nos diga todo el tiempo el estado del led, que nos lo diga cuando este ha cambiado
		if (last_led != tb->stb_out){//pero... las_led aun no esta definido... c++ es raro
			printf("k = %5d ", k);
			printf(" contador = %8d ", tb->cout);
			printf(" led = %d\n", tb ->stb_out);
		} //aqui almacenamos el estado actual del led, pero en el proximo bucle hacemos un tick, por lo que el estado del led podría diferir del que almacenamos aqui
		last_led = tb->stb_out;
	}
	tfp -> close(); //esto no es del tutorial, si no del manual de verilated
}
