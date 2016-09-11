#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct lst {
	int val;
	struct lst * prox;
};

/*-----------------------------------------------------------*/

lst * iniciaListaComCabeca(){
	lst * cabeca = (struct lst *) malloc(sizeof(lst));
	cabeca->prox =  NULL;
	return cabeca;	
}

/*-----------------------------------------------------------*/

lst * iniciaListaSemCabeca(){
	return NULL;
}

/*-----------------------------------------------------------*/

int listaVazia(lst * l){
	return (l->prox == NULL);
}

/*-----------------------------------------------------------*/

lst * insereLista (lst * l, int dado){
	
	lst * novo;
	
	if (l == NULL){
		l = iniciaListaComCabeca();
	}
	
	novo = (struct lst *) malloc(sizeof(lst));
	novo->val = dado;
	novo->prox = l->prox;
	l->prox = novo;
	
	return l;	
}

/*-----------------------------------------------------------*/

int main(){
	
	int n, a;
	lst * l;
	lst * lista = NULL;

	for (n = 1; n < 11; n++){
		lista =	insereLista(lista, n);
		a = n * 2;
	}
	
	for (l = lista->prox; l != NULL; l = l->prox){
		printf("%d\t%d\n",l->val,l);
	}
	
	return 0;
	
}

