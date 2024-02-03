#include <stdio.h>
#include <stdlib.h>
struct Node{
   int data;
   struct Node* next;
   struct Node* prev;
};
void menu();
void insert_front(struct Node** head, int new_data);
void insert_after(struct Node** head, int new_data); 
void insert_end(struct Node** head, int new_data);
void remove_node(struct Node** head, int new_data);
void Imprimir_ID_DI(struct Node* head);
void Imprimir_Todo(struct Node* head);


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
			printf("Ingrese un dato a cargar\n");
			scanf("%d", & dato);
			insert_after(&head,dato);
			break;
		case 4:
			printf("Ingrese el dato a borrar\n");
			Imprimir_Todo(head);
			scanf("%d", & dato);
			remove_node(&head,dato);
			break;
		case 5:
			Imprimir_ID_DI(head);
			break;
		}
	}while (op != 6);
	return (0);
}
void menu(){
	printf("1.- Agregar un nodo al comienzo\n");
	printf("2.- Agregar un nodo al final\n");
	printf("3.- Agregar un nodo antes de otro nodo\n");
	printf("4.- Eliminar un nodo\n");
	printf("5.- Impresion de la lista en ambos sentidos\n");
	printf("6.- Salir\n");
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
void insert_after(struct Node** head, int new_data){
	struct Node* newNode = NULL;
	struct Node* Aux = *head;
	struct Node* Temp = NULL;
	int Ante=0;
	if(head == NULL){
		printf("Lista vacia\n");
	}
	else{
		printf("Ingrese antes de que dato ira el nuevo dato a ingresar\n");
		Imprimir_Todo(Aux);
		scanf("%d",&Ante);
		newNode = (struct Node * ) malloc(sizeof(struct Node));
		if (newNode == NULL){
			printf("No hay memoria disponible");
			exit(0);
		}
		else{
			if(Ante == (*head) -> data){
				newNode -> data = new_data;
				newNode -> prev = NULL;
				newNode -> next = *head;
				*head = newNode;
			}
			else{
				newNode ->data=new_data;
				
				Aux = (*head);
				Temp = (*head) -> next;
				
				while (Temp != NULL && Temp -> data != Ante) {
					Aux = Temp;
					Temp = Temp -> next;
				}
				newNode -> next = Temp;
				Temp -> prev = newNode;
				Aux -> next = newNode;
				newNode -> prev = Aux;
			}
			
		}
	}
}
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
		if((*head) == NULL){
			newNode->next = NULL;
			newNode->prev = NULL;
			(*head) = newNode;
			
		}
		else{
			newNode->next = NULL;
			Aux=(*head);
			while (Aux -> next != NULL)
				Aux = Aux -> next;
			Aux -> next = newNode;
			newNode->prev=Aux;
		}
	}
}
void remove_node(struct Node** head, int new_data){
	struct Node* Aux = NULL;
	struct Node* Temp = NULL;
	struct Node* Temp2 = NULL;
	if(head == NULL){
		printf("Lista vacia\n");
	}
	else{
		if(new_data == (*head) -> data){
			Temp= *head;
			*head = (*head) -> next;
			(*head) -> prev=NULL;
			free(Temp);
		}
		else{
			Temp = (*head);
			Aux = (*head) -> next;
			while (Aux != NULL && Aux -> data != new_data) {
				Temp = Aux;
				Aux = Aux -> next;
			}
			//El dato existe
			if (Aux != NULL) {
				Temp2 = Aux;
				Temp -> next = Aux -> next;
				free(Temp2);
			}
		}
	}
}
void Imprimir_ID_DI(struct Node* head){
	struct Node* Aux = NULL;
	struct Node* Temp = NULL;
	if (head == NULL) {
		printf("Lista vacia\n");
	}
	else{
		printf("Imprimir de Izquierda a Derecha (Del Inicio al final)\n");
		Aux = head;
		while(Aux != NULL){
			printf("%d | ", (Aux->data));
			Temp=Aux;
			Aux=Aux->next;
		}
		printf("\n");
		printf("Imprimir de Derecha a Izquierda (Del final al Inicio)\n");
		while(Temp != NULL){
			printf("%d | ", (Temp->data));
			Aux=Temp;
			Temp=Aux->prev;
		}
		printf("\n");
	}
}
void Imprimir_Todo(struct Node* head){
	struct Node* Aux = NULL;
	if (head == NULL) {
		printf("Lista vacia\n");
	}
	else{
		Aux = head;
		while(Aux != NULL){
			printf("%d | ", (Aux->data));
			Aux=Aux->next;
		}
		printf("\n");
	}
}
