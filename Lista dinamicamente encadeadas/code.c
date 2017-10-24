#include <stdio.h>
#include <stdlib.h>
#include "code.h"


lista* cria_lista(){
	lista* no;
	no = (lista*) malloc(sizeof(lista));
	if(no != NULL){
		*no = NULL;
	}
	return no;
}
void libera_lista(lista* lis){
	if(lis != NULL){
		elem* no;
		while ((*lis != NULL)){
			no =*lis;
			*lis = (*lis)->prox;
			free(no);
		}
		free(lis);
	}
}
int tamanho_lista(lista* lis){
	int cont=0;
	elem* no;
	no = *lis;
	if(lis == NULL){
		return 0;
	}
	while(no != NULL){
		cont++;
		no = no->prox;
	}
	return cont;
}
alu insere_dados(){
	alu aluno;
	//printf("========================================\n");
	printf("=====> Nome: ");
	fflush(stdin);
	gets(aluno.nome);
	printf("=====> Matricula: ");
	fflush(stdin);
	scanf("%d", &aluno.matricula);
	printf("=====> A1: ");
	fflush(stdin);
	scanf("%d", &aluno.a1);
	printf("=====> A2: ");
	fflush(stdin);
	scanf("%d", &aluno.a2);
	printf("\n========================================\n\n\n\n");
	return aluno;
}
//Insere no in?cio da lista
int insere_inicio(lista* lis, alu aluno){
	
	elem* no;
	no = (elem*) malloc(sizeof(elem));
	if(lis == NULL){
		return ;
	}
	if(no == NULL){
		return 0;
	}
	no->registro = aluno;
	no->prox = (*lis);
	*lis = no;
	return 1;
	
}
int lista_vazia (lista* lis){
	if(lis == NULL){
		return 1;
	}
	if(*lis == NULL){
		return 1;
	}
	return 0;
}
int insere_final(lista* lis, alu aluno){
	elem *no;
	elem *aux;
	no = (elem*)malloc(sizeof(elem));
	if(lis == NULL){
		return 0;
	}
	if(no == NULL){
		return 0;
	}
	no->registro = aluno;
	no->prox = NULL;
	if(*lis == NULL){
		*lis = no;
	}else{
		aux = *lis;
		while (aux->prox != NULL){
			aux = aux->prox;
		}
			aux->prox = no;
	}
	return 1;
}
//Insere ordenado
int insere_lista_ordenada(lista* lis, alu aluno){
	elem *no;
	elem *ant, *atual;
	atual = *lis;
	no = (elem*)malloc(sizeof(elem));
	if(lis == NULL){
		return 0;
	}
	if(no == NULL){
		return 0;
	}
	no->registro = aluno;
	if(lista_vazia(lis)){
		no->prox = (*lis);
		*lis = no;
		return 1;
	}else {
		while(atual != NULL && atual->registro.matricula < aluno.matricula){
			ant = atual;
			atual = atual->prox;
		}
		if(atual == *lis){
			no->prox = *lis;
			*lis = no;
		}else{
			no->prox = ant->prox;
			ant->prox = no;
		}
		return 1;
	}
}
int remove_lista_inicio(lista *lis){
	elem *no;
	no = *lis;
	if(lis == NULL){
		return 0;
	}
	if((*lis == NULL)){
		return 0;
	}
	*lis = no->prox;
	free(no);
	return 1;
}
int remove_lista_final (lista *lis){
	elem *ant, *no;
	no = *lis;
	if(lis == NULL){
		return 0;
	}
	if((*lis == NULL)){
		return 0;
	}
	while (no->prox != NULL){
		ant = no;
		no = no->prox;
	}
	if(no == (*lis)){
		*lis = no->prox;
	}else{
		ant->prox = no->prox;
	}
	free(no);
	return 1;
}
int remove_lista_menio(lista* lis, int mat){
	elem *ant, *no;
	no = *lis;
	if(lis == NULL){
		return 0;
	}
	while(no != NULL && no->registro.matricula != mat){
		ant = no;
		no = no->prox;
	}
	if(no == NULL){
		return 0;
	}
	if(no == *lis){
		*lis = no->prox;
	}else{
		ant->prox = no->prox;
	}
	free(no);
	return 1;
}
// Consulta
/*int consulta_lista_posicao(lista lis, int pos, alu *aluno){
	int i = 0;
	elem *no;
	no  = *lis;
	if(lis == NULL){
		return 0;
	}
	while (no != NULL && i < pos){
		no = no->prox;
		i++;
	}
	if (no == NULL){
		return 0;
	}else {
		*aluno = no->registro;
		return 1;
	}
}*/

void imprime_lista_recursiva(lista* lis,alu aluno){

	
	if(lista_vazia(lis)){
		return ;
	}else{
		printf("Nome: %s\n", aluno.nome);
		printf("Matricula: %d\n", aluno.matricula);
		printf("Nota da A1: %f\n", aluno.a1);
		printf("Nota da A1: %f\n", aluno.a2);
		imprime_lista_recursiva((*lis)->prox, aluno);
	}
}



