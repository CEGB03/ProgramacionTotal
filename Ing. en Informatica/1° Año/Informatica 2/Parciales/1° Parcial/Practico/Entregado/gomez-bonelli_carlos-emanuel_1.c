/*
Primer examen parcial - Práctico
1. Desarrolle un programa que guarde 20 elementos de valores enteros
aleatorios (entre 1 y 50) en un puntero. Luego un menu de opciones con las
siguientes funciones:
a. Mostrar todos los valores con su respectiva dirección.
b. Mostrar los valores pares.
c. Sumar los valores impares.
d. Contar las cantidad de valores que están entre 10 y 15.

Nota: utilice punteros y funciones para realizar este ejericio.

Los nombres de los archivos deben seguir la siguiente nomenclatura:
apellido_nombre_1.cpp y apellido_nombre_2.cpp
Los nombres de archivos no deben contener acentos, ñ, etc.
Escribir todo en minuscula separado en guión bajo
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Tam 20

char Menu_Opc();
void Iniciar_Valores(int *P_Alma);
void Mostrar_Valores(int *P_Alma);
void Mostrar_Valores_y_Direccion(int *P_Alma);
void Mostrar_Valores_Pares_e_Impares(int *P_Alma, char Op);
int Contar_Valores(int *_Alma);


int main(){
	int Arreglo[Tam]={0}, *P_Amacenaminto=Arreglo, Contado=0;
	char Opcion=' ', Salida=' ';
	Iniciar_Valores(P_Amacenaminto);
	//Mostrar_Valores(P_Amacenaminto);
	do{
		Opcion=Menu_Opc();
		switch(Opcion){
		case 'a':
		case 'A':
			Mostrar_Valores_y_Direccion(P_Amacenaminto);
			break;
		case 'b':
		case 'B':
			Mostrar_Valores_Pares_e_Impares(P_Amacenaminto, Opcion);
			break;
		case 'c':
		case 'C':
			Mostrar_Valores_Pares_e_Impares(P_Amacenaminto, Opcion);
			break;
		case 'd':
		case 'D':
			Contado=Contar_Valores(P_Amacenaminto);
			printf("La cantidad de valores entre 10 y 15 son inicializados es de: %d \n",Contado);
			break;
		}
		printf("\n");
		printf("Desa volver al menu de Opciones? S/N  ");
		scanf(" %c",&Salida);
	} while(Salida=='s' || Salida=='S');
	
	printf("Adios.\n");
	system("pause");
	return 0;
}
void Iniciar_Valores(int *P_Alma){
	srand(time(NULL));
	for(int ii=0 ; ii<Tam ; ii++){
		*(P_Alma+ii)=rand()%50+1;
	}
}
void Mostrar_Valores(int *P_Alma){
	for(int ii=0 ; ii<Tam ; ii++){
		printf("%d | ",*(P_Alma+ii));
	}
}
char Menu_Opc(){
	char Op=' ';
	printf("Bienvenido al menu de Seleccion.\nIngrese segun desee\n");
	printf("a. Mostrar todos los valores con su respectiva dirección.\n");
	printf("b. Mostrar los valores pares.\n");
	printf("c. Sumar los valores impares.\n");
	printf("d. Contar las cantidad de valores que están entre 10 y 15.\n");
	scanf(" %c",&Op);

	return Op;
}
void Mostrar_Valores_y_Direccion(int *P_Alma){
	for(int ii=0 ; ii<Tam ; ii++){
		printf("El N° %d tiene almacenado un %d y su Direccion de memoria es %X\n",ii+1,*(P_Alma+ii),(P_Alma+ii));
	}
}
void Mostrar_Valores_Pares_e_Impares(int *P_Alma, char Op){
	switch(Op){
	case 'b':
	case 'B':
		for(int ii=0 ; ii<Tam ; ii++){
			if((*(P_Alma+ii))%2==0){
				printf("%d | ",*(P_Alma+ii));
			}
		}
		break;
	case 'c':
	case 'C':
		for(int ii=0 ; ii<Tam ; ii++){
			if((*(P_Alma+ii))%2==1){
				printf("%d | ",*(P_Alma+ii));
			}
		}
		break;
	}
}
int Contar_Valores(int *P_Alma){
	int Cont=0;
	for(int ii=0 ; ii<Tam ; ii++){
		if((*(P_Alma+ii))>=10 && (*(P_Alma+ii))<=15){
			Cont++;
		}
	}
	return Cont;
}
