#include <stdio.h>
#include <stdlib.h>
#include "code.h"

lista* criar_lista(void){
	lista* l;
	l = (lista*) malloc(sizeof(lista));
	if(l != NULL){
		l->qtd = 0;
	}
	return l;
}

void libera_lista(lista* l){
	free(l);
}

int tam_lista(lista* l){
	if(l == NULL){
		return -1;
	}
	else{
		return l->qtd;
	}
}

int lista_vazia(lista* l){
	if(l == NULL){
		return -1
	}
	else{
		return (l->qtd == 0);
	}
}

int lista_cheia(lista* l){
	if(l == NULL){
		return -1
	}
	if(l.qtd == N){
		return 1;
	}
		
}

int insere_final(lista* l,){
	lista* novo=(lista*) malloc(sizeof(lista));
	novo->qtd++;
	novo->registros
}
