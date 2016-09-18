#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funcrecursivas.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("\nFATORIAL DE n: \nINSIRA UM NUMERO INTEIRO: \n");
	scanf("%d",&n);
	printf("O FATORIAL DE %d EH: %d\n", n, fatorial(n));
	
	printf("\nFIBONACCI DE n: \nINSIRA UM NUMERO INTEIRO: \n");
	scanf("%d",&n);
	printf("O %dth NUMERO DA SEQUENCIA FIBONACCI EH: %d\n", n, fibonacci(n));

	printf("\n%d",inverte(123456));
	
	return 0;
}
