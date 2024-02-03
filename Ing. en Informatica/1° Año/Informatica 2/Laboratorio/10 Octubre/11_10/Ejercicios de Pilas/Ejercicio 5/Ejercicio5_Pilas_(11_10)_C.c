/*
	5. Desarrolle un programa que cargue una pila de numeros enteros aleatorios.
Luego realice un menu de opciones:

	Agregar un nodo a la pila. (cuando agrega un valor, el mismo no tiene que
estar repetido en la pila)
	Borrar el último nodo de la pila.
	Imprimir pila.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Inicilizar_Valores 5
struct Nodo{
	int Dato;
	struct Nodo *Next;
};
void Menu();
void Agregar(struct Nodo **Superior, int Iniciar);
void Eliminar(struct Nodo **Superior);
void Mostrar(struct Nodo *Superior);
void Contar_Nodos(struct Nodo *Superior);
void Mostrar_Cant_M_m(struct Nodo *Superior);
int main(){
	struct Nodo *Superior=NULL;
	srand((int)time(0)); 
	int Opcion=0, Iniciar=0;
	for(int ii=0 ; ii<Inicilizar_Valores ; ii++)
		Agregar(&Superior, Iniciar);
	do{
		Menu();
		scanf("%d",&Opcion);
		switch(Opcion){
		case 1:
			Iniciar=1;
			Agregar(&Superior, Iniciar);
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
		}
		
	}while(Opcion!=0);
	
	system("pause");
	return 0;
}
void Menu(){
	printf("Seleccione una opcion\n");
	printf("1. Agregar un Nodos a la pila (se corroborara que bo se repita un valor)\n");
	printf("2. Mostrar Nodos de la pila\n");
	printf("3. Eliminar Nodos de la pila\n");
	printf("0. Salir\n");
}
void Agregar(struct Nodo **Superior, int Iniciar){
	struct Nodo *Nuevo_Nodo=NULL;
	struct Nodo *Temp=NULL;
	int Valor_Ingreso=0, Verificacion=0;
	if(Iniciar==0){
		Nuevo_Nodo=(struct Nodo *)malloc(sizeof(struct Nodo));
		if(Nuevo_Nodo==NULL){
			printf("No hay memoria disponible\n");
			exit(1);
		}
		else{
			Nuevo_Nodo->Dato=rand()%10+1;
			
			Nuevo_Nodo->Next = *Superior;
			*Superior = Nuevo_Nodo;
		}
	}
	else{
		if(Iniciar==1){
			Temp = (*Superior);
			Nuevo_Nodo=(struct Nodo *)malloc(sizeof(struct Nodo));
			if(Nuevo_Nodo==NULL){
				printf("No hay memoria disponible\n");
				exit(1);
			}
			else{
				do{
					printf("Ingrese un numero.(se lo comparara antes de guardarlo)\nSi le volvio a aparecer este cartel es porque el valor ya esta dentro de la pila.\n");
					scanf("%d",&Valor_Ingreso);
					if(Temp->Dato==Valor_Ingreso)
						Verificacion=2;
					else
						Verificacion=1;
					Temp=Temp->Next;
				} while(Verificacion!=1 && Temp->Dato!=Valor_Ingreso);
				Nuevo_Nodo->Dato = Valor_Ingreso;
				Nuevo_Nodo->Next = *Superior;
				*Superior = Nuevo_Nodo;
			}
		}
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
	while(Temp!=NULL){
		printf("%d | ",Temp->Dato);
		Temp=Temp->Next;
	}
}
