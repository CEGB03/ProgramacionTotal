#include <stdio.h>
#include <stdlib.h>
#include <iostream>
struct Node 
{
   int data;
   struct Node* next;
   struct Node* prev;
};

void insert_front(struct Node**, int );
void insert_after(struct Node *, int ); 
void insert_end(struct Node **, int );
void remove(struct Node** , int);
void imprimir(struct Node* head);

void menu(void) {
  printf("1.- Agregar un nodo al comienzo\n");
  printf("2.- Agregar un nodo al final\n");
  printf("3.- Eliminar un nodo\n");
  printf("4.- Impresion de la lista\n");
  printf("5.- Salir\n");
}

int main(void) 
{
  int dato = dato = 0,op=0;
  /*Puntero al comienzo de la lista*/
  struct Node * head = NULL;
  do {
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
      //push(&head,dato);
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



void insert_front(struct Node** head, int new_data)
{
    struct Node* newNode = NULL;
    try
    {
        newNode = new Node;
        newNode->data = new_data;
    }
    catch (...)
    {
        printf("No hay suficiente memoria");
        exit(0);
    }

   if ((*head) != NULL)
   {
        newNode->next = (*head);
        newNode->prev = NULL;
        (*head)->prev = newNode;
   }
   else
   {
        newNode->next = NULL;
        newNode->prev = NULL;
   }
  
   (*head) = newNode;
}
void imprimir(struct Node* head){
	struct Node* Aux = NULL;
	struct Node* Temp = NULL;
	if (head == NULL) {
		printf("Lista vacia\n");
	}
	else{
		printf("Imprimir de Derecha a Izquierda (Del final al Inicio\n");
		Aux = head;
		while(Aux != NULL){
			printf("%d | ", Aux->next);
			Temp=Aux;
			Aux=Aux->next;
		}
		printf("\n");
	}
	
}
