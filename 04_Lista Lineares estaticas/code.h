
//Criar lista
//Desalocar memória
//Inserir daods na lista
//Verificar situação da lista

#define N 5

typedef struct aluno{
	int matricula;
	char nome[50];
	float a1, a2;
}alu;

typedef struct listalinear{
	int qtd;
	alu registros[N];
}lista;
