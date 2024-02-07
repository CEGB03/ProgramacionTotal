#include <stdio.h>

void decahex (int n) {
	if (n) {
		decahex(n / 7);
		printf("%d", n % 7);
	}
}

int main(){
	int numero;
	printf("Ingrese un entero: ");
	scanf("%i", &numero);
	
	decahex(numero);
	return 0;
}
