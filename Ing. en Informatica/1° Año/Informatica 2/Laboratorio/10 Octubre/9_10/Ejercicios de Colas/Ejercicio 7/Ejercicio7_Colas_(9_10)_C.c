/*
	7. Desarrollo un programa que cree una cola de vehiculos que pasan por un
peaje, en la cual se deben registrar patente, marca, color, cantidad de ejes,
precio, direccion. El precio es segun la cantidad de ejes. (1 eje = $100,
2 ejes = $150, 3 ejes = $200 y 4 ejes o mas $300). La direccion es a la que se
dirige el vehiculo, en este caso puede ser de Norte a Sur o Sur a Norte.
Luego, arme un menu de opciones que muestre lo siguiente: 

	Agregar un vehiculo a la cola
	Borrar el primer nodo de la cola.
	Mostrar todos los vehiculos.
	Mostrar los vehiculos por dirección
	Mostrar los vehiculos por ejes.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Precio_1_Eje 100
#define Precio_2_Eje 150
#define Precio_3_Eje 200
#define Precio_4_Eje 300
struct Patente{
	char Paten_Letras[5];
	int Paten_Numero;
};
struct Nodo{
	struct Patente Patent;
	char Marca[20];
	char Color[20];
	int Cant_Ejes;
	char Direccion_O[6];
	char Direccion_D[6];
	int Pago;
	struct Nodo *Next;
};
void Menu();
void Agregar(struct Nodo **Front,struct Nodo **Back);
void Eliminar(struct Nodo **Front,struct Nodo **Back);
void Mostrar(struct Nodo *Front,struct Nodo *Back);
void Mostrar_Dir(struct Nodo *Front,struct Nodo *Back);
void Mostrar_Ejes(struct Nodo *Front,struct Nodo *Back);
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
			break;/*
		case 4:
			Mostrar_Dir(Front,Back);
			printf("\n");
			break;
		case 5:
			Mostrar_Ejes(Front,Back);
			printf("\n");
			break;*/
		}
		
	}while(Opcion!=0);
	system("pause");
	return 0;
}
void Menu(){
	printf("Seleccione una opcion\n");
	printf("1. Agregar un nuevo veiculo.\n");
	printf("2. Borrar el primer nodo de la cola.\n");
	printf("3. Mostrar todos los vehiculos.\n");
	printf("4. Mostrar los vehiculos por dirección.(NO)\n");
	printf("5. Mostrar los vehiculos por ejes.(NO)\n");
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
		printf("Ingrese la patente del auto(Pate de letras).\n");
		scanf("%s",&Nuevo_Nodo->Patent.Paten_Letras);
		printf("Ingrese la patente del auto(Pate de numeros).\n");
		scanf("%d",&Nuevo_Nodo->Patent.Paten_Numero);
		printf("Ingrese la marca del auto.\n");
		scanf("%s",&Nuevo_Nodo->Marca);
		printf("Ingrese el color del auto.\n");
		scanf("%s",&Nuevo_Nodo->Color);
		printf("Ingrese la cantidad de ejes del auto.\n");
		scanf("%d",&Nuevo_Nodo->Cant_Ejes);
		if(Nuevo_Nodo->Cant_Ejes==1)
			Nuevo_Nodo->Pago=Precio_1_Eje;
		if(Nuevo_Nodo->Cant_Ejes==2)
			Nuevo_Nodo->Pago=Precio_2_Eje;
		if(Nuevo_Nodo->Cant_Ejes==3)
			Nuevo_Nodo->Pago=Precio_3_Eje;
		if(Nuevo_Nodo->Cant_Ejes==4)
			Nuevo_Nodo->Pago=Precio_4_Eje;
		printf("Ingrese la direccion de origen\n");
		scanf("%s",&Nuevo_Nodo->Direccion_O);
		printf("Ingrese la direccion de Destino\n");
		scanf("%s",&Nuevo_Nodo->Direccion_D);
		
		
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
	printf("Patente | Marca | Color | Cant Eje | Direccion | Pagar |\n");
	while(Temp!=NULL){
		printf("%s %d | %s | %s | %d | %s a %s | %d |\n",Temp->Patent.Paten_Letras,Temp->Patent.Paten_Numero,Temp->Marca,Temp->Color,Temp->Cant_Ejes,Temp->Direccion_O,Temp->Direccion_D,Temp->Pago);
		Temp=Temp->Next;
	}
}/*
void Mostrar_Dir(struct Nodo *Front,struct Nodo *Back){
	struct Nodo *Temp=NULL;
	printf("Patente | Marca | Color | Cant Eje | Direccion | Pagar |\n");
	Temp= Front;
	while(Temp!=NULL){
		if(Temp->Direccion_O=='Norte')
			printf("%s | %s | %s | %d | %s a %s | %d |\n",Temp->Patente,Temp->Marca,Temp->Color,Temp->Cant_Ejes,Temp->Direccion_O,Temp->Direccion_D,Temp->Pago);
		Temp=Temp->Next;
	}
	printf("Patente | Marca | Color | Cant Eje | Direccion | Pagar |\n");
	Temp= Front;
	while(Temp!=NULL){
		if(Temp->Direccion_O=='Sur')
			printf("%s | %s | %s | %d | %s a %s | %d |\n",Temp->Patente,Temp->Marca,Temp->Color,Temp->Cant_Ejes,Temp->Direccion_O,Temp->Direccion_D,Temp->Pago);
		Temp=Temp->Next;
	}
}
void Mostrar_Ejes(struct Nodo *Front,struct Nodo *Back){
	struct Nodo *Temp=NULL;
	printf("Patente | Marca | Color | Cant Eje | Direccion | Pagar |\n");
	for(int ii=1; ii<=4 ; ii++){
		Temp= Front;
		while(Temp!=NULL){
			if(Temp->Cant_Ejes==ii)
				printf("%s | %s | %s | %d | %s a %s | %d |\n",Temp->Patente,Temp->Marca,Temp->Color,Temp->Cant_Ejes,Temp->Direccion_O,Temp->Direccion_D,Temp->Pago);
			Temp=Temp->Next;
		}
	}
}*/
