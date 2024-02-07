#include <stdio.h>
#include <stdlib.h>

void decabin (int n) {
	if (n) {
		decabin(n / 2);
		printf("%d", n % 2);
	}
}

int main(){
	int numero;
	printf("Ingrese un entero: ");
	scanf("%i", &numero);
	
	decabin(numero);
	system("apuse");
	return 0;
}
