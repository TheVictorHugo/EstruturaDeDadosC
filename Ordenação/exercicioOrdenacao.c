#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//prototipagem
void bubbleSort(int vet[], int tam);
void selectionSort(int vet[], int tam);
void imprimir(int vet[],int tam);
void selectionSort(int vet[], int tam);
void quickSort(int vetor[], int ini, int fim);
void insertionSort(int vet[], int tam);
void mergSort(int vet[], int ini, int fim);
void intercala(int vet[], int ini,int meio,int fim);

int main(){
	int vet[10] = {3,5,1,8,9,2,6,7,4,10};
    int tam = 10;
    int opcao;
    int i,n;

    printf("\nDigite o quantos numeros serao gerados: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
       vet[i] = (rand()%100);
       printf("\n%d", vet[i]);
    }
    //imprimir(vet, n);
    do{

        printf("\n===================================================");
        printf("\n0 - sair");
        printf("\n1 - selectionSort");
        printf("\n2 - quickSort");
        printf("\n3 - bubbleSort");
        printf("\n4 - insertionSort");
        printf("\n5 - mergSort");
        printf("\n6 - imprimir");

        printf("\n===================================================\n");
        scanf("%d", &opcao);


        switch(opcao){
            case 1:
            selectionSort(vet,tam);
            break;
            case 2:
            quickSort(vet,0,tam-1);
            break;
            case 3:
            bubbleSort(vet, tam);
            break;
            case 4:
            insertionSort(vet, tam);
            break;
            case 5:
            mergSort(vet, 0, tam);
            break;
            case 6:
            imprimir(vet, tam);
            break;
        };

    }while(opcao != 0);
    /*
    printf("\nDigite o quantos numeros serao gerados: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
       tam[i] = (rand()%100);
       printf("%d", tam[i]);
    }*/
	
  

	return 1;	
}

// Bubble Sort
void bubbleSort(int vet[], int tam){
	int i,j,aux;
	for(i=0;i<tam;i++){ // for para percorre todo o vetor
		for(j=0;j< tam-1;j++){
			if(vet[j] > vet[j+1]){
				// troca de posi��o se a compara��o for verdadeira
				aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
			}
		}
		tam --; // fica organizado de traz para frente
	}	
}

//Selection Sort
/*
void selectionSort(int vet[], int tam){
	int i, j, aux;
	for(i=1; i< tam; i++){  // for para percorrer todo ov etor
		j = i;
		while(vet[j] < vet[j -1]){
			// troca de posi��o se a compara��o for verdadeira
			aux = vet[j];
			vet[j] = vet[j -1];
			vet[j - 1] = aux;
			j--; // faz a compara��o do j at� o zero
		}
	}
}*/

void selectionSort(int vet[], int tam){
    int i,j,aux,min;
    for(i=0;i<tam-1;i++){
        min = i;
        for(j=i+1;j<tam;j++){
            if(vet[j] < vet[min]){
                min =j;
            }
        }
        aux = vet[i];
        vet[i] = vet[min];
        vet[min] = aux;
    }
    //printf("\ntest");
    return;
}

void quickSort(int vetor[], int ini, int fim){
    int pivo, aux, temp;
    if(ini == fim){
        return;
    }
    pivo = ini;
    aux = fim;
    while(pivo != aux){
        if(pivo < aux){
            if(vetor[pivo] > vetor[aux]){
                temp = vetor[pivo];
                vetor[pivo] = vetor[aux];
                vetor[aux] = temp;
                temp =pivo;
                pivo = aux;
                aux =temp;
            }
        }else{
            if(vetor[pivo] < vetor[aux]){
                temp = vetor[pivo];
                vetor[pivo] = vetor[aux];
                vetor[aux] = temp;
                temp = pivo;
                pivo = aux;
                aux = temp; 
            }
        }
        if(pivo <aux){
            aux--;
        }else{
            aux++;
        }
    }
    if(aux!=fim){
        quickSort(vetor,aux+1,fim);
    }
    if(aux != ini){
        quickSort(vetor,ini,aux-1);
    }
}

void insertionSort(int vet[], int tam){
    int i,j,aux;
    for(i =1;i<tam;i++){
        aux = vet[i];
        for(j=i-1;j>=0 && aux <vet[j];j--){
            vet[j+1] = vet[j];
        }
        vet[j+1] = aux;
    }
    return;
}

void mergSort(int vet[], int ini, int fim){
    int meio;
    if(ini < fim){
        meio = (ini + fim)/2;
        mergSort(vet,ini,meio);
        mergSort(vet,meio+1,fim);
        intercala(vet,ini,meio,fim);
    }
}

void intercala(int vet[], int ini,int meio,int fim){
    int i,j,k, *aux;
    aux = (int*)calloc(sizeof(int),fim-ini+1);
    i = ini;
    j =meio + 1;
    k = 0;
    while(i <= meio && j<= fim){
        if(vet[i] <= vet[j]){
            aux[k] = vet[i];
            i++;
        }else{
            aux[k] = vet[j];
            j++;
        }
        k++;
    }
    while(i<=meio){
        aux[k] = vet[i];
        i++;
        k++;
    }
    while(j<=fim){
        aux[k] = vet[j];
        j++;
        k++;
    }
    for(i = 0; i<(fim -ini)+ 1; i++){
        vet[ini + i] = aux[i];
    }
    free(aux);
    return;
}

void imprimir(int vet[],int tam){
	int i;
	for(i = 0; i< tam; i++ ){
		printf("\n%d", vet[i]);
	}
	printf("\n");
}







