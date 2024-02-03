/*
	4. Crear un programa con el siguiente menu de opciones: 

	Agregar un nodo a la pila.
	Borrar el último nodo de la pila.
	Imprimir pila.
	Cantidad de nodos en la pila.
	Cantidades de letras mayusculas y minusculas en la pila.

	El usuario cargará la pila con letras mayusculas o minusculas.
Nota: Las letras en ASCII mayusculas estan entre el 65 a 90 y las minusculas
entre  97 a 122 inclusive.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct Nodo{
	char Dato;
	struct Nodo *Next;
};
void Menu();
void Agregar(struct Nodo **Superior);
void Eliminar(struct Nodo **Superior);
void Mostrar(struct Nodo *Superior);
void Contar_Nodos(struct Nodo *Superior);
void Mostrar_Cant_M_m(struct Nodo *Superior);
int main(){
	srand(time(NULL));
	struct Nodo *Superior=NULL;
	int Opcion=0;
	do{
		Menu();
		scanf("%d",&Opcion);
		switch(Opcion){
		case 1:
			Agregar(&Superior);
			printf("\n");
			break;
		case 2:
			Mostrar(Superior);
			printf("\n");
			break;
		case 3:
			Eliminar(&Superior);
			printf("\n");
			break;
		case 4:
			Mostrar_Cant_M_m(Superior);
			printf("\n");
			break;
		case 5:
			Contar_Nodos(Superior);
			printf("\n");
			break;
		}
		
	}while(Opcion!=0);
	
	system("pause");
	return 0;
}
void Menu(){
	printf("Seleccione una opcion\n");
	printf("1. Agregar un Nodos a la pila (ingresara una letra)\n");
	printf("2. Mostrar Nodos de la pila\n");
	printf("3. Eliminar Nodos de la pila\n");
	printf("4. Mostrar la cantidad de Nodos de la pila cuantas son Mayusculas y cuantas son minusculas\n");
	printf("5. Contar cuantos Nodos hay en la pila\n");
	printf("0. Salir\n");
}
void Agregar(struct Nodo **Superior){
	struct Nodo *Nuevo_Nodo=NULL;
	Nuevo_Nodo=(struct Nodo *)malloc(sizeof(struct Nodo));
	if(Nuevo_Nodo==NULL){
		printf("No hay memoria disponible\n");
		exit(1);
	}
	else{
		printf("Ingrese una mayuscula o una minuscula.\n");
		scanf(" %c",&Nuevo_Nodo->Dato);
		Nuevo_Nodo->Next = *Superior;
		*Superior = Nuevo_Nodo;
	}
}	
void Eliminar(struct Nodo **Superior){
	struct Nodo *Temp=NULL;
	char Eliminacion=' ';
	do{
		Mostrar(*Superior);
		printf("\n");
		printf("¿Quiere eliminar un Nodo? S/N  ");
		scanf(" %c",&Eliminacion);
		if(Eliminacion=='s' || Eliminacion=='S'){
			Temp= *Superior;
			if (*Superior != NULL) {
				printf("Eliminando el ultimo elemento agregado\n");
				*Superior = (*Superior)->Next;
				free(Temp);
			}
			else{
				if (*Superior == NULL)
					printf("La Lista esta Vacia\n");
			}
		}
	} while(Eliminacion!='s' || Eliminacion!='S');
}
void Mostrar(struct Nodo *Superior){
	struct Nodo *Temp=NULL;
	Temp= Superior;
	if(Temp == NULL)
		printf("La Lista esta Vacia\n");
	else{
		printf("Imprimiendo...\n");
		while (Temp != NULL) {
			printf("%d | ",Temp->Dato);
			Temp = Temp->Next;
		}
	}
}
void Contar_Nodos(struct Nodo *Superior){
	struct Nodo *Temp=NULL;
	int Cont=0;
	Temp= Superior;
	while(Temp!=NULL){
		Cont++;
		Temp=Temp->Next;
	}
	printf("La cantidad de Mayusculas y minusculas que hay en la pila son: %d\n", Cont);
}
void Mostrar_Cant_M_m(struct Nodo *Superior){
	struct Nodo *Temp=NULL;
	int Cont_M=0, Cont_m=0;
	Temp= Superior;
	while(Temp!=NULL){
		if(Temp->Dato>=65 && Temp->Dato<=90)
			Cont_M++;
		if(Temp->Dato>=97 && Temp->Dato<=122)
			Cont_m++;
		Temp=Temp->Next;
	}
	printf("La cantidad de Mayusculas son: %d\n", Cont_M);
	printf("La cantidad de minisculas son: %d\n", Cont_m);
}
