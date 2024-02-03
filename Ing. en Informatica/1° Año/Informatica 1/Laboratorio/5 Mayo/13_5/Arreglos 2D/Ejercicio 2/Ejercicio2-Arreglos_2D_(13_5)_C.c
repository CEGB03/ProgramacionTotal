/*
2. Crear un programa que arme un arreglo de 5x5 de números aleatorios pares.
Luego muestre el arreglo resultante.
*/
#include <stdio.h> //	Basica
#include <stdlib.h>
#include <time.h>
#define FILAS 5
#define COLUMNAS 5

int main()
{
	int ArregloFC[FILAS][COLUMNAS], ii=0, jj=0, Numero=0;
	srand(time(NULL));
	
	for(ii=0; ii<FILAS; ii++)
	{
		for(jj=0 ; jj<COLUMNAS ; jj++)
		{
			do
			{
				Numero=rand()%20+2;//	si se pone ""(rand()%20+2)*2"" solo calculara numeros aleatoreos pares.
				if(Numero%2==0)
					ArregloFC[ii][jj]=Numero;
				if(Numero%2==1)
					ArregloFC[ii][jj]=0;
			}while(ArregloFC[ii][jj]==0);
		}
	}
	
	for(ii=0; ii<FILAS; ii++)
	{
		for(jj=0 ; jj<COLUMNAS ; jj++)
		{
			printf(" %d |",ArregloFC[ii][jj]);
		}
		printf("\n");
	}

	printf("\n");
	system("pause");
	return 0;
}
