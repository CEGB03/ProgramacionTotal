#include <stdio.h>   // printf
#include <stdlib.h>  // malloc y free
// Un nodo tiene un dato, el cual es el número. Y otro nodo al que apunta
struct Nodo {
  int Dato;
  struct Nodo *Next;
};

// Prototipos de funciones
void Agregar(int Dato,struct Nodo **Superior);  // push
void EliminarUltimo(struct Nodo **Superior); // pop
void Imprimir(struct Nodo *Superior);
int Tamanio(struct Nodo *Superior); // El tamaño de la pila
int Ultimo(struct Nodo *Superior);  // El último elemento. Devuelve 0 si no hay elementos
void Comprobar(struct Nodo *Superior);

// Todo comienza con el nodo superior

int main(){
	struct Nodo *Superior = NULL;
	int Eleccion=0;
	int Dato=0;
	do{
		printf("\n--BIENVENIDO--\n");
		printf("1.- Agregar\n");
		printf("2.- Eliminar\n");
		printf("3.- Imprimir stack\n");
		printf("4.- Imprimir tamanio\n");
		printf("5.- Comprobar si esta vacia\n");
		printf("0.- Salir\n\n");
		printf("Elige: ");
		scanf("%d", &Eleccion);
		switch (Eleccion) {
		case 1:
			Agregar(Dato,&Superior);
			break;
		case 2:
			EliminarUltimo(&Superior);
			break;
		case 3:
			Imprimir(Superior);
			break;
		case 4:
			printf("La stack mide %d\n", Tamanio(Superior));
			break;
		case 5:
			Comprobar(Superior);
			break;
		case 6:
			printf("El ultimo elemento de la stack es: %d\n", Ultimo(Superior));
			break;
		}
	}while(Eleccion != 0);
}
int Tamanio(struct Nodo *Superior) {
	struct Nodo *Temporal = Superior;
	int Contador = 0;
	if (Superior == NULL)
		return Contador;
	while (Temporal != NULL) {
		Contador++;
		Temporal = Temporal->Next;
	}
	return Contador;
}
int Ultimo(struct Nodo *Superior) {
	if (Superior == NULL)
		return -1;
	return (Superior->Dato);
}
// Operación push
void Agregar(int Dato,struct Nodo **Superior) {
	
	// El que se agregará; reservamos memoria
	struct Nodo *nuevoNodo = malloc(sizeof(struct Nodo));
	// Le ponemos el dato
	if(nuevoNodo==NULL){
		printf("No hay memoria disponible\n");
		exit(1);
	}
	else{
		printf("Ingresa el numero que agregaremos:\n");
		scanf("%d", &Dato);
		printf("Agregando %d\n", Dato);
		nuevoNodo->Dato = Dato;
		
		// Y ahora el nuevo nodo es el superior, y su siguiente
		// es el que antes era superior
		nuevoNodo->Next = *Superior;
		*Superior = nuevoNodo;
	}
}
void Imprimir(struct Nodo *Superior) {
	struct Nodo *Temporal = Superior;
	while (Temporal != NULL) {
		printf("Imprimiendo...\n");
		printf("%d\n", Temporal->Dato);
		Temporal = Temporal->Next;
	}
	if(Temporal == NULL)
		printf("La Lista esta Vacia\n");
}
// Operación pop, eliminar el de hasta arriba
void EliminarUltimo(struct Nodo **Superior) {
	struct Nodo *Temporal = *Superior;
	if (*Superior != NULL) {
		printf("Eliminando el ultimo\n");
		// Para liberar la memoria más tarde debemos
		// tener la referencia al que vamos a eliminar
		// Ahora superior es a lo que apuntaba su siguiente
		*Superior = (*Superior)->Next;
		
		// Liberar memoria que estaba ocupando el que eliminamos
		free(Temporal);
	}
	else{
		if (*Superior == NULL)
			printf("La Lista esta Vacia\n");
	}
}
void Comprobar(struct Nodo *Superior){
	if (Superior == NULL)
		printf("La Lista esta Vacia\n");
	else{
		if (Superior != NULL)
			printf("La Lista no esta Vacia\n");
	}
}
