#include <stdio.h>

#include <stdlib.h>

#include <stdbool.h>


// A linked list node
struct Node {
  int data;
  struct Node * next;
};

void menu(void) {
  printf("1.- Agregar un nodo al final\n");
  printf("2.- Agregar un nodo al comienzo\n");
  printf("3.- Eliminar un nodo\n");
  printf("4.- Impresion de la lista\n");
  printf("5.- Eliminar un nodo\n");
  printf("6.- Salir\n");
}

int main(void) {
  int dato = dato = 0;
  int op = 0;
  /*Puntero al comienzo de la lista*/
  struct Node * head = NULL;

  /*Auxiliar para operaciones*/
  struct Node * temp = NULL;

  /*Auxiliar para operaciones*/
  struct Node * prev = NULL;

  /*Auxiliar para operaciones*/
  struct Node * current = NULL;

  /*Creacion de nuevo nodo */
  struct Node * new_node = NULL;

  do {
    menu();
    scanf("%d", & op);
    switch (op) {
    case 1:
      /*Asignacion del dato al nuevo nodo*/
      printf("Ingrese un dato\n");
      scanf("%d", & dato);

      new_node = (struct Node * ) malloc(sizeof(struct Node));

      if (new_node == NULL) {
        printf("No hay memoria disponible");
        exit(0);
      }

      new_node -> data = dato;

      /*Como va al final de la lista
      este nodo apunta a NULL*/
      new_node -> next = NULL;

      /*Si la lista esta vacia, el nodo ingresado
      es el primero de la lista */
      if (head == NULL) {
        head = new_node;
      } else {
        /*Buscamos cual es el ultimo*/
        temp = head;
        while (temp -> next != NULL)
          temp = temp -> next;

        /*Hacemos que el que era ultimo
        apunte al nuevo nodo*/
        temp -> next = new_node;
      }
      break;

    case 2:
      /*Asignacion del dato al nuevo nodo*/
      printf("Ingrese un dato\n");
      scanf("%d", & dato);
      //new_node -> data = dato; 		//		Hace que el ultimo nodo sea igual al que se agrega
      new_node = (struct Node * ) malloc(sizeof(struct Node));
      if (new_node == NULL) {
        printf("No hay memoria disponible");
        exit(0);
      }
      new_node -> data = dato;

      /*El nuevo nodo debe apuntar
      al que actualmente es el comienzo*/
      new_node -> next = head;

      /*El nuevo nodo debe ser el comienzo*/
      (head) = new_node;
      break;

    case 4:
      temp = head;
      while (temp != NULL) {
        printf("%d\n", temp -> data);
        temp = temp -> next;
      }
	  break;	//		Faltaba este break
      case 5:

        if (head == NULL) {
          printf("Lista vacia\n");
        } else {
          printf("Ingrese el dato a borrar\n");
          scanf("%d", & dato);
          /*el dato a borrar es el primer nodo*/
          if (dato == head -> data) {
            temp = head;
            head = head -> next;
            free(temp);
          } else {


            prev = head;
            current = head -> next;

            while (current != NULL && current -> data != dato) {
              prev = current;
              current = current -> next;
            }

            /*El dato existe*/
            if (current != NULL) {
              temp = current;
              prev -> next = current -> next;
              free(temp);
            }
            }
          }
        break;

    }
  } while (op != 6);

  return (0);
}
