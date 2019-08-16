#include <stdio.h>
#include <unistd.h>
#include <stdio.h>

//Este programa sirve para probar señales del tipo SIGSTOP, SIGCONT  Y SIGKILL
//usar comandos ps y kill.

int main (){

	while(1){
		printf("Esperando señales... \n");
		sleep(2);
	}
	return 0;
}
