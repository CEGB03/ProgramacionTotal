/*
Diseñar y codificar un programa en c que tenga en su su funcion principal 
main un arreglo de 1 dimension de 10 elementos. Luego crear las 
siguientes funciones:
1- Funcion cargar: debe cargar los elementos al arreglo.
2- Funcion imprimir: Debe imprimir los elementos del arreglo.
3- Imprimir los elementos mayores a la media.
4- Imprimir los elementos menores a la media.
5- Imprimir la cantidad de veces que se repite un numero, el numero es 
recibido por referencia y la cantidad de veces debe ser impresa en main
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARREGLO1D 10
void Cargar(int []);
void Imprimir(int []);
int Promedio(int , int []);
void Imprimir_Mayores_Media(int []);
int Cantidad_Menores_Media(int []);
int Buscar_Repeticion(int [], int *);

int main()
{
	int Arreglo_Inicio[ARREGLO1D], Menor=0, Num_Busqueda=0, Repes=0;
	char Busqueda=' ';
	Cargar(Arreglo_Inicio);
	Imprimir(Arreglo_Inicio);
	Imprimir_Mayores_Media(Arreglo_Inicio);
	Menor=Cantidad_Menores_Media(Arreglo_Inicio);
	printf("La cantidad de Numeros Menores la media es de: %d\n",Menor);
	printf("¿Deasea Buscar un numero del arreglo? S/N: ");
	scanf(" %c",&Busqueda);
	switch(Busqueda)
	{
	case 'S':
	case 's':
		printf("Ingrese el numero que quiere buscar: \n");
		scanf(" %c",&Num_Busqueda);
		Repes=Buscar_Repeticion(Arreglo_Inicio, &Num_Busqueda);
		printf("La cantidad de veces que se repite %d son %d\n", Num_Busqueda, Repes);
		break;
	case 'N':
	case 'n':
		printf("Adios\n");
		break;
	}
	system("pause");
	return 0;
}
void Cargar(int Arreglo[]){
	srand(time(NULL));
	for(int ii=0 ; ii<ARREGLO1D ; ii++){
		//Arreglo[ii]=rand()%10+1;
		printf("Ingrese el numero entero para el Arreglo.\n");
		scanf("%d",&Arreglo[ii]);
	}
}
void Imprimir(int Arreglo[]){
	for(int ii=0 ; ii<ARREGLO1D ; ii++){
		printf(" %d |\n",Arreglo[ii]);
	}
}
void Imprimir_Mayores_Media(int Arreglo[]){
	int Seleccion=1;
	Promedio(Seleccion, Arreglo);
}
int Cantidad_Menores_Media(int Arreglo[]){
	int Seleccion=2, Menores=0;
	Menores=Promedio(Seleccion, Arreglo);
	return(Menores);
	
}
int Promedio(int Seleccion, int Arreglo[]){
	int Suma=0, Mayores=0, Menores=0;
	float Prom=0;
	for(int ii=0 ; ii<ARREGLO1D ; ii++){
		Suma+=Arreglo[ii];
	}
	Prom=Suma/ARREGLO1D;
	printf("El promedio del Arreglo es de %f\n",Prom);
	switch(Seleccion){
	case 1:
		for(int ii=0 ; ii<ARREGLO1D ; ii++){
			if(Arreglo[ii]>Prom){
				Mayores++;
				printf("Este elemento es Mayor a la media: %d\n",Arreglo[ii]);
			}
		}
		printf("La cantidad de Numeros Mayores la media es de: %d\n",Mayores);
		printf("\n");
		break;
	case 2:
		for(int ii=0 ; ii<ARREGLO1D ; ii++){
			if(Arreglo[ii]<Prom){
				Menores++;
				printf("Este elemento es Menore a la media: %d\n",Arreglo[ii]);
			}
		}
		return(Menores);
		break;
	}
}
int Buscar_Repeticion(int Arreglo[], int *Num){
	int Repeticiones=0;
	for(int ii=0 ; ii<ARREGLO1D ; ii++){
		if(Arreglo[ii]==Num){
			Repeticiones++;
		}
	}
	return(Num);
}
