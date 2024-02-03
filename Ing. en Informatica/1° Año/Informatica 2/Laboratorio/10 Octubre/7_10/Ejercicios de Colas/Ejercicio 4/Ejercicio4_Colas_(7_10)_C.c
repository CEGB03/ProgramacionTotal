/*
4. Crear un programa con el siguiente menu de opciones: 

	Agregar un nodo a la cola.
	Borrar el primer nodo de la cola.
	Imprimir cola.
	Cantidad de nodos en la cola.
	Cantidades de letras mayusculas y minusculas en la cola.

El usuario cargará la cola con letras mayusculas o minusculas.
Nota: Las letras en ASCII mayusculas estan entre el 65 a 90 y
las minusculas entre  97 a 122 inclusive.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct Nodo{
	char Dato;
	struct Nodo *Next;
};
void Menu();
void Agregar(struct Nodo **Front,struct Nodo **Back);
void Eliminar(struct Nodo **Front,struct Nodo **Back);
void Mostrar(struct Nodo *Front,struct Nodo *Back);
void Contar_Nodos(struct Nodo *Front,struct Nodo *Back);
void Mostrar_Cant_M_m(struct Nodo *Front,struct Nodo *Back);
int main(){
	srand(time(NULL));
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
			Mostrar(Front,Back);
			printf("\n");
			break;
		case 3:
			Eliminar(&Front,&Back);
			printf("\n");
			break;
		case 4:
			Mostrar_Cant_M_m(Front,Back);
			printf("\n");
			break;
		case 5:
			Contar_Nodos(Front,Back);
			printf("\n");
			break;
		}
		
	}while(Opcion!=0);
	
	system("pause");
	return 0;
}
void Menu(){
	printf("Seleccione una opcion\n");
	printf("1. Agregar un Nodos a la cola (ingresara una letra)\n");
	printf("2. Mostrar Nodos de la cola\n");
	printf("3. Eliminar Nodos de la cola\n");
	printf("4. Mostrar la cantidad de Nodos de la cola cuantas son Mayusculas y cuantas son minusculas\n");
	printf("5. Contar cuantos Nodos hay en la cola\n");
	printf("0. Salir\n");
}
void Agregar(struct Nodo **Front,struct Nodo **Back){
	struct Nodo *Nuevo_Nodo=NULL;
	char Valor_Ingreso=' ';
	Nuevo_Nodo=(struct Nodo *)malloc(sizeof(struct Nodo));
	if(Nuevo_Nodo==NULL){
		printf("No hay memoria disponible\n");
		exit(1);
	}
	else{
		printf("Ingrese una mayuscula o una minuscula.\n");
		scanf(" %c",&Valor_Ingreso);
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
		printf("%c | ",Temp->Dato);
		Temp=Temp->Next;
	}
}
void Contar_Nodos(struct Nodo *Front,struct Nodo *Back){
	struct Nodo *Temp=NULL;
	int Cont=0;
	Temp= Front;
	while(Temp!=NULL){
		Cont++;
		Temp=Temp->Next;
	}
	printf("La cantidad de Mayusculas y minusculas que hay en la cola son: %d\n", Cont);
}
void Mostrar_Cant_M_m(struct Nodo *Front,struct Nodo *Back){
	struct Nodo *Temp=NULL;
	int Cont_M=0, Cont_m=0;
	Temp= Front;
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
