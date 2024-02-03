/*
	1. Crear un programa en la cual cargue una lista de 10 numeros
aleatoriamente. Luego mostrar en pantalla, el listado completo, el promedio de
ellos, y un listado con los múltiplos de 5.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Tam_List 10

// A linked list node
struct Node {
	int data;
	struct Node * next;
};

void Agregar_Final(struct Node ** head);
void Imprimir_Nodos(struct Node * head);
float Promedio_Nodos(struct Node * head);
void Imprimir_Nodos_Multiples_5(struct Node * head);

int main(){
	srand((int)time(0));
	int Actives_Nodes=0;
	/*Puntero al comienzo de la lista*/
	struct Node * head = NULL;
	while(Actives_Nodes<=Tam_List){
		Agregar_Final(&head);
		Actives_Nodes++;
	}
	Imprimir_Nodos(head);
	printf("\n");
	Imprimir_Nodos_Multiples_5(head);
	printf("\n");
	system("pause");
	return 0;
}
	
void Agregar_Final(struct Node ** head){
	int dato=0;
	/*Creacion de nuevo nodo */
	struct Node * new_node = NULL;
	/*Auxiliar para operaciones*/
	struct Node * temp = *head;
	
	//Asignacion del dato al nuevo nodo
	dato=rand()%100+1;
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
void Imprimir_Nodos(struct Node * head){
	/*Auxiliar para operaciones*/
	struct Node * temp = head;
	if (head == NULL) {
		printf("Lista vacia\n");
	}
	else{
		while (temp != NULL) {
			printf("%d | ", temp -> data);
			temp = temp -> next;
		}
	}
}
void Imprimir_Nodos_Multiples_5(struct Node * head){
	int Aux=0;
	/*Auxiliar para operaciones*/
	struct Node * temp = head;
	if (head == NULL) {
		printf("Lista vacia\n");
	}
	else{
		while (temp != NULL) {
			Aux=(temp -> data)/5;
			if(Aux==0){
				printf("%d | ", temp -> data);
				temp = temp -> next;
			}
		}
	}
}
