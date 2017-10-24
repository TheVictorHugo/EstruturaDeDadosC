/*Lista criada com base no livro de esctrutura de dados
Ruy Luiz Milidiú
*/
#include <stdio.h>
#include <stdlib.h>
#include "code.h" //inserção da biblioteca

int  main(){
	Lista* l; //declara uma lista não inicializada
	l = criar_lista();//cria e inicializa lista como vazia
	l = insere_lista(l,  23);//insere na lista o elemnto 23
	l = insere_lista(l,  45);//insere na lista o elemnto 23
	insere(&l, 25);//insere na lista o elemnto 25 de um modo diferente
	
	imprime( l);
	
	return 0;
}


