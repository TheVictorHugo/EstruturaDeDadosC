/*
	Name: Victor Hugo Rodrigues da Silva
	Copyright: estrutura de dados fl?via
	Author: Victor Hugo Rodrigues da Silva
	Date: 15/03/17 20:41
	Description: Lista encadeada
	Turma:Quarta Noturno
*/
#include <stdio.h>
#include <stdlib.h>
#include "code.h"

int main(){
	system("color A");
	int x;
	alu aluno;
	lista *lis; // ponteiro para ponteiro ** //guarda endere?o de outro ponteiro
	int opcao;
	int pos;
	int mat;
	
	do {
		printf("\n##############################################################################\n");
		printf("                    ----------------------------\n");
		printf("                    |    Escolha uma opcao     |\n");
		printf("                    ----------------------------\n");
		printf("1- Criar Lista \n");
		printf("2- Tamanho da Lista\n");
		printf("3- Insere dados - Inicio\n");
		printf("4- Insere dados - Fim\n");
		printf("5- Insere dados - Ordenada\n");
		printf("6- Consulta\n");
		printf("7- Remove - inicio\n");
		printf("8- Remove - Final\n");
		printf("9- Remove - Meio\n");
		printf("10- Libera lista\n");
		printf("11- Libera lista\n");
		printf("##############################################################################\n\n\n");
		printf("opcao digitada: ");
		scanf("%d", &opcao);
		
		switch(opcao) {
			case 1:
				lis = cria_lista();
				printf("Lista Criada com sucesso!");
				break;
			case 2:
				x = tamanho_lista(lis);
				if(x != 0 ){
				printf("----------------------------\n");
				printf("|   Tamanho da lista %d     |", x);
				printf("\n----------------------------\n");
				}else{
				printf("----------------------------\n");
				printf("|   Lista vazia     |", x);
				printf("\n----------------------------\n");
				}
				
				break;
			case 3:
				insere_dados();
				x =  insere_inicio( lis, aluno);
				if(x == 1){
					printf("Dados inseridos com sucesso");
				}else{
					printf("Erro!");
				}
				break;
			case 4:
				insere_dados();
				x = insere_final( lis, aluno);
				if(x == 1){
					printf("Dados inseridos com sucesso");
				}else{
					printf("Erro!");
				}
				break;
			case 5:
				aluno = insere_dados();
				x = insere_lista_ordenada(lis, aluno);
				if(x == 1){
					printf("Dados inseridos com sucesso");
				}else{
					printf("Erro!");
				}
				break;
			case 6:
				//x = consulta_lista_posicao( lis, pos, &aluno);
				break;
			case 7:
				remove_lista_inicio(*lis);
				break;
			case 8:
				remove_lista_final ( *lis);
				break;
			case 9:
				remove_lista_menio(lis, mat);
				break;
			case 10:
				lista_vazia(lis);
				break;
			case 11:
				//imprime_lista_recursiva(lis);
				break;	
	default:
		printf("Por favor, Escolha uma opcao válida.");
}

		
} while(opcao != 0);

}

