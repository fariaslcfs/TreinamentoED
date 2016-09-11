#include <stdlib.h>
#include <stdio.h>

int maximo(int v[], int n){
	
	if (n == 1){
		return v[n];
	}
	
	int x;
	x = maximo(v, n - 1);
	if ( x > v[n - 1]){
		printf("%d\n",x);
		return x;
	}
	else{
		return v[n - 1];
	}
	
}


int X(int n){
	if (n == 1 || n == 2){
		return n;
	}
	else{
		return X(n - 1)*n + X(n-2);
	}
}

int main(){
	
	int vetor[10] = {11,2,1,22,43,5,6,90,2,13};
	printf("%d\n", maximo(vetor,10));
	printf("\n%d\n", X(6));
	return 0;
}
