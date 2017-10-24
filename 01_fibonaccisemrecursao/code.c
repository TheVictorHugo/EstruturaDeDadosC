#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "code.h"

int fibonacci(int n){
	int auxiliar;
	int i;
	int a = 0;
	int b = 1;
	int c = 1;
	for(i=0;i<n;i++){
		auxiliar = a + b;
		a = b;
		b = auxiliar;
		
		printf("%d\n", auxiliar);
			
		}	
	}

