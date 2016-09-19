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
	return vet[n - 1] + somaVetor(vet, n - 1);
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
	return inverteVetor(vet, n - 1);	
}



























