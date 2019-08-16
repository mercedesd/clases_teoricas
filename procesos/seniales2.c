#include <unistd.h>
#include <stdio.h>
#include <signal.h>

//Este programa sirve para probar señales del tipo SIGUSR1 
//usar comandos ps y kill.

void manejador(int sig){
	printf("hola esta es la señal del usuario...%d \n", sig);
}

int main (){

	signal(SIGUSR1, &manejador);
	while(1){
		printf("Esperando señales... \n");
		sleep(2);
	}
	return 0;
}
