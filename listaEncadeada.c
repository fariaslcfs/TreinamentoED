#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct lst {
	int val;
	struct lst * prox;
};

lst * iniciaListaComCabeca(){
	lst * cabeca;
	cabeca = malloc(sizeof(cabeca));
	cabeca->prox =  NULL;
	return cabeca->prox;	
}

lst * iniciaListaSemCabeca(){
	return NULL;
}

int VerificaLista(lst * l){
	return (l->prox == NULL);
}

Lista * insereLista (lst * l, int dado){
	
	lst * novo;
	
	if (VerificaLista(l)){
		printf("Lista vazia. Iniciando lista...\n")
		l = iniciaListaComCabeca();
	}
	
	novo = malloc(sizeof(lst));
	novo->prox = NULL;
	novo->val = dado;
	l->prox = novo;
	
}



