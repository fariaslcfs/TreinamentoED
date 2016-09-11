#include <stdio.h>
#include <stdlib.h>

int main(){ 
	
	int i, *p, *q, j, aux;
	int vetor[20],vetorAux[20];
	
	printf("Digite 20 numeros inteiros: \n");
	for (i = 0; i < 20; i++){
		scanf("%d",&vetor[i]);
		p++;
	}
	
	p = vetor; q = vetorAux;
	
	for (i = 0; i < 20; i++){
		*q = *p; q++; p++;		
	}
	
	q = vetorAux; p = vetor;
	
	for (i = 0; i < 19; i++){
		for (j = 0; j < 19; j++){
			if (*q > *(q + 1)){
				aux = *q;
				*q = *(q + 1);
				*(q + 1) = aux;
			}
			q++;
		}
		q = vetorAux;
	}
	
	for (i = 0; i < 20; i++){
		if (vetorAux[0] == vetor[i]){
			printf("%d %dth\n", vetorAux[0], i + 1);
		}
		if (vetorAux[19] == vetor[i]){
			printf("%d %dth\n", vetorAux[19], i + 1);
		}
	}
	return 0;
}
