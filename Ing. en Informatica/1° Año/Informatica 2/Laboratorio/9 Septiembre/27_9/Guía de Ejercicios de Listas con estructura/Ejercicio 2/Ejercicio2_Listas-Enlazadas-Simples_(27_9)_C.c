/*
	2. Crear un programa en la cual se solicite al usuario el ingreso de 5
valores numericos. Luego muestre la lista y calcule el promedio de ellos. 
*/
#include <stdio.h>
#include <stdlib.h>
#define Limit_List 5
struct Nodo {
	int Dato;
	struct Nodo *Next;
};
void Agregar_Nodos(struct Nodo **Head);
void Imprimir_Nodos(struct Nodo *Head);
float Promedio_Nodos(struct Nodo *Head);
int main(){
	struct Nodo *Head = NULL;
	printf("A continuaccion se le solicitara cargar 5 volores para realizar una lista\n");
	for(int ii=0 ; ii<Limit_List ; ii++){
		Agregar_Nodos(&Head);
	}
	printf("A continuaccion se le mostraran los 5 volores de la lista\n");
	Imprimir_Nodos(Head);
	printf("\n");
	printf("Y su promedio es de %.2f\n",Promedio_Nodos(Head));
	printf("\n");
	system("pause");
	return 0;
}
void Agregar_Nodos(struct Nodo **Head){
	struct Nodo *New_Node=NULL;
	struct Nodo *Temp=*Head;
	int Dato=0;
	printf("Ingrese un dato\n");
	scanf("%d",&Dato);
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
float Promedio_Nodos(struct Nodo *Head){
	struct Nodo *Temp= NULL;
	float Prom=0;
	if (Head == NULL) {
		printf("Lista vacia\n");
	}
	else{
		Temp = Head;
		while (Temp != NULL) {
			Prom+= (Temp -> Dato);
			Temp = Temp -> Next;
		}
		Prom/=Limit_List;
	}
	return Prom;
}
