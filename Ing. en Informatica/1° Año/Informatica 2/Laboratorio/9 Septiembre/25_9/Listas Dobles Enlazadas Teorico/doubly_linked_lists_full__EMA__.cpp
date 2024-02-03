#include <stdio.h>
#include <stdlib.h>
#include <iostream>
struct Node{
   int data;
   struct Node* next;
   struct Node* prev;
};
void menu();
void insert_front(struct Node**, int );
void insert_after(struct Node *, int ); 
void insert_end(struct Node **, int );
void remove(struct Node** , int);
void imprimir(struct Node*);



int main(){
	int dato = 0,op=0;
	/*Puntero al comienzo de la lista*/
	struct Node * head = NULL;
	do{
		menu();
		scanf("%d", & op);
		switch (op) {
		case 1:
			printf("Ingrese un dato\n");
			scanf("%d", & dato);
			insert_front(&head,dato);
			break;
		case 2:
			printf("Ingrese un dato\n");
			scanf("%d", & dato);
			insert_end(&head,dato);
			break;
		case 3:
			//print_list(head);
			break;
		case 4:
			imprimir(head);
			break;
		}
	}while (op != 5);
	return (0);
}
void menu() {
	printf("1.- Agregar un nodo al comienzo\n");
	printf("2.- Agregar un nodo al final\n");
	printf("3.- Eliminar un nodo\n");
	printf("4.- Impresion de la lista\n");
	printf("5.- Salir\n");
}
void insert_front(struct Node** head, int new_data){
    struct Node* newNode = NULL;
	newNode = (struct Node * ) malloc(sizeof(struct Node));
	if (newNode == NULL) {
		printf("No hay memoria disponible");
		exit(0);
	}
	else{
		newNode -> data = new_data;
		newNode -> next = *head;
		
		if((*head) != NULL){
			newNode->next = (*head);
			newNode->prev = NULL;
			(*head)->prev = newNode;
		}
		else{
			newNode->next = NULL;
			newNode->prev = NULL;
		}
		(*head) = newNode;
	}
	
}
void insert_after(struct Node *, int ); 
void insert_end(struct Node** head, int new_data){
	struct Node* newNode = NULL;
	struct Node* Aux = NULL;
	newNode = (struct Node * ) malloc(sizeof(struct Node));
	if (newNode == NULL){
		printf("No hay memoria disponible");
		exit(0);
	}
	else{
		newNode->data = new_data;
		if((*head) != NULL){
			newNode->next = (*head);
			newNode->prev = NULL;
			(*head)->prev = newNode;
		}
		else{
			newNode->next = NULL;
			Aux=(*head);
			while (Aux -> next != NULL)
				Aux = Aux -> next;
			Aux -> next = newNode;
			newNode=Aux;
		}
	}
}
void remove(struct Node** head, int new_data);
void imprimir(struct Node* head){
	struct Node* Aux = NULL;
	struct Node* Temp = NULL;
	if (head == NULL) {
		printf("Lista vacia\n");
	}
	else{
		printf("Imprimir de Derecha a Izquierda (Del final al Inicio)\n");
		Aux = head;
		while(Aux != NULL){
			printf("%i | ", (Aux->next));
			Temp=Aux;
			Aux=Aux->next;
		}
		printf("\n");
	}
	
}
