/*
	3.Escribir un programa que declare una variable llamada a, un puntero del
tipo de la variable creada, inicialice la variable e inicialice el puntero para
que apunte a la variable creada. Luego que imprima por pantalla la dirección de
memoria de la variable, el valor que almacena la variable, el valor del puntero
y el valor al que apunta el puntero.
*/
/*
	Primero:
		Hacer una variable llamada "a"
		Hacer un Puntero del mismo tipo de dato que "a"
		Inizializar Puntero y variable
	Y luego mostrar:
		La dir de memoria de "a",
		El valor de "a"
		El valor del Püntero
		El valor al que apunta

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a=16, *Dir_a=NULL;
	Dir_a=&a;
	printf("El valor almacenado en la variable \"a\" es: %d\n",a);
	printf("La direccion de memoria de la variable \"a\" es %x\n",&a);
	printf("El valor almacenado en el puntero que va hacia \"a\" es: %x\n",Dir_a);
	printf("La direccion de memoria del puntero que va hacia \"a\" es: %x\n",&Dir_a);
	system("pause");
	return 0;
}

