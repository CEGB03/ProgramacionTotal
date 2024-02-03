# include <stdio.h>
# include <stdlib.h>

/*Definicion de la esctructura*/
struct Nodo{
    int Dato;
    struct Nodo *Next;
};
void Menu();
void Agregar(struct Nodo **Front,struct Nodo **Back);
void Eliminar(struct Nodo **Front,struct Nodo **Back);
void Mostrar(struct Nodo *Front,struct Nodo *Back);
int main(){
    struct Nodo *Front=NULL;
    struct Nodo *Back= NULL;
    int Op=0;
    do{
		Menu();
		scanf("%d",&Op);
		switch(Op){
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
		}

    }while(Op!=0);
	return 0;
}
void Menu(){
	printf("Seleccione una opcion\n");
	printf("1. Agregar un Nodo a la cola\n");
	printf("2. Eliminar Nodo de la cola\n");
	printf("3. Mostrar Nodos de la cola\n");
	printf("0. Salir\n");
}
void Agregar(struct Nodo **Front,struct Nodo **Back){
	struct Nodo *Nuevo_Nodo=NULL;
	int Valor=0;
	printf("Ingrese un valor para el Nodo\n");
	scanf("%d",&Valor);
	//Creacion de un nuevo nodo
	Nuevo_Nodo=(struct Nodo *)malloc(sizeof(struct Nodo));
	if(Nuevo_Nodo==NULL){
		printf("No hay memoria disponible\n");
		exit(1);
	}
	else{
		Nuevo_Nodo->Dato = Valor;
		Nuevo_Nodo->Next=NULL;
		//Insercion del primer nodo
		if(*Back == NULL){
			(*Back) = Nuevo_Nodo;
			(*Front) = (*Back);
		}
		//Insercion del resto de los nodo
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
		/*Eliminacion de nodos*/
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
	} while(Eliminacion!='s' || Eliminacion!='S');
}
void Mostrar(struct Nodo *Front,struct Nodo *Back){
	struct Nodo *Temp=NULL;
	/*Impresion de toda la FIFO*/
	Temp= Front;
	while(Temp!=NULL){
		printf("%d | ",Temp->Dato);
		Temp=Temp->Next;
	}
}
