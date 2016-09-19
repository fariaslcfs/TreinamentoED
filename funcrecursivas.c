#include <stdlib.h>
#include <math.h>

/* Ex1_fatorial.c --> Faça uma função recursiva que calcule e retorne o fatorial de um número inteiro N. */
int fatorial(int n){
	if(n < 2) {
		return 1;
	}
	return n * fatorial(n - 1);	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex2- Faça uma função recursiva que calcule e retorne o N-ésimo termo da sequência Fibonacci. 
        Alguns números desta sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...        */
int fibonacci(int n){
	if(n == 0){
		exit(0);
	}
	if(n == 1){
		return 0;
	}
	else if (n == 2){
		return 1;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}
/*----------------------------------------------------------------------------------------------------------*/

/*  Faça uma função recursiva que permita inverter um número inteiro N. Ex: 123 - 321 */
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

/* Faça uma função recursiva que permita somar os elementos de um vetor de inteiros. */
int somaVetor(int vet[], int n){
	if(n == 1){
		return vet[0];
	}
	vet[n - 1] + somaVetor(vet, n - 1);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório dos números de 1 a N */
int soma1aN(int n){
	if(n == 1){
		return 1;
	}
	return n + soma1aN(n - 1);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Crie um programa em C, que contenha uma função recursiva que receba dois inteiros positivos k e n e calcule kn. 
Utilize apenas multiplicações. O programa principal deve solicitar ao usuário os valores de k e n e imprimir o resultado
da chamada da função. */	
int potenciakn(int k, int n){
	if(n == 1){
		return k;
	}
	return k * potenciakn(k, n - 1);			
}
/*----------------------------------------------------------------------------------------------------------*/

/* Crie um programa em C que receba um vetor de números reais com 100 elementos. Escreva uma função recursiva que
inverta ordem dos elementos presentes no vetor. */
double inverteVetor(double vet[], int n){
	if(n == 1){
		return vet[0];
	}
	int aux;
	aux = inverteVetor(vet, n - 1); 
	vet[0] = vet[n + 1];
	vet[n + 1] = aux;
}
/*----------------------------------------------------------------------------------------------------------*/

/* máximo divisor comum dos inteiros x e y é o maior inteiro que é divisível por x e y. Escreva uma função recursiva mdc em C, 
que retorna o máximo divisor comum de x e y. O mdc de x e y é definido como segue: se y é igual a 0, então mdc(x,y) é x; 
caso contrário, mdc(x,y) é mdc (y, x%y), onde % é o operador resto.*/
int maxDivCom(int a, int b){
	if( b == 0){
		return a;
	}
	maxDivCom(b, a % b);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Escreva uma função recursiva que determine quantas vezes um dígito K ocorre em um número natural N. 
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

/* A multiplicação de dois números inteiros pode ser feita através de somas sucessivas. Proponha um algoritmo recursivo
Multip_Rec(n1,n2) que calcule a multiplicação de dois inteiros */
int multRec(int a, int b){
	if(a == 0 || b == 0){
		return 0;
	}
	if(b == 1){
		return a;
	}
	int acc;
	acc = a + multRec(a, b - 1);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os números naturais de 0 
até N em ordem crescente. */





























