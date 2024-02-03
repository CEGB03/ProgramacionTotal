/*
	6. Elaborar un sistema de stock, en la cual posee una cola de productos con
los siguientes atributos: codigo, nombre, cantidad, precio lista. Desarrollar
las siguientes funciones:

	Agregar un nuevo producto.
	Borrar el primer nodo de la cola.
	Mostrar el stock. 
	Descontar stock.
	Reponer stock.
*/
#include <stdio.h>
#include <stdlib.h>
struct Nodo{
	int Codigo;
	char Nombre[20];
	int Cantidad;
	int Precio_List;
	struct Nodo *Next;
};
void Menu();
void Agregar(struct Nodo **Front,struct Nodo **Back);
void Eliminar(struct Nodo **Front,struct Nodo **Back);
void Mostrar(struct Nodo *Front,struct Nodo *Back);
void Descontar(struct Nodo **Front,struct Nodo **Back);
void Reponer(struct Nodo **Front,struct Nodo **Back);
int main(){
	struct Nodo *Front=NULL;
	struct Nodo *Back= NULL;
	int Opcion=0;
	do{
		Menu();
		scanf("%d",&Opcion);
		switch(Opcion){
		case 1:
			Agregar(&Front,&Back);
			printf("\n");
			break;
		case 2:
			Eliminar(&Front,&Back);
			printf("\n");
			break;
		case 3:
			Mostrar(Front,Back);
			printf("\n");
			break;
		case 4:
			Descontar(&Front,&Back);
			printf("\n");
			break;
		case 5:
			Reponer(&Front,&Back);
			printf("\n");
			break;
		}
		
	}while(Opcion!=0);
	system("pause");
	return 0;
}
void Menu(){
	printf("Seleccione una opcion\n");
	printf("1. Agregar un nuevo producto.\n");
	printf("2. Borrar el primer nodo de la cola.\n");
	printf("3. Mostrar el stock.\n");
	printf("4. Descontar stock.\n");
	printf("5. Reponer stock.\n");
	printf("0. Salir\n");
}
void Agregar(struct Nodo **Front,struct Nodo **Back){
	struct Nodo *Nuevo_Nodo=NULL;
	Nuevo_Nodo=(struct Nodo *)malloc(sizeof(struct Nodo));
	if(Nuevo_Nodo==NULL){
		printf("No hay memoria disponible\n");
		exit(1);
	}
	else{
		printf("Ingrese el Codigo del producto.\n");
		scanf("%d",&Nuevo_Nodo->Codigo);
		printf("Ingrese el Nombre del producto.\n");
		scanf("%s",&Nuevo_Nodo->Nombre);
		printf("Ingrese la cantidad del producto.\n");
		scanf("%d",&Nuevo_Nodo->Cantidad);
		printf("Ingrese el precio de lista del producto.\n");
		scanf("%d",&Nuevo_Nodo->Precio_List);
		Nuevo_Nodo->Next=NULL;
		if(*Back == NULL){
			(*Back) = Nuevo_Nodo;
			(*Front) = (*Back);
		}
		else{
			(*Back) -> Next = Nuevo_Nodo;
			(*Back) = Nuevo_Nodo;
		}
	}
}
void Eliminar(struct Nodo **Front,struct Nodo **Back){
	struct Nodo *Temp=NULL;
	char Eliminacion=' ';
	if(((*Front) == (*Back)) && ((*Back) == NULL)){
		printf("Lista Vacia");
	}
	else{
		do{
			Mostrar(*Front,*Back);
			printf("\n");
			printf("¿Quiere eliminar un Nodo? S/N  ");
			scanf(" %c",&Eliminacion);
			if(Eliminacion=='s' || Eliminacion=='S'){
				if(((*Front) == (*Back)) && ((*Back) == NULL)){
					printf("Lista Vacia");
					exit(10);
				}
				else{
					Temp = (*Front);
					(*Front) = (*Front) -> Next;
					if(*Front == NULL)
						*(Back) = NULL;
					free(Temp);
				}
			}
		} while(Eliminacion=='s' || Eliminacion =='S');
	}
}
void Mostrar(struct Nodo *Front,struct Nodo *Back){
	struct Nodo *Temp=NULL;
	Temp= Front;
	printf("Codigo | Nombre | Cantidad | Precio Lista |\n");
	while(Temp!=NULL){
		printf("%d | %s | %d | %d |\n",Temp->Codigo,Temp->Nombre,Temp->Cantidad,Temp->Precio_List);
		Temp=Temp->Next;
	}
}
void Descontar(struct Nodo **Front,struct Nodo **Back){
	struct Nodo *Temp=NULL;
	int Eliminacion=0;
	if(((*Front) == (*Back)) && ((*Back) == NULL)){
		printf("Lista Vacia");
	}
	else{
		Temp = (*Front);
		printf("Ingrese el numero del Codigo del producto a descontar stock.\n");
		scanf("%d",&Eliminacion);
		while(Temp->Codigo!=Eliminacion)
			Temp=Temp->Next;
		printf("Ingrese el numero a descontar del stock del producto '%s'.\n",Temp->Nombre);
		scanf("%d",&Eliminacion);
		Temp->Cantidad-=Eliminacion;
	}
}
void Reponer(struct Nodo **Front,struct Nodo **Back){
	struct Nodo *Temp=NULL;
	int Eliminacion=0;
	if(((*Front) == (*Back)) && ((*Back) == NULL)){
		printf("Lista Vacia");
	}
	else{
		Temp = (*Front);
		printf("Ingrese el numero del Codigo del producto a reponer stock.\n");
		scanf("%d",&Eliminacion);
		while(Temp->Codigo!=Eliminacion)
			Temp=Temp->Next;
		printf("Ingrese el numero a agregar del stock del producto '%s'.\n",Temp->Nombre);
		scanf("%d",&Eliminacion);
		Temp->Cantidad+=Eliminacion;
	}
}
