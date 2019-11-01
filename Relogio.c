//Tarefa Relógio
//Victor Henrique Barbosa Pereira       RA: 245055
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
double inicio, parada;

void start(){
    inicio = clock()/CLOCKS_PER_SEC;
}

/*Finaliza a contagem do tempo.*/
void finish(){
    parada = clock()/CLOCKS_PER_SEC;
}

/**obtem o tempo transorrido entre o start e o finish em segundos do
tipo double com precisao de microsegundos
Exemplo 1.123456s*/
double getDelta(){
    return parada - inicio;
}
