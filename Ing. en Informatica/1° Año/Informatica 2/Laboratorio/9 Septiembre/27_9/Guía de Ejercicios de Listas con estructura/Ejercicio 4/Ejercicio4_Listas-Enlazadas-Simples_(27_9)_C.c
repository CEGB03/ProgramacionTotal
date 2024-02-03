/*
	4. Crear una lista con 10 letras y luego mostrar solo las vocales.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Limit_List 10
struct Nodo {
	char Dato;
	struct Nodo *Next;
};
void Agregar_Nodos(struct Nodo **Head);
void Imprimir_Nodos_Vocales(struct Nodo *Head);
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
	printf("A continuaccion se le mostraran los volores que son vocales que pertenecen a la lista\n");
	Imprimir_Nodos_Vocales(Head);
	printf("\n");
	system("pause");
	return 0;
}
void Agregar_Nodos(struct Nodo **Head){
	struct Nodo *New_Node=NULL;
	struct Nodo *Temp=*Head;
	char Dato=0;
	// para rand del n al m = (m-n)+n
	Dato=rand()%26+65;
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
void Imprimir_Nodos_Vocales(struct Nodo *Head){
	struct Nodo *Temp= NULL;
	if (Head == NULL) {
		printf("Lista vacia\n");
	}
	else{
		Temp = Head;
		while (Temp != NULL) {
			if(Temp -> Dato == 'A' || Temp -> Dato == 'E' || Temp -> Dato == 'I' || Temp -> Dato == 'O' || Temp -> Dato == 'U' )
				printf(" %c | ", Temp -> Dato);
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
			printf(" %c | ", Temp -> Dato);
			Temp = Temp -> Next;
		}
	}
}
