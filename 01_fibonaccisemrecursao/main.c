/*Nome: Victor Hugo Rodrigues da Silva;
Matricula: 1512130063;
exerc�cio: sem recurs�o fibonacci;
ver��o:1;
Turma: Quarta-feira / Noite;*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "code.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num;
	
	printf("Digite um numero");
	scanf("%d", &num);
	
	fibonacci(num);
	
	return 0;
}
