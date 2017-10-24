#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "code.h"


liv insere(){
	liv l; //define o tipo de varianvel
	printf("\nDigite o nome do livro: ");
	gets(l.titulo);
	printf("\nDigite o codigo do livro: ");
	scanf("%d", &l.numreg);
	getchar();
	return(l);//retorna a lista
}
void imprime(liv ll){
	printf("\n\nTitulo: %s, \nLivro: %d\n", ll.titulo,ll.numreg);
}
