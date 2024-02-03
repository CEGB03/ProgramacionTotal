/*
	6. Crear un programa en la cual cargue una lista de 5 numeros
aleatoriamente (entre 1 y 10), luego los muestre los todos los valores.
Finalmente borre un valor y vuelva a mostrar la lista resultante.
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
void Imprimir_Nodos(struct Nodo *Head);
void Eliminar_Nodo(struct Nodo **Head);
int main(){
	struct Nodo *Head = NULL;
	srand((int)time(0)); 
	for(int ii=0 ; ii<Limit_List ; ii++){
		Agregar_Nodos(&Head);
	}
	printf("A continuaccion se le mostraran todos los volores que pertenecen a la lista\n");
	Imprimir_Nodos(Head);
	printf("\n");
	printf("A continuaccion se le solicitara que elimine uno de volores que pertenecen a la lista\n");
	Eliminar_Nodo(&Head);
	printf("\n");
	printf("A continuaccion se le mostraran todos los volores que permenecieron a la lista\n");
	Imprimir_Nodos(Head);
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
void Eliminar_Nodo(struct Nodo **Head){
	struct Nodo *Temp = NULL;
	struct Nodo *Aux= NULL;
	struct Nodo *Current = NULL;
	
	int Dato_Borrar=0;
	if(Head == NULL){
		printf("Lista vacia\n");
	}
	else{
		printf("Ingrese el dato a borrar\n");
		Imprimir_Nodos(*Head);
		printf("\n");
		scanf("%d",&Dato_Borrar);
		if(Dato_Borrar == (*Head) -> Dato){
			Temp = (*Head);
			*Head= (*Head) -> Next;
			free(Temp);
		}
		else{
			Aux = *Head;
			Current = (*Head) -> Next;
			while(Current != NULL && Current -> Dato != Dato_Borrar){
				Aux = Current;
				Current = Current -> Next;
			}
			if(Current != NULL){
				
				Temp = Current;
				Aux -> Next = Current -> Next;
				free(Temp);
			}
		}
	}
}
