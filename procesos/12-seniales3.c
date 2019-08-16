#include <signal.h>
#include <unistd.h>
#include <stdio.h>
 
//Este programita recibe una señal, verifica cual de las 64 señales es e imprime su valor numerico.

void manejador(int sig){
    signal(sig, manejador);
    printf("Señal recibida: %d\n", sig);
}
 
int main(){
    int i;
 
    for(i=1;i<=64;i++)
        signal(i, manejador);
 
    printf("Id del proceso: %d\n", getpid() );
    pause();
    printf("Continuando...\n");
 
    return 0;
}
 
