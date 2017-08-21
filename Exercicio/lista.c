#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){]
    lista * l;
    l = cria_lista();
    return 1;
}

//prototipagem
typedef struct Lista{
    int qtd;
    struct elemento* inicio;
}lista;

typedef struct Elemnto{
    int valor;
    struct elemento* prox;
}elemento;

lista * cria_lista();

//funções

lista * cria_lista(){
    lista * no;
    no = (lista*)malloc(sizeof(lista));
    no->qtd = 0;
    no->inicio = NULL;
    return no;
};

void inseri_lista(lista * l, int x){
    elemento * novo;
    novo = (lista*)malloc(sizeof(lista));

    if(l->qtd == 0){
        l->inicio = novo;
    }else{
        while(novo->prox != NULL){
            novo = novo->prox;
        }
        novo->[novo->prox] = x;
        l->qtd++
    }
}

int retira_lista(lista* l, int x){
    elemento *ant=NULL;*atual=NULL;*seguinte=NULL;
    atual =l->inicio;

    if(l->qtd == 0){
        return 0;
    }
    /*
    while(atual->valor != x){
        atual = atual->prox;
    };
    if(atual->qtd == 0){
        l->inicio = atual;
        return 1;
    }else{
        ant = atual;
        atual = atual->prox;
        return 1;
    }*/


    while(1){
        if(atual->valor != x){
            atual = atual->prox;
        }else{
            if(atual->qtd == 0){
                l->inicio = atual;
                return 1;
            }else{
                ant = atual;
                atual = atual->prox;
                return 1;
            }
        }
    }
}

void mostrsr(lista * l){
    Elemnto *aux;
    if(l->qtd == 0){
        printf("\n lista vazia");
        return 0;
    }else{
        aux = l->inicio;
        printf("%d",auxe->valor);
        while(aux->prox != NULL){
            aux = aux->prox;
            printf("%d",auxe->valor);
        }
    }
}

int bustar(lista *l, int x){
    elemnto *aux;
    if(l->qtd == 0){
        return 0;
    }else{
        aux = l->inicio;
        while(aux->valor != x){
            aux = aux->prox;
        }
        return aux->valor;
    }
}
