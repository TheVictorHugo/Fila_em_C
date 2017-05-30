#define N 5

typedef struct aluno {
	int numeroAviao;
	char nome[50];
	
}avi;

typedef struct filaestatica{
	int inicio, final, qtd;
	avi registros[N];
}fila;

fila* cria_fila();
int insere_fila(fila *vet, avi aviao);
void remove_fila(fila* vet);
int remover_elemento(fila *vet);
avi insere_dados();
int lista_numero_de_aviao(fila* vet);
