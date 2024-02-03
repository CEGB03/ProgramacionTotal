/*
	3. Crear un programa con el siguiente menu de opciones: 

	Agregar un nodo a la pila. (se deben agregar 5 valores)
	Borrar el último nodo de la pila.
	Imprimir pila.
	Tamaño de la pila
	Mostrar el último valor de la pila
*/
#include <stdio.h>
#include <stdlib.h>
struct Nodo{
	int Dato1;
	int Dato2;
	int Dato3;
	int Dato4;
	int Dato5;
	struct Nodo *Next;
};
void Menu();
void Agregar(struct Nodo **Superior);
void Eliminar(struct Nodo **Superior);
void Mostrar(struct Nodo *Superior);
int Tam_Pila(struct Nodo *Superior);
int Mostrar_Val_Final(struct Nodo *Superior);
int main(){
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
			Eliminar(&Superior);
			printf("\n");
			break;
		case 3:
			Mostrar(Superior);
			printf("\n");
			break;
		case 4:
			printf("El tama%co de la coa es de: %d",164,Tam_Pila(Superior));
			printf("\n");
			break;
		case 5:
			printf("El valor del fondo de la pila es el: %d",Mostrar_Val_Final(Superior));
			printf("\n");
			break;
		}
		
	}while(Opcion!=0);
	
	//system("pause");
	return 0;
}
void Menu(){
	printf("Seleccione una opcion\n");
	printf("1. Agregar un Nodo a la pila(se le solicitaran 5 valores)\n");
	printf("2. Eliminar Nodo de la pila\n");
	printf("3. Mostrar Nodos de la pila\n");
	printf("4. Sumar los Nodos de la pila\n");
	printf("5. Mostrar el valor del frente de la pila\n");
	printf("0. Salir\n");
}
void Agregar(struct Nodo **Superior){
	struct Nodo *Nuevo_Nodo=NULL;
	Nuevo_Nodo=(struct Nodo *)malloc(sizeof(struct Nodo));
	if(Nuevo_Nodo==NULL){
		printf("No hay memoria disponible\n");
		exit(10);
	}
	else{
		printf("Ingrese el 1° valor del Nodo\n");
		scanf("%d",&Nuevo_Nodo->Dato1);
		printf("Ingrese el 2° valor del Nodo\n");
		scanf("%d",&Nuevo_Nodo->Dato2);
		printf("Ingrese el 3° valor del Nodo\n");
		scanf("%d",&Nuevo_Nodo->Dato3);
		printf("Ingrese el 4° valor del Nodo\n");
		scanf("%d",&Nuevo_Nodo->Dato4);
		printf("Ingrese el 5° valor del Nodo\n");
		scanf("%d",&Nuevo_Nodo->Dato5);
		
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
	while(Temp!=NULL){
		printf("%d | %d | %d | %d | %d |\n",Temp->Dato1,Temp->Dato2,Temp->Dato3,Temp->Dato4,Temp->Dato5);
		Temp=Temp->Next;
	}
}
int Tam_Pila(struct Nodo *Superior){
	struct Nodo *Temp=NULL;
	int Suma=0;
	Temp= Superior;
	while(Temp!=NULL){
		Suma++;
		Temp=Temp->Next;
	}
	return Suma;
}
int Mostrar_Val_Final(struct Nodo *Superior){
	if (Superior == NULL)
		return -1;
	return (Superior->Dato1);
}
