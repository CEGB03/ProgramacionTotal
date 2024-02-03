/*
	5. Desarrolle un programa que cargue una cola de numeros enteros aleatorios.
Luego realice un menu de opciones:

	Agregar un nodo a la cola. (cuando agrega un valor, el mismo no tiene que
estar repetido en la cola)
	Borrar el primer nodo de la cola.
	Imprimir cola.
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
void Agregar(struct Nodo **Front,struct Nodo **Back, int Iniciar);
void Eliminar(struct Nodo **Front,struct Nodo **Back);
void Mostrar(struct Nodo *Front,struct Nodo *Back);
void Contar_Nodos(struct Nodo *Front,struct Nodo *Back);
void Mostrar_Cant_M_m(struct Nodo *Front,struct Nodo *Back);
int main(){
	struct Nodo *Front=NULL;
	struct Nodo *Back= NULL;
	srand((int)time(0)); 
	int Opcion=0, Iniciar=0;
	for(int ii=0 ; ii<Inicilizar_Valores ; ii++)
		Agregar(&Front, &Back, Iniciar);
	do{
		Menu();
		scanf("%d",&Opcion);
		switch(Opcion){
		case 1:
			Iniciar=1;
			Agregar(&Front,&Back, Iniciar);
			printf("\n");
			break;
		case 2:
			Mostrar(Front,Back);
			printf("\n");
			break;
		case 3:
			Eliminar(&Front,&Back);
			printf("\n");
			break;
		}
		
	}while(Opcion!=0);
	
	system("pause");
	return 0;
}
void Menu(){
	printf("Seleccione una opcion\n");
	printf("1. Agregar un Nodos a la cola (se corroborara que bo se repita un valor)\n");
	printf("2. Mostrar Nodos de la cola\n");
	printf("3. Eliminar Nodos de la cola\n");
	printf("0. Salir\n");
}
void Agregar(struct Nodo **Front,struct Nodo **Back, int Iniciar){
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
			Valor_Ingreso=rand()%10+1;
			Nuevo_Nodo->Dato = Valor_Ingreso;
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
	else{
		if(Iniciar==1){
			Temp = (*Front);
			Nuevo_Nodo=(struct Nodo *)malloc(sizeof(struct Nodo));
			if(Nuevo_Nodo==NULL){
				printf("No hay memoria disponible\n");
				exit(1);
			}
			else{
				do{
					printf("Ingrese un numero.(se lo comparara antes de guardarlo)\nSi le volvio a aparecer este cartel es porque el valor ya esta dentro de la cola.\n");
					scanf("%d",&Valor_Ingreso);
					if(Temp->Dato==Valor_Ingreso)
						Verificacion=2;
					else
						Verificacion=1;
					Temp=Temp->Next;
				} while(Verificacion!=1 && Temp->Dato!=Valor_Ingreso);
				Nuevo_Nodo->Dato = Valor_Ingreso;
				Nuevo_Nodo->Next=NULL;
				(*Back) -> Next = Nuevo_Nodo;
				(*Back) = Nuevo_Nodo;
			}
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
	} while(Eliminacion=='s' || Eliminacion =='S');
}
void Mostrar(struct Nodo *Front,struct Nodo *Back){
	struct Nodo *Temp=NULL;
	Temp= Front;
	while(Temp!=NULL){
		printf("%d | ",Temp->Dato);
		Temp=Temp->Next;
	}
}
