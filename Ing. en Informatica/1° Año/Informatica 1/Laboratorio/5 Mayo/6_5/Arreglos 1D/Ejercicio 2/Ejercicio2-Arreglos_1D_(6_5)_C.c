/*
	2. Realice un programa que permita cargar 5 números enteros en un vector.
		Luego calcule el promedio de ellos.
		Finalmente mostrar todos los valores y su promedio.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_b 5

int main()
{
	int Arreglo2[NUM_b], ii=0, Num=0, Suma=0, Promedio=0;
	
	for(ii=1 ; ii<=NUM_b ; ii++)
	{
		printf("Ingrese un Numero: ");
		scanf("%d",&Num);
		Arreglo2[ii]=Num;
		Suma=Suma+Num;
	}
	printf("\n");
	for(ii=1;ii<=NUM_b;ii++)
	{
		printf("\nEl elemento %d del arreglo es: %d.\n",ii, Arreglo2[ii]);
	}
	Promedio=Suma/NUM_b;
	printf("\nEl Promedio de los Elementos cargados es: %d\n",Promedio);
	system("pause");
	return 0;
}

