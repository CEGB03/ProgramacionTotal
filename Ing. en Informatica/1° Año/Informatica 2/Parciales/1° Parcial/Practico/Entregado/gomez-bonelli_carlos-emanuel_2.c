/*
	2. Desarrolle un programa que permita reservar espacio para 10 caracteres,
los llene con 10 valores aleatorios y los muestre. Luego, el programa solicita
al usuario que ingrese cuántos caracteres desea agregar a la lista de elementos
ya generada. El programa agrega espacio de memoria y solicita el ingreso de los
nuevos valores por teclado. Por último, mostrar la lista resultante.

Los nombres de los archivos deben seguir la siguiente nomenclatura:
apellido_nombre_1.cpp y apellido_nombre_2.cpp
Los nombres de archivos no deben contener acentos, ñ, etc.
Escribir todo en minuscula separado en guión bajo
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Tam 10

void Mostrar_Valores(int *P_Tam_Dina, int Tam_Nuevo);
void Cargar_Valores(int *P_Tam_Dina, int Tam_Nuevo);

int main(){
	int *P_Tam_Dina=NULL, Tam_Redi=0;
	P_Tam_Dina=(int *)malloc(Tam*sizeof(int));
	if(P_Tam_Dina==NULL){
		printf("No se puede recervar la memoria\n");
		exit (1);
	}
	else{
		Cargar_Valores(P_Tam_Dina, Tam_Redi);
		Mostrar_Valores(P_Tam_Dina, Tam_Redi);
		printf("\n");
		printf("Ingrese un valor positivo para redimencionar ");
		scanf("%d",&Tam_Redi);
		P_Tam_Dina=(int *)realloc(P_Tam_Dina, (Tam_Redi+Tam)*sizeof(int));
		if(P_Tam_Dina==NULL){
			printf("No se puede recervar la memoria para redimencionar\n");
			exit (1);
		}
		else{
			printf("Esta a punto de ingresar los valores para los nuevos elementos.\n");
			Cargar_Valores(P_Tam_Dina, Tam_Redi);
			Mostrar_Valores(P_Tam_Dina, Tam_Redi);
		}
	}
	printf("Adios.\n");
	system("pause");
	return 0;
}
void Mostrar_Valores(int *P_Tam_Dina, int Tam_Nuevo){
	for(int ii=0 ; ii<(Tam+Tam_Nuevo) ; ii++){
		printf("%d | ",*(P_Tam_Dina+ii));
	}
	printf("\n");
	
}
void Cargar_Valores(int *P_Tam_Dina, int Tam_Nuevo){
	srand(time(NULL));
	int Carga_Manual=0;
	if(Tam_Nuevo==0){
		for(int ii=0 ; ii<Tam ; ii++){
			*(P_Tam_Dina+ii)=rand()%20+1;
		}
	}
	if(Tam_Nuevo!=0){
		for(int ii=Tam ; ii<(Tam+Tam_Nuevo) ; ii++){
			printf("Cargue el valor para el elemento %d: ",ii);
			scanf("%d",&Carga_Manual);
			*(P_Tam_Dina+ii)=Carga_Manual;
		}
	}
}
