#define N 5

typedef struct aluno{
	int matricula;
	char nome[50];
	float a1,a2;
}alu;

struct elemento{
	alu registro;
	struct elemento *prox;
};

typedef struct elemento* lista;
typedef struct elemento elem;

lista* cria_lista();
void libera_lista(lista* lis);
int tamanho_lista(lista* lis);
alu insere_dados();
int insere_inicio(lista* lis, alu aluno);
int lista_vazia (lista* lis);
int insere_final(lista* lis, alu aluno);
int insere_lista_ordenada(lista* lis, alu aluno);
//remoção
int remove_lista_inicio(lista *lis);
int remove_lista_final (lista *lis);
int remove_lista_menio(lista* lis, int mat);
//consulta
int consulta_lista_posicao(lista lis, int pos, alu *aluno);
//void imprime_lista_recursiva(lista* lis,alu aluno);
//alu imprime(lista* lis, alu aluno);





