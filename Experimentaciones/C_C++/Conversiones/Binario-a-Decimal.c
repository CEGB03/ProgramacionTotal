/*
Algoritmo que convierte un número binario
a uno decimal en C
@author parzibyte
Visita: parzibyte.me
*/
#include <stdio.h>
#include <string.h>
#define LONGITUD_MAXIMA 1000

unsigned long long binarioADecimal(char *cadenaBinaria, int longitud);

int main() {
	// Esta primera parte tiene que ver con leer la entrada del usuario,
	// únicamente para demostrar
	char binario[LONGITUD_MAXIMA];
	printf("Introduce un número binario de hasta %d caracteres:\n",
		   LONGITUD_MAXIMA - 1);
	fgets(binario, LONGITUD_MAXIMA, stdin);
	binario[strcspn(binario, "\r\n")] = 0;
	
	// Ahora sí aquí convertimos
	unsigned long long decimal = binarioADecimal(binario, strlen(binario));
	printf("El binario %s es %llu en decimal", binario, decimal);
	return 0;
}

unsigned long long binarioADecimal(char *cadenaBinaria, int longitud) {
	unsigned long long decimal = 0;
	int multiplicador = 1;
	char caracterActual;
	for (int i = longitud - 1; i >= 0; i--) {
		caracterActual = cadenaBinaria[i];
		if (caracterActual == '1') {
			decimal += multiplicador;
		}
		multiplicador = multiplicador * 2;
	}
	return decimal;
}
