#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int qtd;
	int * elemento;
}pilha;

pilha * alocar ( int tamanho);
void menu(pilha * p);


int main ()
{
	pilha * p;
	int tamanho;
	printf("Digite o tamanho da pilha: ");
	scanf("%d",&tamanho);
	p = alocar(tamanho);
	menu(p);

	return 0;
	
}

pilha * alocar ( int tamanho)
{
	pilha * aux;
	aux = (pilha*)malloc(sizeof(pilha));
	aux->qtd=0;
	aux->elemento = (int*)malloc(sizeof(int)*tamanho);
	return aux;
		
} 


void menu(pilha * p)
{
	int opcao;
	do
	{
		printf("\n 1 - Push");
		printf("\n 2 - Pop");
		printf("\n 3 - Size");
		printf("\n 4 - Stackpop");
		printf("\n 5 - Empty");
		printf("\n 6 - Sair");
		scanf("%d",&opcao);
	
		switch(opcao)
		{
			case 1:
				printf("\n Push \n");
				break;
			case 2:
				printf("\n Pop \n");
				break;
			case 3:
				printf("\n Size \n");
				break;
			case 4:
				printf("\n Stackpop \n");
				break;
			case 5:
				printf("\n Empty \n");
				break;
			case 6:
				printf("\n Saindo do programa ");
				break;
			default:
				printf("\n Opcao invalida");
				break;
		}
	}while(opcao !=6);
	
	
}

//Emseri na pilha
int empilhar(Pilha * vetor; int tamanho){
	if(pilha == NULL){
		return 0;
	}
	if (pilha.qtd == tamanho){
		printf("Pilha Cheia !");
	}
	pilha->elemento[pilha->qtd] = elemento;
	pilha->qtd++;
	return 1;
}
//Retira da pilha

int desempilha (Pilha * vetor; int item){
	if(pilha == NULL){
		printf("Pilha não inicializada");	
	}
	if(pilha == 0){
		printf("pilha vazia");
	}
	pilha->elemento[pilha->qtd] = null;
	pilha->qtd--;
	
}


