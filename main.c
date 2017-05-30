/*
	Name: Victor Hugo
	Copyright: 
	Author: 
	Date: 29/05/17 21:42
	Description: Faça um programa para simular um controlador de voo de um aeroporto. Neste programa o usuário deve ser capaz de realizar as seguintes tarefas:
					a) Listar o número de aviões esperando para decolar
					b) Autorizar a decolagem do primeiro avião na fila
					c) Adicionar um avião na fila de espera
					d) Listar todos os aviões que estão na lista de espera
					e) Listar as características do primeiro avião da fila
					Considere que uma estrutura de dados do tipo fila seja usada para manipular os dados e que cada avião possui um nome, um identificador, uma origem e um destino.
					Vale ponto para A2
					Data de entrega: 7/6/2017
	
*/

#include <stdio.h>
#include <stdlib.h>
#include "code.h"


void main(){
	fila *vet;
	avi aviao;
	int opcao;
	int x;
	
	vet = cria_fila();
	
	do{
		printf("Controlador de voo\n\n");
		printf("1 - Listar o número de aviões esperando para decolar\n");
		printf("2 - Autorizar a decolagem do primeiro avião na fila\n");
		printf("3 - Adicionar um avião na fila de espera\n");
		printf("4 - Listar todos os aviões que estão na lista de espera\n");
		printf("5 - Listar as características do primeiro avião da fila\n\n");
		scanf("%d", &opcao);
		
		switch(opcao) {
			case 1:
				x = lista_numero_de_aviao(vet);
				printf("\no numero de avião esperando para decolar e : %d", x );
				break;
			case 2:
				x = remover_elemento(vet);
				if(x == 1){
					printf("\nDecolagem altorizada com sucesso!");
				}else{
					printf("\nDecolagem nao autorizada");
				}
				
				break;
			case 3:
				aviao =  insere_dados();
				x =  insere_fila(vet,  aviao);
				if(x == 1){
					printf("\nO aviao foi adicionado na fila");
				}else{
					printf("\nO aviao nao pode entrear na fila");
				}
				break;
			case 4:
				
				break;
			case 5:
				
				break;
		
		};

}

			
	
		
	while(opcao != 0);

}
