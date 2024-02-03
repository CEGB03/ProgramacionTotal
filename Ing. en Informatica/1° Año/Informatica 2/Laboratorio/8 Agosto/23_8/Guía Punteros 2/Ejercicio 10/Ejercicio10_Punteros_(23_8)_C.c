/*
	10. Se tiene un vector de 10 elementos con valores numéricos enteros por
punteros. Luego crear una funcion que muestre los valores que están en
posiciones impares, y otra funcion con las posiciones pares.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L_VECTOR 10
void Vector_F(int [L_VECTOR]);
void Mostrar_Pares(int [L_VECTOR]);
void Mostrar_Imares(int [L_VECTOR]);

int main(){
	int Vector[L_VECTOR]={0};
	printf("Muestra del vector completo\n");
    Vector_F(Vector);
	printf("\n");
	printf("Muestra de los Pares\n");
	Mostrar_Pares(Vector);
	printf("\n");
	printf("Muestra de los Impares\n");
	Mostrar_Imares(Vector);
	printf("\n");
    system("pause");
    return 0;
}
void Vector_F(int Arreglo[L_VECTOR]){
	int *P_Vec=NULL;
	srand(time(NULL));
	for(int ii=0 ; ii<L_VECTOR ; ii++){
		Arreglo[ii]=rand()%100+1;
		P_Vec=&Arreglo[ii];
		printf("%d | ",*P_Vec);
	}
}
	
void Mostrar_Imares(int Arreglo[L_VECTOR]){
	int *P_Vec=NULL;
	for(int ii=0 ; ii<L_VECTOR ; ii++){
		P_Vec=&Arreglo[ii];
		if(ii%2==1){
			printf("%d | ",*P_Vec);
		}
	}
}
void Mostrar_Pares(int Arreglo[L_VECTOR]){
	int *P_Vec=NULL;
	for(int ii=0 ; ii<L_VECTOR ; ii++){
		P_Vec=&Arreglo[ii];
		if(ii%2==0){
			printf("%d | ",*P_Vec);
		}
	}
}
