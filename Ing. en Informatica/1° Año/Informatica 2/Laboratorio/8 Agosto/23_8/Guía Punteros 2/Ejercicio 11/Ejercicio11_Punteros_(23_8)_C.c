/*
	11. Realice un programa que permita cargar 10 números enteros en un vector
de punteros. Luego calcule el promedio de ellos. Finalmente mostrar todos los
valores y su promedio.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L_VECTOR 10
void Carga_Rand(int [L_VECTOR]);
float Prom(int [L_VECTOR],int *, float *);
int main(){
	int Seceuncia[L_VECTOR]={0}, Sumatria=0, *P_Sumatoria=&Sumatria;
	float Promedio=0, *P_Promedio=&Promedio;
	Carga_Rand(Seceuncia);
	Prom(Seceuncia, P_Sumatoria, P_Promedio);
	printf("\nEl valor q hay en Sumatria es de %d\n",Sumatria);
	printf("\nEl valor del Promedio es de %.2f\n",Promedio);
	printf("\n");
	system("pause");
	return 0;
}
void Carga_Rand(int Arreglo[L_VECTOR]){
	srand(time(NULL));
	int *P_Arreglo=NULL;
	for(int ii=0 ; ii<L_VECTOR ; ii++){
		Arreglo[ii]=rand()%100+1;
		P_Arreglo=&Arreglo[ii];
		printf("%d |", *P_Arreglo);
	}
}
float Prom(int Arreglo[L_VECTOR], int *Sum, float *Prome){
	int *P_Arreglo=NULL;
	float Contador=0;
	for(int ii=0 ; ii<L_VECTOR ; ii++){
		P_Arreglo=&Arreglo[ii];
		*Sum+=(*P_Arreglo);
		Contador++;
	}
	(*Prome=(*Sum)/Contador);
	return *Prome;
}
