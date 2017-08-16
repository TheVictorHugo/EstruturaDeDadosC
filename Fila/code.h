#define N 5

typedef struct aluno {
	int matricula;
	char nome[50];
	float a1, a2;
}alu;

typedef struct filaestatica{
	int qtd;
	alu registros[N];
}fila;

