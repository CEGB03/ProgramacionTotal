#include <stdio.h>
#include <stdlib.h>

// A linked list node
struct Node {
	int data;
	struct Node * next;
};

void menu();
void Agregar_Final(struct Node ** head, int dato);
void Agregar_Inicio(struct Node ** head, int dato);
void Eliminar_Nodo(struct Node ** head, int dato);
void Imprimir_Nodos(struct Node * head);
void Agregar_Medio(struct Node ** head, int dato);
int Contar_Nodos_Activos(struct Node * head);

int main(){
	int op=0, dato=0;
	/*Puntero al comienzo de la lista*/
	struct Node * head = NULL;
	
	
	do{
		menu();
		scanf("%d", & op);
		printf("\n");
		switch(op){
		case 1:
			Agregar_Final(&head, dato);
			printf("\n");
			break;
		case 2:
			Agregar_Inicio(&head, dato);
			printf("\n");
			break;
		case 3:
			Eliminar_Nodo(&head, dato);
			printf("\n");
			break;
		case 4:
			Imprimir_Nodos(head);
			printf("\n");
			break;
		case 5:
			Agregar_Medio(&head, dato);
			printf("\n");
			break;
		case 6:
			printf("Hay %d Nodos Activos\n\n",Contar_Nodos_Activos(head));
		}
		
	}while (op != 7);
	system("pause");
	return 0;
}
void menu() {
	printf("1.- Agregar un nodo al final(SI)\n");
	printf("2.- Agregar un nodo al comienzo(SI)\n");
	printf("3.- Eliminar un nodo(SI)\n");
	printf("4.- Impresion de la lista(SI)\n");
	printf("5.- Agregar un nodo entre dos nodos(SI)\n");
	printf("6.- Contar cuantos nodos hay activos(SI)\n");
	printf("7.- Salir\n");
}
void Agregar_Final(struct Node ** head, int dato){
	
	/*Creacion de nuevo nodo */
	struct Node * new_node = NULL;
	/*Auxiliar para operaciones*/
	struct Node * temp = *head;
	
	//Asignacion del dato al nuevo nodo
	printf("Ingrese un dato\n");
	scanf("%d", & dato);
	new_node = (struct Node * ) malloc(sizeof(struct Node));
	if (new_node == NULL){
		printf("No hay memoria disponible");
		exit(0);
	}
	new_node -> data = dato;
	
	//Como va al final de la lista
	//este nodo apunta a NULL
	new_node -> next = NULL;
	
	//Si la lista esta vacia, el nodo ingresado
	//es el primero de la lista 
	if (*head == NULL) {
		*head = new_node;
	}
	else {
		//Buscamos cual es el ultimo
		while (temp -> next != NULL)
			temp = temp -> next;
		//Hacemos que el que era ultimo
		//apunte al nuevo nodo
		temp -> next = new_node;
	}
}
void Agregar_Inicio(struct Node ** head, int dato){
	
	/*Creacion de nuevo nodo */
	struct Node * new_node = NULL;
	
	/*Asignacion del dato al nuevo nodo*/
	printf("Ingrese un dato\n");
	scanf("%d", & dato);
	//new_node -> data = dato;		Esta linea hacia que el ultimo nodo y el primero tengan el mismo valor
	new_node = (struct Node * ) malloc(sizeof(struct Node));
	if (new_node == NULL) {
		printf("No hay memoria disponible");
		exit(0);
	}
	new_node -> data = dato;
	
	/*El nuevo nodo debe apuntar
	al que actualmente es el comienzo*/
	new_node -> next = *head;
	
	/*El nuevo nodo debe ser el comienzo*/
	*head = new_node;
}
void Eliminar_Nodo(struct Node ** head, int dato){
	/*Auxiliar para operaciones*/
	struct Node * temp = NULL;
	
	/*Auxiliar para operaciones*/
	struct Node * prev = NULL;
	
	/*Auxiliar para operaciones*/
	struct Node * current = NULL;
	
	struct Node * headd = *head;
	
	if(head == NULL){
		printf("Lista vacia\n");
	}
	else{
		printf("Ingrese el dato a borrar\n");
		scanf("%d", & dato);
		
		//el dato a borrar es el primer nodo
		if (dato == headd -> data) {
			temp= *head;
			*head = headd -> next;
			free(temp);
		}
		else{
			prev = headd;
			current = headd -> next;
			while (current != NULL && current -> data != dato) {
				prev = current;
				current = current -> next;
			}
			//El dato existe
			if (current != NULL) {
				temp = current;
				prev -> next = current -> next;
				free(temp);
			}
		}
	}
}
void Imprimir_Nodos(struct Node * head){
	/*Auxiliar para operaciones*/
	struct Node * temp = head;
	if (head == NULL) {
		printf("Lista vacia\n");
	}
	else{
		while (temp != NULL) {
			printf("%d\n", temp -> data);
			temp = temp -> next;
		}
	}
}
void Agregar_Medio(struct Node ** head, int dato){
	int ante=0;
	
	/*Auxiliar para operaciones*/
	struct Node * prev = NULL;
	
	/*Auxiliar para operaciones*/
	struct Node * current = NULL;
	
	struct Node * headd = *head;
	
	/*Creacion de nuevo nodo */
	struct Node * new_node = NULL;
	
	if(head == NULL){
		printf("Lista vacia\n");
	}
	else{
		printf("Ingrese antes de que dato ira el nuevo dato a ingresar\n");
		Imprimir_Nodos(headd);
		scanf("%d", & ante);
		
		new_node = (struct Node * ) malloc(sizeof(struct Node));
		if (new_node == NULL) {
			printf("No hay memoria disponible");
			exit(0);
		}
		
		
		//	El dato a agregar va antes del primer nodo
		if(ante == headd -> data){
			//El nuevo nodo debe apuntar
			//al que actualmente es el comienzo
			printf("Ingrese un dato\n");
			scanf("%d", & dato);
			
			new_node -> data = dato;
			
			//El nuevo nodo debe apuntar
			//al que actualmente es el comienzo
			new_node -> next = *head;
			
			//El nuevo nodo debe ser el comienzo
			*head = new_node;
		}
		//	El dato a agregar va antes de un nodo intermedio
		else{
			printf("Ingrese un dato\n");
			scanf("%d", & dato);
			
			new_node = (struct Node * ) malloc(sizeof(struct Node));
			if (new_node == NULL) {
				printf("No hay memoria disponible");
				exit(0);
			}
			new_node -> data = dato;
			
			prev = headd;
			current = headd -> next;
			
			while (current != NULL && current -> data != ante) {
				prev = current;
				current = current -> next;
			}
			new_node -> next = current;
			prev -> next = new_node;
			
		}
	}
}
int Contar_Nodos_Activos(struct Node * head){
	int Activos=0;
	/*Auxiliar para operaciones*/
	struct Node * temp = head;
	if (head == NULL) {
		printf("Lista vacia\n");
		Activos=0;
	}
	else{
		while (temp != NULL) {
			Activos++;
			temp = temp -> next;
		}
	}
	return Activos;
}
