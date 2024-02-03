/*
1. Crear un programa que pida los siguientes datos de una canci�n: Artista,
Titulo, Duraci�n (en segundos),Tama�o del archivo (en KB). Crear una estructura
que almacene datos de la canci�n y luego los muestre por pantalla.
*/
#include <stdio.h>
#include <stdlib.h>
#define Tam_Struct 4
//void Ingreso_Cancion(struct *);
struct Cancion{
	char Artista[30];
	char Titulo[30];
	float Duracion;
	int Tam;
};
int main(){
	struct Cancion Can;
	//struct Cancion *P_Can;
	printf("Ingrese el nombre del artista de la cancion ");
	scanf("%s",&Can.Artista);
	printf("Ingrese el titulo de la cancion ");
	scanf("%s",&Can.Titulo);
	printf("Ingrese la duracion de la cancion en segundos ");
	scanf("%f",&Can.Duracion);
	printf("Ingrese el tam de la cancion en KB ");
	scanf("%d",&Can.Tam);
	printf("\n");
	printf("El nombre del artista de la cancion es: %s\n",Can.Artista);
	printf("Ingrese el titulo de la cancion %s\n",Can.Titulo);
	printf("Ingrese la duracion de la cancion en segundos %.2f\n",Can.Duracion);
	printf("Ingrese el tam de la cancion en KB %d\n",Can.Tam);
	//P_Can=Can;
	
	system("pause");
	return 0;
}
	//void Ingreso_Cancion(struct *P_Struct_Can){}
	
	
