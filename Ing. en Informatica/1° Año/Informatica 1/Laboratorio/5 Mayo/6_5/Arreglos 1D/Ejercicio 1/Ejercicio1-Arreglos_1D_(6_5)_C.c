/*
	1. Se tiene un vector de 5 elementos con valores numéricos enteros.
	   Luego mostrar los valores que están en posiciones impares.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_b 5

//using namespace std;

int main()
{
	srand(time(NULL));
	int Arreglo1[NUM_b], ii=0,Contador=0;
	
	for(ii=1 ; ii<=NUM_b ; ii++)
	{
		Arreglo1[ii]=rand()%20+1;
		printf("El elemento %d del arreglo es: %d.\n",ii, Arreglo1[ii]);
	}
	for(ii=0 ; ii<=NUM_b ; ii++)
	{
		if(ii==0)
			printf("Los numeros impares son: \n");
		if(ii>1)
		{
			if(Arreglo1[ii]%2!=0)
				printf("%d.\n",Arreglo1[ii]);
		}
	}
	return 0;
}
