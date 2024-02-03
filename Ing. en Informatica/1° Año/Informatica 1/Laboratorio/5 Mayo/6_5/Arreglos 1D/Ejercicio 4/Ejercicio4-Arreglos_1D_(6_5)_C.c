/*
	4. Crear un arreglo de 10 números enteros y aleatorios.
	   Luego mostrar los valores pares.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_b 10

int main()
{
	srand(time(NULL));
	int Arreglo4[NUM_b], ii=0,Contador=0;

	for(ii=1 ; ii<=NUM_b ; ii++)
	{
		Arreglo4[ii]=rand()%30+1;
		printf("El elemento %d del arreglo es: %d.\n",ii, Arreglo4[ii]);
	}
	printf("\nLos numeros pares son: \n");
	for(ii=1 ; ii<=NUM_b ; ii++)
	{
		if(Arreglo4[ii]%2==0)
		printf(" %d -",Arreglo4[ii]);
	}
}


