#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "funcrecursivas.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){

	int a, b, i, n, k;
	char c;
	static char str[] = "";
	
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
	
	printf("\n\nSUPERFATORIAL DE n NATURAL\nDIGITE UM NATURAL\n");
	scanf("%d",&n);
	printf("\nO SUPERFATORIAL DE %d EH: \n%d", n, superFat(n));

	printf("\n\nHIPERFATORIAL DE n NATURAL\nDIGITE UM NATURAL\n");
	scanf("%d",&n);
	printf("\nO HIPERFATORIAL DE %d EH: \n%d", n, hiperFat(n));
	
	printf("\n\nFATORIAL EXPONENCIAL DE n NATURAL\nDIGITE UM NATURAL\n");
	scanf("%d",&n);
	printf("\nO FATORIAL EXPONENCIAL DE %d EH: \n%d", n, fatExp(n));
	
	printf("\n\nTRIBONACCI DE n NATURAL\nDIGITE UM NATURAL\n");
	scanf("%d",&n);
	printf("\nTRIBONACCI DE %d EH: \n%d", n, tribonacci(n));
	
	printf("\n\nTETRABONACCI DE n NATURAL\nDIGITE UM NATURAL\n");
	scanf("%d",&n);
	printf("\nTETRANACCI DE %d EH: \n%d", n, tetranacci(n));

	printf("\n\nPADOVAN DE n NATURAL\nDIGITE UM NATURAL\n");
	scanf("%d",&n);
	printf("\nPADOVAN DE %d EH: \n%d", n, padovan(n));
	
	printf("\n\nPELL DE n NATURAL\nDIGITE UM NATURAL\n");
	scanf("%d",&n);
	printf("\nPELL DE %d EH: \n%d", n, pell(n));

	printf("\n\nCATALAN DE n NATURAL\nDIGITE UM NATURAL\n");
	scanf("%d",&n);
	printf("\nCATALAN DE %d EH: \n%d", n, catalan(n));
	
	printf("\nPALAVRA FIBONACCI DE n NATURAL\nDIGITE UM NATURAL\n");
	scanf("%d",&n);
	printf("\nPALAVRA FIBONACCI DE %d EH: \n", n);
	printf("%s\n",palaFibonacci(n));
	
	binario(n);
	
	printf("\nMULTIPLICA DE a POR b USANDO SOMAS SUCESSIVAS\n");
	printf("INSIRA a: \n");
	scanf("%d",&a); 
	printf("INSIRA b: \n");
	scanf("%d",&b);
	printf("\n%d MULTIPLICADO POR %d EH: %d\n", a, b, multSomas(a, b));

	printf("\n     INVERTE STRING\n\n");
	printf("INSIRA STRING: \n");
	scanf("%s",&str); 
	printf("\nSTRING %s INVERTIDA EH: ", str);
	inverteString(str);

	printf("\nGERADOR DA SEQUENCIA F(1)=1, F(2)=2 , F(n)=2*F(n-1)+3*F(n-2)\n");	
	printf("INSIRA n: \n");
	scanf("%d",&n);
	printf("\nO %dTH DA SEQUENCIA EH: %d\n", n, sequencia(n)); 	
	
		

	printf("\n     TESTE PALINDROMOn\n");
	printf("INSIRA STRING: \n");
	scanf("%s",str);
	int teste = palindromo(str);
	if(teste == 1){
		printf("%s NAO EH PALINDROMO", str);
	}
	if(teste == 0){
		printf("%s EH PALINDROMO", str);
	}
	
	printf("\n     TESTE BUSCAn\n");
	printf("INSIRA O VETOR E DEPOIS O CARACTER A BUSCAR: \n");
	scanf("%s\n",&str); scanf("%c",&c);
	int r = buscaSeq(str, c);
	if(r == -1){
		printf("O caracter %c nao esta presente na string %s\n", c, str);	
	}
	else{
		printf("O indice encontrado eh %d e o caracter correspondente eh %c", r, str[r]);	
	}
	*/		 

	
	
	
	
	
	
		
}
