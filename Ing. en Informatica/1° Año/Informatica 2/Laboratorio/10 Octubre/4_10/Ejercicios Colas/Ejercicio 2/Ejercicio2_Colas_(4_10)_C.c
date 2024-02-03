/*
	2. Crear un programa en la cual cargue una cola de 5 numeros aleatoriamente
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
void Agregar(struct Nodo **Front,struct Nodo **Back, int Valor);
void Mostrar(struct Nodo *Front,struct Nodo *Back);
void Mostrar_Pares(struct Nodo *Front,struct Nodo *Back);
int main(){
	srand(time(NULL));
	struct Nodo *Front=NULL;
	struct Nodo *Back= NULL;
	int Opcion=0, Valor=0;
	do{
		Menu();
		scanf("%d",&Opcion);
		switch(Opcion){
		case 1:
			for(int ii=0 ; ii<5 ; ii++){
				Valor= rand()%10+1;
				Agregar(&Front,&Back, Valor);
			}
			printf("\n");
			break;
		case 2:
			Mostrar(Front,Back);
			printf("\n");
			break;
		case 3:
			Mostrar_Pares(Front,Back);
			printf("\n");
			break;
		}
		
	}while(Opcion!=0);
	
	system("pause");
	return 0;
}
void Menu(){
	printf("Seleccione una opcion\n");
	printf("1. Agregar 5 Nodos a la cola aleatoriamente\n");
	printf("2. Mostrar Nodos de la cola\n");
	printf("3. Mostrar los Nodos de la cola que sean pares\n");
	printf("0. Salir\n");
}
void Agregar(struct Nodo **Front,struct Nodo **Back, int Valor){
	struct Nodo *Nuevo_Nodo=NULL;
	Nuevo_Nodo=(struct Nodo *)malloc(sizeof(struct Nodo));
	if(Nuevo_Nodo==NULL){
		printf("No hay memoria disponible\n");
		exit(1);
	}
	else{
		Nuevo_Nodo->Dato = Valor;
		Nuevo_Nodo->Next=NULL;
		if(*Back == NULL){
			(*Back) = Nuevo_Nodo;
			(*Front) = (*Back);
		}
		else{
			(*Back) -> Next = Nuevo_Nodo;
			(*Back) = Nuevo_Nodo;
		}
	}
}
void Mostrar(struct Nodo *Front,struct Nodo *Back){
	struct Nodo *Temp=NULL;
	Temp= Front;
	while(Temp!=NULL){
		printf("%d | ",Temp->Dato);
		Temp=Temp->Next;
	}
}
void Mostrar_Pares(struct Nodo *Front,struct Nodo *Back){
	struct Nodo *Temp=NULL;
	Temp= Front;
	while(Temp!=NULL){
		if(Temp->Dato%2==0)
			printf("%d | ",Temp->Dato);
		Temp=Temp->Next;
	}
}
