#include <stdio.h>
#include <stdlib.h>
#include "code.h"


void main(){
	int i;
	liv ll[5]; //define o tipo de dado e faz um vetor de 5
	for (i=0; i<5;i++){
		ll[i] = insere();
	}
	for (i=0; i<5; i++){
		imprime(ll[i]);
	}
}
