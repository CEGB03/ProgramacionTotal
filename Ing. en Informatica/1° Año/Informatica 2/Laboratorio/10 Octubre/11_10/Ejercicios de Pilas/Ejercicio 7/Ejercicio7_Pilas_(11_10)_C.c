/*
	7. Desarrollo un programa que cree una pila de vehiculos que pasan por un
peaje, en la cual se deben registrar patente, marca, color, cantidad de ejes,
precio, direccion. El precio es segun la cantidad de ejes.
(1 eje = $100, 2 ejes = $150, 3 ejes = $200 y 4 ejes o mas $300).
La direccion es a la que se dirige el vehiculo, en este caso puede ser de
Norte a Sur o Sur a Norte.
Luego, arme un menu de opciones que muestre lo siguiente: 

	Agregar un vehiculo a la pila
	Borrar el último nodo de la pila.
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
	char Direccion_O;
	char Direccion_D;
	int Pago;
	struct Nodo *Next;
};
void Menu();
void Agregar(struct Nodo **Superior);
void Eliminar(struct Nodo **Superior);
void Mostrar(struct Nodo *Superior);
void Mostrar_Dir(struct Nodo *Superior);
void Mostrar_Ejes(struct Nodo *Superior);
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
			Mostrar_Dir(Superior);
			printf("\n");
			break;
		case 5:
			Mostrar_Ejes(Superior);
			printf("\n");
			break;
		}
		
	}while(Opcion!=0);
	system("pause");
	return 0;
}
void Menu(){
	printf("Seleccione una opcion\n");
	printf("1. Agregar un nuevo veiculo.\n");
	printf("2. Borrar el primer nodo de la pila.\n");
	printf("3. Mostrar todos los vehiculos.\n");
	printf("4. Mostrar los vehiculos por dirección.\n");
	printf("5. Mostrar los vehiculos por ejes.\n");
	printf("0. Salir\n");
}
void Agregar(struct Nodo **Superior){
	struct Nodo *Nuevo_Nodo=NULL;
	int Direccion=0;
	Nuevo_Nodo=(struct Nodo *)malloc(sizeof(struct Nodo));
	if(Nuevo_Nodo==NULL){
		printf("No hay memoria disponible\n");
		exit(1);
	}
	else{
		printf("Ingrese la patente del veiculo(Pate de letras).\n");
		scanf("%s",&Nuevo_Nodo->Patent.Paten_Letras);
		printf("Ingrese la patente del veiculo(Pate de numeros).\n");
		scanf("%d",&Nuevo_Nodo->Patent.Paten_Numero);
		printf("Ingrese la marca del veiculo.\n");
		scanf("%s",&Nuevo_Nodo->Marca);
		printf("Ingrese el color del veiculo.\n");
		scanf("%s",&Nuevo_Nodo->Color);
		printf("Ingrese la cantidad de ejes del veiculo.\n");
		scanf("%d",&Nuevo_Nodo->Cant_Ejes);
		if(Nuevo_Nodo->Cant_Ejes==1)
			Nuevo_Nodo->Pago=Precio_1_Eje;
		if(Nuevo_Nodo->Cant_Ejes==2)
			Nuevo_Nodo->Pago=Precio_2_Eje;
		if(Nuevo_Nodo->Cant_Ejes==3)
			Nuevo_Nodo->Pago=Precio_3_Eje;
		if(Nuevo_Nodo->Cant_Ejes==4)
			Nuevo_Nodo->Pago=Precio_4_Eje;
		printf("Ingrese la direccion de origen\n1. Va del Norte al Sur\n2. Va del Sur al Norte\n");
		scanf("%d",&Direccion);
		switch(Direccion){
		case 1:
			Nuevo_Nodo->Direccion_O='N';
			Nuevo_Nodo->Direccion_D='S';
			break;
		case 2:
			Nuevo_Nodo->Direccion_O='S';
			Nuevo_Nodo->Direccion_D='N';
			break;
		}
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
	printf("Patente | Marca | Color | Cant Eje | Direccion | Pagar |\n");
	while(Temp!=NULL){
		if(Temp->Direccion_O=='S')
			printf("%s %d | %s | %s | %d | %cur a %corte | %d |\n",Temp->Patent.Paten_Letras,Temp->Patent.Paten_Numero,Temp->Marca,Temp->Color,Temp->Cant_Ejes,Temp->Direccion_O,Temp->Direccion_D,Temp->Pago);
		if(Temp->Direccion_O=='N')
			printf("%s %d | %s | %s | %d | %corte a %cur | %d |\n",Temp->Patent.Paten_Letras,Temp->Patent.Paten_Numero,Temp->Marca,Temp->Color,Temp->Cant_Ejes,Temp->Direccion_O,Temp->Direccion_D,Temp->Pago);
		Temp=Temp->Next;
	}
}
void Mostrar_Dir(struct Nodo *Superior){
	struct Nodo *Temp=NULL;
	printf("Estos son los veiculos con direccion Sur a Norte que estan en la pila\n");
	printf("Patente | Marca | Color | Cant Eje | Direccion | Pagar |\n");
	Temp= Superior;
	while(Temp!=NULL){
		if(Temp->Direccion_O=='S')
			printf("%s %d | %s | %s | %d | %cur a %corte | %d |\n",Temp->Patent.Paten_Letras,Temp->Patent.Paten_Numero,Temp->Marca,Temp->Color,Temp->Cant_Ejes,Temp->Direccion_O,Temp->Direccion_D,Temp->Pago);
		Temp=Temp->Next;
	}
	
	printf("Estos son los veiculos con direccion Norte a Sur que estan en la pila\n");
	printf("Patente | Marca | Color | Cant Eje | Direccion | Pagar |\n");
	Temp= Superior;
	while(Temp!=NULL){
		if(Temp->Direccion_O=='N')
			printf("%s %d | %s | %s | %d | %corte a %cur | %d |\n",Temp->Patent.Paten_Letras,Temp->Patent.Paten_Numero,Temp->Marca,Temp->Color,Temp->Cant_Ejes,Temp->Direccion_O,Temp->Direccion_D,Temp->Pago);
		Temp=Temp->Next;
	}
}
void Mostrar_Ejes(struct Nodo *Superior){
	struct Nodo *Temp=NULL;
	for(int ii=1; ii<=4 ; ii++){
		printf("Estos son los veiculos con %d ejes que estan en la pila\n",ii);
		printf("Patente | Marca | Color | Cant Eje | Direccion | Pagar |\n");
		Temp= Superior;
		while(Temp!=NULL){
			if(Temp->Cant_Ejes==ii)
				printf("%s %d | %s | %s | %d | %c a %c | %d |\n",Temp->Patent.Paten_Letras,Temp->Patent.Paten_Numero,Temp->Marca,Temp->Color,Temp->Cant_Ejes,Temp->Direccion_O,Temp->Direccion_D,Temp->Pago);
			Temp=Temp->Next;
		}
	}
}
