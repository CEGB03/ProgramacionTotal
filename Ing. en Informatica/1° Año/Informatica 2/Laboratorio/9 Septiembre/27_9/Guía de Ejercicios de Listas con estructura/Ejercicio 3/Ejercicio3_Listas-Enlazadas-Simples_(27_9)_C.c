/*
	3. Crear un programa en la cual cargue una lista de 5 numeros
aleatoriamente (entre 1 y 10), luego los muestre y muestre los valores
multiples de 5.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Limit_List 5
struct Nodo {
	int Dato;
	struct Nodo *Next;
};
void Agregar_Nodos(struct Nodo **Head);
void Imprimir_Nodos_5(struct Nodo *Head);
void Imprimir_Nodos(struct Nodo *Head);
int main(){
	struct Nodo *Head = NULL;
	srand((int)time(0)); 
	for(int ii=0 ; ii<Limit_List ; ii++){
		Agregar_Nodos(&Head);
	}
	printf("A continuaccion se le mostraran todos los volores que pertenecen a la lista\n");
	Imprimir_Nodos(Head);
	printf("\n");
	printf("A continuaccion se le mostraran los volores multiplos de 5 que pertenecen a la lista\n");
	Imprimir_Nodos_5(Head);
	printf("\n");
	system("pause");
	return 0;
}
void Agregar_Nodos(struct Nodo **Head){
	struct Nodo *New_Node=NULL;
	struct Nodo *Temp=*Head;
	int Dato=0;
	Dato=rand()%10+1;
	New_Node = (struct Nodo * ) malloc(sizeof(struct Nodo));
	if (New_Node == NULL){
		printf("No hay memoria disponible");
		exit(0);
	}
	New_Node -> Dato = Dato;
	New_Node -> Next = NULL;
	if (*Head == NULL) {
		*Head = New_Node;
	}
	else {
		while (Temp -> Next != NULL)
			Temp = Temp -> Next;
		Temp -> Next = New_Node;
	}
}
void Imprimir_Nodos_5(struct Nodo *Head){
	struct Nodo *Temp= NULL;
	if (Head == NULL) {
		printf("Lista vacia\n");
	}
	else{
		Temp = Head;
		while (Temp != NULL) {
			if(Temp -> Dato%5==0)
				printf("%d | ", Temp -> Dato);
			Temp = Temp -> Next;
		}
	}
}
void Imprimir_Nodos(struct Nodo *Head){
	struct Nodo *Temp= NULL;
	if (Head == NULL) {
		printf("Lista vacia\n");
	}
	else{
		Temp = Head;
		while (Temp != NULL) {
			printf("%d | ", Temp -> Dato);
		Temp = Temp -> Next;
		}
	}
}
