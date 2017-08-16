/*
	Name: Victor Hugo rodrigeus da silva
	Copyright: 
	Author: 
	Date: 15/08/17 21:14
	Description: Pilha em C com grafico
*/

#include <stdio.h>
#include <stdlib.h>
#include "code.h"


void main(){
	pilha* vet;
	alu aluno;
	int opcao;
	int x;
	

	
	do{
		printf("======================ESTRUTURA DE PILHA ESTATICA====================\n\n");
		printf("               ===== 0 - Para sair do programa =====\n");
		printf("               ===== 1 - Cria pilhaa =====\n");
		printf("               ===== 2 - Inseri na pilha =====\n");
		printf("               ===== 0 - para sair do programa =====\n");
		printf("               ===== 0 - para sair do programa =====\n");
		printf("               ===== 0 - para sair do programa =====\n");
		printf("               ===== 0 - para sair do programa =====\n");
		printf("               ===== 0 - para sair do programa =====\n");
		printf("\n====================================================================\n");
		scanf("%d", &opcao);
		switch(opcao){
			case 1:
				
				vet = cria_pilha();
				if(vet != NULL){
				printf("\nPilha crida com sucesso !\n");
				}else{
					printf("\nErro\n");
				};
				break;
			case 2:
				aluno = insere_dados();
				x = push(vet, aluno);
				if(x == 1){
					printf("\nDados inseridos com sucesso!\n");
				}else{
					printf("\nErro\n");
				}
				
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				break;
			default:
				
				break;
		}
		
	}while(opcao != 0);
	
}
