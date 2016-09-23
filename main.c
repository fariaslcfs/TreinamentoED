#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funcrecursivas.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){

	int i, n, k;
	
	/*
	
	printf("\nFATORIAL DE n: \nINSIRA UM NUMERO INTEIRO: \n");
	scanf("%d",&n);
	printf("O FATORIAL DE %d EH: %d\n\n", n, fatorial(n));
	
	printf("\nFIBONACCI DE n: \nINSIRA UM NUMERO INTEIRO: \n");
	scanf("%d",&n);
	printf("O %dth NUMERO DA SEQUENCIA FIBONACCI EH: %d\n\n", n, fibonacci(n));
	
	printf("\nINVERSOR DE n: \nINSIRA UM NUMERO INTEIRO: \n");
	scanf("%d",&n);
	printf("\nO NUMERO %d INVERTIDO EH: %d\n\n", n, inverteSig(n));
	
	printf("SOMA ELEMENTOS VETOR. INSIRA TAMANHO VETOR: \n");
	scanf("%d",&n);
	printf("\nINSIRA ELEMENTOS DO VETOR DE TAMANHO %d\n", n);
	int vetor[n];
	for(i = 0; i < n; i++){
		printf("INSIRA O %dth ELEMENTO NO VETOR\n",i + 1);
		scanf("%d",&vetor[i]);
	}	
	printf("\nA SOMA DOS ELEMENTOS DO VETOR EH: %d\n\n", somaVetor(vetor, n));
	
	printf("\nSOMA1AN. INSIRA UM NUMERO INTEIRO: \n");
	scanf("%d",&n);
	printf("\nA SOMA DE 1 ATE %d EH: %d\n\n", n, soma1aN(n));

	printf("POTENCIA DE K ELEVADO A N. INSIRA N e K\n");
	scanf("%d",&k);
	printf("\n");
	scanf("%d",&n);
	printf("\n%d ELEVADO A %d EH: %d\n\n", k, n, potenciakn(k,n));

	float vet[9] = {1.0, 3.0, 4.0, 7.0, 10.0, 3.0, 11.0, 23.0, 35.0};	
	printf("INVERTE O VETOR [1, 3, 4, 7, 10, 3, 11, 23, 35]\n");
	inverteVetor(vet, 9);	
	for(i = 0; i < 9; i++){
		printf("%f ", vet[i]);
	}
    
	printf("\n\nMAXIMO DIVISOR COMUM DE %d E %d EH: %d\n\n", 12, 8, maxDivCom(12, 8));  
	
	printf("\nSOMA OCORRENCIAS DE DIGITOS: INSIRA UM NUMERO INTEIRO E DIGITO QUE SE QUER CONTAR AS OCORRENCIAS: \n");
	printf("NUMERO INTEIRO\n");
	scanf("%d",&n);
	printf("DIGITO\n");
	scanf("%d",&k);
	printf("\n%d APARECE %d VEZ(ES) EM: %d\n\n", k, sumMatches(n, k, 0), n);
 
	printf("\nMULTIPLICACAO POR SOMAS RECURSIVAS\n");
	printf("INSIRA DOIS INTEIROS (a x b) \n\nINSIRA O PRIMEIRO NUMERO\n");
	scanf("%d",&n);
	printf("\nINSIRA O SEGUNDO NUMERO\n");
	scanf("%d",&k);
	printf("%d MULTIPLICADO POR %d EH: %d\n\n", n, k, multRec(n, k));
	
	printf("\nSEQUENCIA NATURAIS\nDIGITE UM INTEIRO\n");
	scanf("%d", &n);
	printf("\nA SEQUENCIA RECURSIVA DE 0 ATE %d EH:\n\n", n);
	retNaturaisSig(n);
	
	printf("\nSEQUENCIA NATURAIS\nDIGITE UM INTEIRO\n");
	scanf("%d", &n);
	printf("\nA SEQUENCIA RECURSIVA DE %d ATE 0 EH:\n", n);
	retNaturaisDecSig(n); 	
	
	printf("\nSEQUENCIA NATURAIS PARES\nDIGITE UM INTEIRO\n");
	scanf("%d", &n);
	printf("\nA SEQUENCIA PARES RECURSIVA DE 0 ATE %d EH:\n", n);
	retSeqParSig(n);
	
	printf("\nSEQUENCIA NATURAIS PARES DECRESCENTE\nDIGITE UM INTEIRO\n");
	scanf("%d", &n);
	printf("\nA SEQUENCIA PARES RECURSIVA DE %d ATE 0 EH:\n", n);
	retSeqParDecSig(n);
	
	printf("\n\nFATORIAL DUPLO DE n IMPAR\nDIGITE UM NATURAL IMPAR\n");
	scanf("%d", &n);
	printf("\nO FATORIAL DUPLO DE %d EH:\n%d", n, fatDuplo(n));
	                       
	printf("\n\nFATORIAL QUADRUPLO DE n\nDIGITE UM NATURAL\n");
	scanf("%d", &n);
	printf("\nO FATORIAL QUADRUPLO DE %d EH:\n%d", n, fatQuadruplo(n));
	
	*/
	
	printf("\n\nSUPERFATORIAL DE n NATURAL\nDIGITE UM NATURAL\n");
	scanf("%d",&n);
	printf("\n O SUPERFATORIAL DE %d EH: \n%d", n, superFat(n));

	printf("\n\nHIPERFATORIAL DE n NATURAL\nDIGITE UM NATURAL\n");
	scanf("%d",&n);
	printf("\n O HIPERFATORIAL DE %d EH: \n%d", n, hiperFat(n));
	



	return 0;
	



	
}
