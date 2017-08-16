#define N 5

typedef struct aluno{
	char nome[50];
	int nota1;
	int nota2;
}alu;

typedef struct Pilha{
	int qtd;
	alu registros[N];
}pilha;

//prototipação
pilha* cria_pilha();
int push(pilha* vet, alu aluno);
alu insere_dados();

