/*
	9.  Cree un programa que permita reservar memoria para arreglo de enteros
2x3. Luego cargar los valores de manera aleatoria. Realizar un menu de opciones
que muestre la sumatoria, muestre todos los valores y al finalizar el programa
libere la memoria.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COLUMNAS_ARR 3
#define FILAS_ARR 2

int main(){
	srand(time(NULL));
	int *P_Mem=NULL,
		Sumatoria=0, *P_Sumatoria=&Sumatoria;
	char Opcion=' ', *P_Opcion=&Opcion,
		Salida=' ', *P_Salida=&Salida;
	P_Mem=(int *) malloc((COLUMNAS_ARR*FILAS_ARR)*sizeof(int));
	if(P_Mem==NULL){
		printf("No hay memoria suficiente para inicializar");
		exit (1);
	}
	else{
		for(int ii=0 ; ii<FILAS_ARR ; ii++){
			for(int jj=0 ; jj<COLUMNAS_ARR ; jj++){
				*(P_Mem+COLUMNAS_ARR*ii+jj)=rand()%20+1;
			}
		}
		do{
			printf("Bienvenido al Menu de Seleccion.\nSeleccione Segun desee.\n");
			printf("a. Muestra de la Sumatoria de todos los elementos.\n");
			printf("b. Muestra del todos los elementos.\n");
			scanf(" %c",&Opcion);
			switch((*P_Opcion)){
			case 'a':
			case 'A':
				for(int ii=0 ; ii<FILAS_ARR ; ii++){
					for(int jj=0 ; jj<COLUMNAS_ARR ; jj++){
						Sumatoria+=(*(P_Mem+COLUMNAS_ARR*ii+jj));
					}
				}
				printf("La sumatoria de todos los elementos generados de forma aleatoria es de %d\n",(*P_Sumatoria));
				break;
			case 'b':
			case 'B':
				printf("Muestra del arreglo 2x3:\n");
				for(int ii=0 ; ii<FILAS_ARR ; ii++){
					for(int jj=0 ; jj<COLUMNAS_ARR ; jj++){
						printf(" %d | ", *(P_Mem+COLUMNAS_ARR*ii+jj));
					}
					printf("\n");
				}
				break;
			}
			printf("¿Desea volver al Menu de Seleccion para realizar otra seleccion? ");
			scanf(" %c",&Salida);
		} while((*P_Salida)=='s' || (*P_Salida)=='S');
	}
	system("pause");
	return 0;
}

