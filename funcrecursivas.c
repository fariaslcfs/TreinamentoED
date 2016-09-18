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
		return n % 10;
	}
	return inverte(n / 10) + (n % 10) * pow(10, abs(log10(n)));
}





