/*
	1. Desarrollar un algoritmo que arme un arreglo de 10x10 de números
		aleatorios.
	Una vez cargado el arreglo, el programa deberá mostrar un menú de opciones:
		a. calcular el promedio.
		b. solicitar un numero y buscar cuantas veces esta ese numero en el arreglo.
		c. mostrar solo los valores pares
		d. mostrar todos los valores.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define FILAS 10
#define COLUMNAS 10
#define DIVICION_PROMEDIO 100

int main()
{
	srand(time(NULL));
	
	int ArregloFC[FILAS][COLUMNAS], ii=0, jj=0, Buscar_Igual=0,
		Cont__Buscar_Igual=0, Suma_T=0;
	float Prom=0;
	char Opcion=' ', Salida=' ';
	for(ii=0 ; ii<=FILAS ; ii++)
	{
		for(jj=0 ; jj<=COLUMNAS ; jj++)
		{
			ArregloFC[ii][jj]=rand()%5+1;;
			Suma_T+=ArregloFC[ii][jj];
		}
	}
	do
	{
		printf("Bienvenido al menu de opciones\nPor Favor dijite la letra de opcion que desea: \n");
		printf("Opcion a: Calcular el promedio de todos los elementos del arreglo bidimencional. \n");
		printf("Opcion b: Ingrese un numero y se buscara cuantas veces este numero se repite en el arreglo. \n");
		printf("Opcion c: Mostrar solo los valores pares del arreglo bidimencional. \n");
		printf("Opcion d: Mostrar todos los valores del arreglo bidimencional. \n");
		scanf(" %c",&Opcion);
		switch(Opcion)
		{
		case 'a':
			Prom=Suma_T/DIVICION_PROMEDIO;
			printf("El promedio de todo el arreglo bidimencional es de: %f",Prom);
			printf("\n");
			break;
		case 'b':
			printf("Ingrese un numero para buscar: ");
			scanf("%d",&Buscar_Igual);
			for(ii=0 ; ii<=FILAS ; ii++)
			{
				for(jj=0 ; jj<=COLUMNAS ; jj++)
				{
					if(Buscar_Igual==ArregloFC[ii][jj])
						Cont__Buscar_Igual++;
				}
			}
			printf("La cantidad de numeros iguales al ingresado en el arreglo es de: %d",Cont__Buscar_Igual);
			printf("\n");
			break;
		case 'c':
			for(ii=0 ; ii<=FILAS ; ii++)
			{
				for(jj=0 ; jj<=COLUMNAS ; jj++)
				{
					if(ArregloFC[ii][jj]%2==0)
					{
						for(ii=0 ; ii<=FILAS ; ii++)
						{
							for(jj=0 ; jj<=COLUMNAS ; jj++)
							{
								printf("Los elementos del arreglo que son pares son: %d| y es el elemeto (%d;%d) ",ArregloFC[ii][jj],ii,jj);
								printf("\n");
							}
						}
					}
				}
			}
			printf("\n");
			break;
		case 'd':
			for(ii=0 ; ii<=FILAS ; ii++)
			{
				for(jj=0 ; jj<=COLUMNAS ; jj++)
				{
					printf(" %d |",ArregloFC[ii][jj]);
				}
				printf("\n");
			}
			printf("\n");
			break;
		}
		
		printf("\n¿Desa Volver al menu de Opciones? S/N ");
		scanf(" %c",&Salida);
	} while(Salida=='S' || Salida=='s');
	
	system("pause");
	return 0;
}
