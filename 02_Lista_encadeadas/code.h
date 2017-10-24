
struct lista{
	int info;
	struct lista* prox; //declarando um tipo lista com nome prox
};

typedef struct lista Lista; //mudando o nome de lista para Lista

Lista* criar_lista(void);
Lista* insere_lista(Lista* l, int i);
void insere(Lista**l, int i);
void imprime(Lista* l);

