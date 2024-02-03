/*
1. Crear un programa con el siguiente menu de opciones 

Agregar un nodo a la cola. (se deben agregar 5 valores)
Borrar el primer nodo de la cola.
Imprimir cola.
Suma de los valores de la cola.
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
void Agregar(struct Nodo **Front,struct Nodo **Back);
void Eliminar(struct Nodo **Front,struct Nodo **Back);
void Mostrar(struct Nodo *Front,struct Nodo *Back);
int Sumar(struct Nodo *Front,struct Nodo *Back);
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
			printf("La suma de todos los nodos es de: %d",Sumar(Front,Back));
			printf("\n");
			break;
		}
		
	}while(Opcion!=0);
	
	//system("pause");
	return 0;
}
void Menu(){
	printf("Seleccione una opcion\n");
	printf("1. Agregar un Nodo a la cola(se le solicitaran 5 valores)\n");
	printf("2. Eliminar Nodo de la cola\n");
	printf("3. Mostrar Nodos de la cola\n");
	printf("4. Sumar los Nodos de la cola\n");
	printf("0. Salir\n");
}
void Agregar(struct Nodo **Front,struct Nodo **Back){
	struct Nodo *Nuevo_Nodo=NULL;
	int Valor1=0, Valor2=0, Valor3=0, Valor4=0, Valor5=0;
	//Creacion de un nuevo nodo
	Nuevo_Nodo=(struct Nodo *)malloc(sizeof(struct Nodo));
	if(Nuevo_Nodo==NULL){
		printf("No hay memoria disponible\n");
		exit(1);
	}
	else{
		printf("Ingrese el 1° valor del Nodo\n");
		scanf("%d",&Valor1);
		Nuevo_Nodo->Dato1 = Valor1;
		printf("Ingrese el 2° valor del Nodo\n");
		scanf("%d",&Valor2);
		Nuevo_Nodo->Dato2 = Valor2;
		printf("Ingrese el 3° valor del Nodo\n");
		scanf("%d",&Valor3);
		Nuevo_Nodo->Dato3 = Valor3;
		printf("Ingrese el 4° valor del Nodo\n");
		scanf("%d",&Valor4);
		Nuevo_Nodo->Dato4 = Valor4;
		printf("Ingrese el 5° valor del Nodo\n");
		scanf("%d",&Valor5);
		Nuevo_Nodo->Dato5 = Valor5;
		
		
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
	do{
		Mostrar(*Front,*Back);
		printf("\n");
		printf("¿Quiere eliminar un Nodo? S/N  ");
		scanf(" %c",&Eliminacion);
		if(Eliminacion=='s' || Eliminacion=='S'){
			if(((*Front) == (*Back)) && ((*Back) == NULL)){
				printf("Vacia");
				exit(10);
			}
			else{
				Temp = *(Front);
				(*Front) = (*Front) -> Next;
				if(*Front == NULL)
					*(Back) = NULL;
				free(Temp);
			}
		}
	} while(Eliminacion!='s' || Eliminacion!='S');
}
void Mostrar(struct Nodo *Front,struct Nodo *Back){
	struct Nodo *Temp=NULL;
	Temp= Front;
	while(Temp!=NULL){
		printf("%d | %d | %d | %d | %d |\n",Temp->Dato1,Temp->Dato2,Temp->Dato3,Temp->Dato4,Temp->Dato5);
		Temp=Temp->Next;
	}
}
int Sumar(struct Nodo *Front,struct Nodo *Back){
	struct Nodo *Temp=NULL;
	int Suma=0;
	Temp= Front;
	while(Temp!=NULL){
		Suma=((Temp->Dato1)+(Temp->Dato2)+(Temp->Dato3)+(Temp->Dato4)+(Temp->Dato5));
		Temp=Temp->Next;
	}
	return Suma;
}
