#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* Ex1 --> Faça uma função recursiva que calcule e retorne o fatorial de um número inteiro N. */
int fatorial(int n){
	if(n < 2) {
		return 1;
	}
	return n * fatorial(n - 1);	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex2 --> Faça uma função recursiva que calcule e retorne o N-ésimo termo da sequência Fibonacci. 
        Alguns números desta sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...        */
int fibonacci(int n){
	if(n < 2){
		return 1;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex3 --> Faça uma função recursiva que permita inverter um número inteiro N. Ex: 123 - 321 */
int inverte(int n){
	if((n / 10) == 0){
		return n;
	}
	return inverte(n / 10) + (n % 10) * pow(10, abs(log10(n)));
}

int inverteSig(int n){
	if(n < 0){
		return -1 * inverte(n * -1);
	}
	return inverte(n);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex4 --> Faça uma função recursiva que permita somar os elementos de um vetor de inteiros. */
int somaVetor(int vet[], int n){
	if(n == 1){
		return vet[0];
	}
	return vet[n - 1] + somaVetor(vet, n - 1);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex5 --> Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório dos números de 1 a N */
int soma1aN(int n){
	if(n == 1){
		return 1;
	}
	return n + soma1aN(n - 1);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex6 --> Crie um programa em C, que contenha uma função recursiva que receba dois inteiros positivos k e n e calcule kn. 
Utilize apenas multiplicações. O programa principal deve solicitar ao usuário os valores de k e n e imprimir o resultado
da chamada da função. */	
int potenciakn(int k, int n){
	if(n == 1){
		return k;
	}
	return k * potenciakn(k, n - 1);			
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex7 --> Crie um programa em C que receba um vetor de números reais com 100 elementos. Escreva uma função recursiva que
inverta ordem dos elementos presentes no vetor. */
float inverteVetor(float vet[], int n){
	int aux;
	if(n % 2 == 0){
		aux = 0;
	}
	else{
		aux = -1;
	}
	float interna(float vet[], int n, int i){
		if(n == i){
			return vet[n];
		}
		float aux;
		interna(vet, n - 1, i + 1);
		aux = vet[n-1];
		vet[n-1] = vet[i+1];
		vet[i+1] = aux;
	}
	return(interna(vet, n, aux));
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex8 --> máximo divisor comum dos inteiros x e y é o maior inteiro que é divisível por x e y. Escreva uma função recursiva mdc em C, 
que retorna o máximo divisor comum de x e y. O mdc de x e y é definido como segue: se y é igual a 0, então mdc(x,y) é x; 
caso contrário, mdc(x,y) é mdc (y, x%y), onde % é o operador resto.*/
int maxDivCom(int a, int b){
	if( b == 0){
		return a;
	}
	maxDivCom(b, a % b);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex9 --> Escreva uma função recursiva que determine quantas vezes um dígito K ocorre em um número natural N. 
Por exemplo, o dígito 2 ocorre 3 vezes em 762021192 */
int sumMatches(int n, int k, int i){
	if(n % 10 == k){
		i++;
	}
	if(n % 10 == n){
		return i;
	}
	sumMatches(n / 10, k, i);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex10 --> A multiplicação de dois números inteiros pode ser feita através de somas sucessivas. Proponha um algoritmo recursivo
Multip_Rec(n1,n2) que calcule a multiplicação de dois inteiros */
int multRec(int a, int b){
	if(a == 0 || b == 0){
		return 0;
	}
	if(b == 1){
		return a;
	}
	return a + multRec(a, b - 1);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex11 --> Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os números naturais de 0 
até N em ordem crescente. */

int retNaturais(int n){
	if(n == -1){
		return 0;               
	}	
	1 + retNaturais(n - 1);
	printf("%d ", n);	
}

int retNaturaisSig(int n){
	if(n < 0){
		return retNaturais(n * -1);
	}
	return retNaturais(n);
}	
/*----------------------------------------------------------------------------------------------------------*/

/* Ex12 --> Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os números naturais de 
0 até N em ordem decrescente */
int retNaturaisDec(int n){
	if(n == -1){
		return 0;
	}
	printf("%d ", n);
	retNaturaisDec(n - 1);
}

int retNaturaisDecSig(int n){
	if(n < 0){
		return retNaturaisDec(n * -1);
	}
	return retNaturaisDec(n);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex13 --> Faça uma função recursiva que receba um número inteiro positivo par N e imprima todos os números pares 
de 0 até N em ordem crescente. */
int retSeqPar(int n){
	if(n < 0){
		return 0;
	}
	2 + retSeqPar(n - 2);
	printf("%d ", n);
}

int retSeqParSig(int n){
	if(n < 0){
		return -1 * retSeqPar(n);
	}
	return retSeqPar(n);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex14 --> Faça uma função recursiva que receba um número inteiro positivo par N e imprima todos os números pares
de 0 até N em ordem decrescente. */
int retSeqParDec(int n){
	if(n == 0){
		printf("%d ", 0);
		return 0;
	}
	if(n % 2 == 0){
		printf("%d ", n);	
	}
	retSeqParDec(n - 1);
}
int retSeqParDecSig(int n){
	if(n < 0){
		return -1 * retSeqParDec(n);
	}
	return retSeqParDec(n);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex15 --> A função fatorial duplo é definida como o produto de todos os números naturais ímpares de 1 até algum
número natural ímpar N. Assim, o fatorial duplo de 5 é 5!! = 1 * 3 * 5 = 15 */

int fatDuplo(int n){
	if(n == 1){
		return 1;
	}
	if(n % 2 == 0){
		return 0;
	}
	return n * fatDuplo(n - 2);	
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex16 --> O fatorial quádruplo de um número N é dado por (2n)!/n! Faça uma função recursiva que receba um número 
inteiro positivo N e retorne o fatorial quádruplo desse número. */
int fatQuadruplo(int n){
	int interna(int n, int k){
		if(n == k){
			return  k;
		}
		return n * interna(n - 1, k);
	}
	return interna(2 * n, n + 1);	
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex17 --> O superfatorial de um número N é definida pelo produto dos N primeiros fatoriais de N. Assim, o superfatorial de 4 é
sf(4) = 1! * 2! * 3! * 4! = 288. Faça uma função recursiva que receba um número inteiro positivo N e retorne o superfatorial 
desse número. */
int superFat(int n){
	if(n == 0 || n == 1){
		return 1;
	}
	int interna(int n){
		if(n == 0 || n == 1){
			return 1;
		}
		return n * interna(n - 1);
	}
	return interna(n) * superFat(n - 1);
	
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex18 --> O hiperfatorial de um número N, escrito H(n), é definido por H(n) = 1^1 * 2^2 * ... * (n - 1)^ n - 1 * n^n
Faça uma função recursiva que receba um número inteiro positivo N e retorne o hiperfatorial desse número. */
long int hiperFat(int n){
	if(n == 1 || n == 0){
		return 1;
	}
	long int interna(int n, int k){
		if(k == 1){
			return n;
		}
		return n * interna(n, k - 1);
	}
	
	return interna(n, n) * hiperFat(n - 1);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex19 --> Um fatorial exponencial é um inteiro positivo N elevado à potência de N-1, que por sua vez é elevado
à potência de N-2 e assim em diante. Ou seja, n ^ (n - 1) ^ (n - 2) ^ ...^ 1. Faça uma função recursiva que receba
um número inteiro positivo N e retorne o fatorial exponencial desse número.*/

unsigned int fatExp(int n){
	if(n == 0){
		exit(0);
	}
	if(n == 1 || n == 2){
		return n;
	}	
	unsigned int interna(int n, int k){
		if(k == 1){
			 return n;
		}
		return interna(n * interna(n, k - 1), k - 1);
	}
	return interna(n, n - 1);
 }
/* ----------------------------------------------------------------------------------------------------------*/

/* Ex20 --> Os números tribonacci são definidos pela seguinte recursão: 
F(n) = 0 se n = 0; F(n) = 0 se n = 1; F(n) = 1 se n = 2; F(n) = F(n - 1) + F(n - 1) + F(n - 3) se n > 2
Faça uma função recursiva que receba um número N 
e retorne o N-ésimo termo da sequência de tribonacci. */

int tribonacci(int n){
	if(n == 0 || n == 1){
		return 0;
	}
	if(n == 2){
		return 1;
		
	}
	return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex21 --> Os números tetranacci iniciam com quatro termos pré-determinados e a partir daí todos os demais números são
obtidos pela soma dos quatro números anteriores. Os primeiros números tetranacci são: 
0, 0, 0, 1, 1, 2, 4, 8, 15, 29, 56, 108, 208... Faça uma função recursiva que receba um número N e retorne o 
N-ésimo termo da sequência de tetranacci. */
int tetranacci(int n){
	if(n == 0 || n == 1 || n == 2){
		return 0;
	}
	if(n == 3){
		return 1;
	}
	return tetranacci(n - 1) + tetranacci(n - 2) + tetranacci(n - 3) + tetranacci(n - 4);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex22 -->  A sequência de Padovan é uma sequência de naturais P(n) definida pelos valores iniciais
P(0) = P(1) = p(2) = 1 e a seguinte relação recursiva: P(n) = P(n - 2) + P(n - 3) se n > 2
Alguns valores da sequência são: 1, 1, 1, 2, 2, 3, 4, 5, 7, 9, 12, 16, 21, 28...
Faça uma função recursiva que receba um número N e retorne o N-ésimo termo da sequência de Padovan. */
int padovan(int n){
	if(n == 0 || n == 1 || n == 2){
		return 1;
	}
	return padovan(n - 2) + padovan(n - 3);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex23 --> Os números de Pell são definidos pela seguinte recursão: P(n) = 0 se n = 0; P(n) = 1 se n = 1;
P(n) = 2P(n - 1) + P(n - 2) Alguns números desta sequência são: 0, 1, 2, 5, 12, 29, 70, 169, 408, 985...
Faça uma função recursiva que receba um número N e retorne o N-ésimo número de Pell.*/

int pell(int n){
	if(n == 0){
		return 0;
	}
	if(n == 1){
		return 1;
	}
	return 2 * pell(n - 1) + pell(n - 2);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex24 --> Os números de Catalan são definidos pela seguinte recursão: C(n) = 1 se n = 0; 2(2n - 1)C(n - 1)/n + 1 se n > 0
Alguns números desta sequência são: 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796, 58786...
Faça uma função recursiva que receba um número N e retorne o N-ésimo número de Catalan. */
int catalan(int n){
	if(n == 0){
		return 1;
	}
	return 2 * (2 * n - 1) * catalan(n - 1) / (n + 1);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex25 --> Uma palavra de Fibonacci é definida por  f(n) = b se n = 0; f(n) = a se n = 1; f(n - 1) + f(n - 2)
Aqui + denota a concatenação de duas strings. Esta sequência inicia com as seguintes palavras:
b, a, ab, aba, abaab, abaababa, abaababaabaab, ...  Faça uma função recursiva que receba um número N e
retorne a N-ésima palavra de Fibonacci.*/
char * palaFibonacci(int n){

	char * interna(int n, char * menos1, char * menos2){
		if(n == 0){
			return menos2;
		} 
		if(n == 1){
			return menos1;	
		} 
	    int tamMenos1 = strlen(menos1); 
		int tamMenos2 = strlen(menos2);
		char aux[tamMenos1];
		strcpy(aux,menos1);
		char auxMenos1[tamMenos1 + tamMenos2 + 1];
		strcpy(auxMenos1,menos1);
		strcat(auxMenos1,menos2);
		return interna(n - 1, auxMenos1, aux);
	}
	char * a = "a"; char * b = "b";
	return interna(n, a, b);
}

/*----------------------------------------------------------------------------------------------------------*/

/* Ex26 --> Desenvolva algoritmos recursivos para cada um dos seguintes problemas:
a)Impressão de um número natural em base binaria
b)Multiplicação de dois números naturais através de somas consecutivas.
c)Inversão de uma string.
d)Gerador da sequencia:
   (a) F(1)=1
   (b) F(2)=2
   (c) F(n)= 2*F(n-1)+3*F(n-2) <= fórmula Geral Usando a formula podemos identificar que F(3)=2*F(2)+3*F(1) F(3)=4+3=7
(e)Verificar se uma palavra é palíndromo
(f)Busca sequencial em um veto desordenado que retorna a posição da primeira ocorrência de um elemento procurado
usando uma estratégia similar a da busca binaria. Dica: Se não é o elemento do meio, procure dos dois lados e retorne
o menor dos índices encontrados. Se for o elemento do meio, continue a busca apenas do lado esquerdo, retornando a 
posição de lá se encontrar e o meio senão encontrar*/ 
 
/* a) */ 
void binario(int n){
	int nBits = 1;
	int m = n;
	while(m > 1){    /* Calcula quantidade de bits do numero n*/
		nBits++;
		m /= 2;
	}

	int * interna(int n, int i, int * vet){
		if(n < 2){
			vet[i] = n;
			return vet;
		} 
		vet[i] = (n % 2);
		return interna(n / 2, i + 1, vet);
	}
	
	int i = 0;
	int v[nBits];
	int * vetor = interna(n, i, v);
	
	int j;
	for(j = nBits - 1; j >= 0; j--){
		printf("%d",vetor[j]);
	}
}


/* b) */  
int multSomas(int a, int b){
	int interna(int a, int aux, int b){
		if(a == 0 || b == 0) return 0;
		if(b == 1) return a;
		a += aux;
		interna(a, aux, b - 1);	
	}
	return interna(a, a, b);
	
}
	
 
 
 
 
 
 
 
 
 
 
 
	




