#include <stdio.h>
#include <stdlib.h>
#include "code.h"


fila* cria_fila(){
	fila *vet =(fila*) malloc(sizeof(fila));
	if (vet != NULL){
		vet->inicio = 0;
		vet->final = 0;
		vet->qtd = 0;
	}
	return 0;
}
//remover fila


void remove_fila(fila* vet){
	free(vet);
}

int insere_fila(fila *vet, avi aviao){
	if(vet == NULL){
		return 0;
	}
	if(vet->qtd == N){ //verificar esssa linha
		return 0;
	}
	vet->registros[vet->final] = aviao;
	vet->final = (vet->final + 1) % N;
	vet->qtd++;
	return 1;
}
int remover_elemento(fila *vet){
	if(vet == NULL){
		return 0;
	}
	if(vet->qtd == 0){
		printf("Fila vazia");
	}
	printf("remove qtd = %d\n", vet->qtd);
	vet->inicio = (vet->inicio + 1) % N;
	vet->qtd--;
	return 1;
}

avi insere_dados(){
	avi aviao;
	printf("Nome: do aviao:  ");
	fflush(stdin);
	gets(aviao.nome);
	printf("Numero do aviao");
	fflush(stdin);
	scanf("%f", &aviao.numeroAviao);
	return aviao;
}

int lista_numero_de_aviao(fila* vet){

	int x;
	x = vet->qtd;
	return(x);
}

void pilha_imprime(fila *vet, avi aviao){
	int i;
	for(i=vet->qtd; i<vet->qtd;i++){
		//printf("\n aviao %d", registros->numeroAviao);
	}
}






