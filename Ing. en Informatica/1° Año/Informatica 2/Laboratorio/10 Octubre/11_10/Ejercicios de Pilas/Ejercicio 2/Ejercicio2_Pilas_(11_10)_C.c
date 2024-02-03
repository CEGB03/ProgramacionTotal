/*
	2. Crear un programa en la cual cargue una pila de 5 numeros aleatoriamente
(entre 1 y 10), luego los muestre y muestre los valores pares.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct Nodo{
	int Dato;
	struct Nodo *Next;
};
void Menu();
void Agregar(struct Nodo **Superior, int Valor);
void Imprimir(struct Nodo *Superior);
void Mostrar_Pares(struct Nodo *Superior);
int main(){
	srand(time(NULL));
	struct Nodo *Superior=NULL;
	int Opcion=0, Valor=0;
	do{
		Menu();
		scanf("%d",&Opcion);
		switch(Opcion){
		case 1:
			for(int ii=0 ; ii<5 ; ii++){
				Valor= rand()%10+1;
				Agregar(&Superior, Valor);
			}
			printf("\n");
			break;
		case 2:
			Imprimir(Superior);
			printf("\n");
			break;
		case 3:
			Mostrar_Pares(Superior);
			printf("\n");
			break;
		}
		
	}while(Opcion!=0);
	
	system("pause");
	return 0;
}
void Menu(){
	printf("Seleccione una opcion\n");
	printf("1. Agregar un Nodo a la pila(se le solicitaran 5 valores)\n");
	printf("2. Eliminar Nodo de la pila\n");
	printf("3. Mostrar Nodos de la pila\n");
	printf("4. Sumar los Nodos de la pila\n");
	printf("0. Salir\n");
}
void Agregar(struct Nodo **Superior, int Valor){
	struct Nodo *Nuevo_Nodo=NULL;
	Nuevo_Nodo=(struct Nodo *)malloc(sizeof(struct Nodo));
	if(Nuevo_Nodo==NULL){
		printf("No hay memoria disponible\n");
		exit(1);
	}
	else{
		Nuevo_Nodo->Dato = Valor;
		Nuevo_Nodo->Next = *Superior;
		*Superior = Nuevo_Nodo;
	}
}
void Imprimir(struct Nodo *Superior){
	struct Nodo *Temp=NULL;
	Temp= Superior;
	if(Temp == NULL)
		printf("La Lista esta Vacia\n");
	printf("Imprimiendo...\n");
	while(Temp!=NULL){
		printf("%d | ",Temp->Dato);
		Temp=Temp->Next;
	}
}
void Mostrar_Pares(struct Nodo *Superior){
	struct Nodo *Temp=NULL;
	Temp= Superior;
	if(Temp == NULL)
		printf("La Lista esta Vacia\n");
	while(Temp!=NULL){
		if(Temp->Dato%2==0)
			printf("%d | ",Temp->Dato);
		Temp=Temp->Next;
	}
}
