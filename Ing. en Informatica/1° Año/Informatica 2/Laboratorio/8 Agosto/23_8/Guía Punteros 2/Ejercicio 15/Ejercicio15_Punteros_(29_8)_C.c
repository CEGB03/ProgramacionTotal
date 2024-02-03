/*
	15. Elabore una especificación y su solución.
*/
/*
	Hacer un arreglo que contega solo numeros paresa aleatorios,
luego sumarlos, sacar el promedio, la cantidad de numeros mayores al promedio y
cuales son, y lo mismo para los menores al promedio.
	Nota: Todas las muestras deben ser con punteros
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define FILAS 5
#define COLUMNAS 5
#define TOTAL_ELEMENTOS 25.0
void Mostrar_Arreglo(int [FILAS][COLUMNAS]);
void Promedio_F(int [FILAS][COLUMNAS], int *, float *);
void Mayores_Menores_Prom(int [FILAS][COLUMNAS], int *, float *, int *, int *, char *);
void Sumatoria_F(int [FILAS][COLUMNAS], int *, int *);
int main(){
	int ArregloFC[FILAS][COLUMNAS], *P_Arreglo=&ArregloFC[0][0],
		Numero=0, *P_Numero=&Numero,
		ii=0, *P_ii=&ii, jj=0, *P_jj=&jj,
		Suma=0, *P_Suma=&Suma;
	float Promedio=0, *P_Promedio=&Promedio;
	char Salida=' ', *P_Salida=&Salida,
		Opcion=' ', *P_Opcion=&Opcion;
	srand(time(NULL));
	for(int ii=0; ii<FILAS; ii++){
		for(int jj=0 ; jj<COLUMNAS ; jj++){
			do{
				Numero=(rand()%100+2)*2;
				if(Numero%2==0)
					ArregloFC[ii][jj]=(*P_Numero);
			}while(ArregloFC[ii][jj]==0);
		}
	}
	do{
		printf("Bienvenido al Menu de Opciones, Seleccione segun corresponda\n");
		printf("a. Para mostrar el Arreglo.\n");
		printf("b. Para mostrar el Promedio del Arreglo.\n");
		printf("c. Para mostrar la cantidad de numeros mayores al promdio que hay en el Arreglo.\n");
		printf("d. Para mostrar la cantidad de numeros menores al promdio que hay en el Arreglo.\n");
		printf("e. Para mostrar la Sumatoria del Arreglo.\n");
		scanf(" %c",&Opcion);
		switch((*P_Opcion)){
		case 'a':
		case 'A':
			printf("a. Para mostrar el Arreglo.\n");
			Mostrar_Arreglo(ArregloFC);
			break;
		case 'b':
		case 'B':
			printf("b. Para mostrar el Promedio del Arreglo.\n");
			/*Promedio=*/Promedio_F(ArregloFC, P_Arreglo, P_Promedio);
			printf("El Promedio del Arreglo es: %.2f.\n",Promedio);
			break;
		case 'c':
		case 'C':
			printf("c. Para mostrar la cantidad de numeros mayores al promdio que hay en el Arreglo.\n");
			Mayores_Menores_Prom(ArregloFC, P_Arreglo, P_Promedio, P_ii, P_jj, P_Opcion);
			break;
		case 'd':
		case 'D':
			printf("d. Para mostrar la cantidad de numeros menores al promdio que hay en el Arreglo.\n");
			Mayores_Menores_Prom(ArregloFC, P_Arreglo, P_Promedio, P_ii, P_jj, P_Opcion);
			break;
		case 'e':
		case 'E':
			printf("e. Para mostrar la Sumatoria del Arreglo.\n");
			Sumatoria_F(ArregloFC, P_Arreglo, P_Suma);
			break;
		default:
			printf("Seleccion Invalida.\n");
			break;
		}
		printf("¿Desea volver al menu de seleccion?\n");
		scanf(" %c",&Salida);
	}while((*P_Salida)=='s' || (*P_Salida)=='S');
	printf("\n");
	system("pause");
	return 0;
}
void Mostrar_Arreglo(int Arreglo[FILAS][COLUMNAS]){
	for(int ii=0; ii<FILAS; ii++){
		for(int jj=0 ; jj<COLUMNAS ; jj++){
			printf("%d | ",(*(*(Arreglo+ii)+jj)));// Muestra con un tipo de punetero
		}
		printf("\n");
	}
}
void Promedio_F(int Arreglo[FILAS][COLUMNAS], int *P_Arreglo, float *P_Promedio){
	int Suma=0;
	float /*Promedio=(*P_Promedio), */Cont=25.0;
	for(int ii=0; ii<FILAS; ii++){
		for(int jj=0 ; jj<COLUMNAS ; jj++){
			P_Arreglo=&Arreglo[ii][jj];
			Suma+=(*P_Arreglo);
		}
	}
	*P_Promedio=(float) Suma/Cont;
	//return Promedio;
}
void Mayores_Menores_Prom(int Arreglo[FILAS][COLUMNAS], int *P_Arreglo, float *P_Promedio, int *P_ii, int *P_jj, char *P_Opcion){
	int ii=(*P_ii), jj=(*P_jj);
	int Ma_Prom=0, Me_Prom=0;
	float Prom=(*P_Promedio);
	switch((*P_Opcion)){
	case 'c':
	case 'C':
		for( ii=0; ii<FILAS; ii++){
			for( jj=0 ; jj<COLUMNAS ; jj++){
				P_Arreglo=&Arreglo[ii][jj];
				if((*P_Arreglo)>(*P_Promedio)){
					Ma_Prom++;
				}
			}
		}
		printf("Hay %d Saldos mayores al promedio\n",Ma_Prom);
		break;
	case 'd':
	case 'D':
		for( ii=0; ii<FILAS; ii++){
			for( jj=0 ; jj<COLUMNAS ; jj++){
				P_Arreglo=&Arreglo[ii][jj];
				if(Arreglo[ii][jj]<Prom){
					Me_Prom++;
				}
			}
		}
		printf("Hay %d Saldos menores al promedio\n",Me_Prom);	
		break;
	}
}
void Sumatoria_F(int Arreglo[FILAS][COLUMNAS], int *P_Arreglo, int *P_Suma){
	int Suma=(*P_Suma);
	for(int ii=0; ii<FILAS; ii++){
		for(int jj=0 ; jj<COLUMNAS ; jj++){
			P_Arreglo=&Arreglo[ii][jj];
			Suma+=(*P_Arreglo);
		}
	}
	printf("La Sumatoria de todos los valores del Arreglo es de %d.\n",Suma);
}
