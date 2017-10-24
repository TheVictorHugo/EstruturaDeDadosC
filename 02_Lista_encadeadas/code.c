#include <stdio.h>
#include <stdlib.h>
#include "code.h"//inserção da biblioteca

//criando lista
Lista* criar_lista(void){
	return NULL; // o primeiro valor e NULL
}

//inserção no inicio da lista: retronar lista atualizada
Lista* insere_lista(Lista* l, int i){
	Lista* novo = (Lista*) malloc(sizeof(Lista)); //transforma o novo valor no tipo Lista
	novo->info = i;//informação recebe dado
	novo->prox = l;//Lista->prox recebe Lista
	return novo;//retorna Lista
}

//inserção no início: atualiza valor da lista
void insere(Lista**l, int i){
	Lista* novo = (Lista*) malloc(sizeof(Lista));//transforma o novo valor no tipo Lista
	novo->info = i;//informação recebe dado
	novo->prox = *l;//Lista->prox recebe Lista
	*l = novo;
}

//função imprime: imprime valores dos elementos
void imprime(Lista* l){
	Lista* p;
	for(p = l; p != NULL;p = p->prox){
		printf("info = %d\n", p->info);
	}
}

