#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//prototipagem
void bubble(int vet[], int tam);
void selectionSort(int vet[], int tam);
void imprimir(int vet[],int tam);

int main(){
	int vet[10] = {3,5,1,8,9,2,6,7,4,10};
	int tam = 10;
	
	imprimir(vet, tam);
	
	//bubble(vet, tam);
	//imprimir(vet, tam);
	
	selectionSort(vet,tam);
	imprimir(vet, tam);

	return 1;	
}

// Bubble Sort
void bubble(int vet[], int tam){
	int i,j,aux;
	for(i=0;i<tam;i++){ // for para percorre todo o vetor
		for(j=0;j< tam-1;j++){
			if(vet[j] > vet[j+1]){
				// troca de posição se a comparação for verdadeira
				aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
			}
		}
		tam --; // fica organizado de traz para frente
	}	
}

//Selection Sort
void selectionSort(int vet[], int tam){
	int i, j, aux;
	for(i=1; i< tam; i++){  // for para percorrer todo ov etor
		j = i;
		while(vet[j] < vet[j -1]){
			// troca de posição se a comparação for verdadeira
			aux = vet[j];
			vet[j] = vet[j -1];
			vet[j - 1] = aux;
			j--; // faz a comparação do j até o zero
		}
	}
}


void imprimir(int vet[],int tam){
	int i;
	for(i = 0; i< tam; i++ ){
		printf("%d", vet[i]);
	}
	printf("\n");
}







