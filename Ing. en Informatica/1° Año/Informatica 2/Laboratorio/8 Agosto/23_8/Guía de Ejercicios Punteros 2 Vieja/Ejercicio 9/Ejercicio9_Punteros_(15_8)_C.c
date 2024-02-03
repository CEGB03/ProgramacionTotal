/*
	9. Desarrolle un programa que declare e inicialice un vector de 5 valores
aleatorios. Luego, crear 3 funciones que permita hallar el valor maximo, minimo
y el sumatoria de ellos. Finalmente mostrar los resultados. Utilice punteros
para realizar el ejercicio.
*/
/*
	Hacer:
Arreglo uni de 5,
con valores aleatorios
	Mostrar usando punteros:
La suematoria,
El maximo,
el minimo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L_SECEUNCIA 5

int Mostrar_Secuencia_F(int [L_SECEUNCIA], int *);
void Crear_Secuencia_F(int [L_SECEUNCIA]);
void Maximo_Minimo(int [L_SECEUNCIA], int *, int *);

int main(){
	int Secuencia[L_SECEUNCIA]={0}, Sumatoria=0, Maximo=0, Minimo=0;
	int *Mostrar_Secuencia=NULL, *Mostrar_Sumatoria=NULL, *Mostrar_Maximo=NULL, *Mostrar_Minimo=NULL;
	
	Mostrar_Sumatoria=&Sumatoria;
	Mostrar_Maximo=&Maximo;
	Mostrar_Minimo=&Minimo;
	
	//Crear_Secuencia_F(Secuencia);
	
	printf("La Secuencia dada es la Siguiente:\n");
	*Mostrar_Sumatoria= Mostrar_Secuencia_F(Secuencia, Mostrar_Secuencia);
	printf("La Sumatoria de Secuencia dada es la Siguiente:\n");
	printf("%x",*Mostrar_Sumatoria);
	printf("\n");
	
	Maximo_Minimo(Secuencia, Mostrar_Maximo, Mostrar_Minimo);
	printf("El Maximo de la Secuencia dada es el Siguiente:\n");
	printf("%d",*Mostrar_Maximo);
	printf("\n");
	
	printf("El Minimo de la Secuencia dada es el Siguiente:\n");
	printf("%d",*Mostrar_Minimo);
	printf("\n");
	
	system("pause");
	return 0;
}
/*
void Crear_Secuencia_F(float Arreglo[L_SECEUNCIA]){
	srand(time(NULL));
	for(int ii=0 ; ii<L_SECEUNCIA ; ii++){
		Arreglo[ii]=rand()%100+1;
	}
}
*/
int Mostrar_Secuencia_F(int Arreglo[L_SECEUNCIA], int *Mostrar_Secuencia){
	int Suma=0;
	srand(time(NULL));
	for(int ii=0 ; ii<L_SECEUNCIA ; ii++){
		Arreglo[ii]=rand()%100+1;
		Mostrar_Secuencia=&Arreglo[ii];
		printf("%d | ",*Mostrar_Secuencia);
		Suma+=(*Mostrar_Secuencia);
	}
	printf("\n");
	return (Suma);
}
void Maximo_Minimo(int Arreglo[L_SECEUNCIA], int *MAX, int *MIN){
	for(int ii=0 ; ii<L_SECEUNCIA ; ii++){
		if(ii==0){
			MAX=&Arreglo[ii];
			MIN=&Arreglo[ii];
		}
		else{
			if(*MAX<Arreglo[ii])
				MAX=&Arreglo[ii];
			if(*MIN>Arreglo[ii])
				MIN=&Arreglo[ii];
		}
	}
}
