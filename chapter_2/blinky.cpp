#include <stdio.h>
#include <stdlib.h>
#include "Vblinky.h"
#include "verilated.h"

//definimos la función paso de reloj
void tick(Vblinky *tb){
	tb->eval();
	tb->i_clk = 1;
	tb->eval();
	tb->i_clk = 0;
	tb->eval();
	}

//definimos la simulacion
int main(int argc, char **argv){

	Verilated::commandArgs(argc,argv);
        Vblinky*tb = new Vblinky;

	for (int k=0; k<(1<<24); k++){
		int last_led = tb->o_led;
		tick(tb);
		//en lugar de que nos diga todo el tiempo el estado del led, que nos lo diga cuando este ha cambiado
		if (last_led != tb->o_led){//pero... las_led aun no esta definido... c++ es raro
			printf("k = %5d", k);
			printf(" contador = %5d", tb->contador_out);
			printf(" led = %d\n", tb ->o_led);
		} //aqui almacenamos el estado actual del led, pero en el proximo bucle hacemos un tick, por lo que el estado del led podría diferir del que almacenamos aqui
	}
}