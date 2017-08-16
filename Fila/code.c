#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "code.h"

alu cria_fila(){
	fila * vet;
	vet = (fila*)malloc(sizeof(fila));
	if(vet =! NULL){
		vet->qtd = 0;
	}
	return 1;
}
