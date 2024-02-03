/*
	14. Desarrolle un programa que declare e inicialice un arreglo de 2x3 con
valores aleatorios. Luego mostrar los valores. Utilice punteros para realizar
el ejercicio.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COLUMNAS_ARR 3
#define FILAS_ARR 2
int main(){
	srand(time(NULL));
	int Arreglo[FILAS_ARR][COLUMNAS_ARR]={0}, *P_Arreglo=&Arreglo[0][0];
	
	printf("Con Punteros Forma 1:\n");
	for(int ii=0 ; ii<FILAS_ARR ; ii++){
		for(int jj=0 ; jj<COLUMNAS_ARR ; jj++){
			Arreglo[ii][jj]=rand()%30+1;
			*P_Arreglo=Arreglo[0][0];
			printf(" %d | ", *(P_Arreglo+COLUMNAS_ARR*ii+jj));
			//printf(" %d | ", (*(*(Arreglo+ii)+jj)));
		}
		printf("\n");
	}
	printf("Con Punteros Fomra 2:\n");
	for(int ii=0 ; ii<FILAS_ARR ; ii++){
		for(int jj=0 ; jj<COLUMNAS_ARR ; jj++){
			*P_Arreglo=Arreglo[0][0];
			//printf(" %d | ", *(P_Arreglo+COLUMNAS_ARR*ii+jj));
			printf(" %d | ", (*(*(Arreglo+ii)+jj)));//	Aca se utiliza el consepto de que el nombre del arreglo es un puntero al primer elemento del mismo
		}
		printf("\n");
	}
	/*
	printf("Con Arreglo\n");
	for(int ii=0 ; ii<FILAS_ARR ; ii++){
		for(int jj=0 ; jj<COLUMNAS_ARR ; jj++){
			printf(" %d | ", Arreglo[ii][jj]);
		}
		printf("\n");
	}
	*/
	printf("\n");
	system("pause");
	return 0;
}
	
