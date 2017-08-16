#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "code.h"


pilha* cria_pilha(){
	pilha* p; 
	p = (pilha*)malloc(sizeof(pilha));
	p->qtd;
	return p;
}

int push(pilha* vet, alu aluno){
	if(vet->qtd == N){
		printf("pilha Cheia!");
		return 0;
	};
	vet->registros[vet->qtd] = aluno;
	vet->qtd++;
	return 1;
}

alu insere_dados(){
	alu aluno;
	printf("Digite o nome do aluno:\n");
	fflush(stdin);
	gets(aluno.nome);
	printf("Digite a nota 1 do aluno:\n");
	scanf("%d", &aluno.nota1);
	printf("Digite a nota 2 do aluno:\n");
	scanf("%d", &aluno.nota2);
	return aluno;
}
