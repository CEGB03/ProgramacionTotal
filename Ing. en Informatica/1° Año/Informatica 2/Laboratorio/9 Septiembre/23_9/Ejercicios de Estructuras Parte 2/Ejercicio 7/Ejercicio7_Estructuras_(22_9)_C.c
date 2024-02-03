/*
	7. Crear una estructura llamada producto con los siguientes atributos
código, nombre, stock, cantidad vendida. Crear un vector de estructuras del
tipo producto (max 10). Luego crear un menu de opciones: 

a. mostrar todos los productor
b. cargar una venta (debe buscar y restar el stock y sumar la cant vendida)
c. reponer mercadería (debe buscar y sumar el stock)
d. ordenar por productos mas vendidos
e. ordenar por productor con menor stock
Utilice funciones.
*/
#include <stdio.h>
#include <stdlib.h>
#define Tam_Struct 2

struct Producto{
	int Code;
	char Name[15];
	int Stock;
	int Sales;
};
void Menu();
void Mostrar(struct Producto *P_Products);
void Cargar(struct Producto *P_Products);
void Cargar_Venta(struct Producto *P_Products);
void Reponer(struct Producto *P_Products);
void Ordenar(struct Producto *P_Products, char Op);
int main(){
	struct Producto Products[Tam_Struct];
	struct Producto *P_Products=Products;
	char Opcion=' ';
	int Salida=0;
	Cargar(P_Products);
	printf("\n");
	do{
		Menu();
		scanf(" %c",&Opcion);
		switch(Opcion){
		case 'a':
		case 'A':
			Mostrar(P_Products);
			break;
		case 'b':
		case 'B':
			Cargar_Venta(P_Products);
			break;
		case 'c':
		case 'C':
			Reponer(P_Products);
			break;
		case 'd':
		case 'D':
			Ordenar(P_Products, Opcion);
			break;
		case 'e':
		case 'E':
			Ordenar(P_Products, Opcion);
			break;
		case 'f':
		case 'F':
			printf("Adios\n");
			Salida=1;
			break;
		}
	} while(Salida !=1);
	return 0;
}
void Menu(){
	printf("Menu de Opciones. Seleccione segun desee.\n");
	printf("a. mostrar todos los productor\n");
	printf("b. cargar una venta (debe buscar y restar el stock y sumar la cant vendida)\n");
	printf("c. reponer mercadería (debe buscar y sumar el stock)\n");
	printf("d. ordenar por productos mas vendidos\n");
	printf("e. ordenar por productor con menor stock\n");
	printf("f. salir\n");
}
void Mostrar(struct Producto *P_Products){
	printf("\n");
	for(int ii=0 ; ii<Tam_Struct ; ii++){
		printf("El codigo del producto es el siguiente: %d\n",P_Products[ii].Code);
		printf("El Nombre del producto es el siguiente: %s\n",P_Products[ii].Name);
		printf("El Stock disponible del producto es el siguiente: %d\n",P_Products[ii].Stock);
		printf("La cantidad de producto vendidios es de: %d\n",P_Products[ii].Sales);
		printf("\n");
	}
}
void Cargar(struct Producto *P_Products){
	for(int ii=0 ; ii<Tam_Struct ; ii++){
		printf("Introduzca el codigo del producto: ");
		scanf("%d",&P_Products[ii].Code);
		printf("Introduzca el Nombre del producto: ");
		scanf("%s",&P_Products[ii].Name);
		printf("Introduzca el Stock disponible del producto: ");
		scanf("%d",&P_Products[ii].Stock);
		printf("Introduzca la cantidad de productos vendidios: ");
		scanf("%d",&P_Products[ii].Sales);
		printf("\n");
	}
}
void Cargar_Venta(struct Producto *P_Products){
	int Cod=0, *P_Cod=&Cod,
		Venta=0, Control=0;
	printf("Indique el Codigo de la Venta que realizo: ");
	scanf("%d",&Cod);
	for(int ii=0 ; ii<Tam_Struct ; ii++){
		if(P_Products[ii].Code == (*P_Cod)){
			printf("Codigo coinicdente\n");
			printf("Indique cuantos %s ha vendido: ",P_Products[ii].Name);
			scanf("%d",&Venta);
			P_Products[ii].Stock-=Venta;
			P_Products[ii].Sales+=Venta;
			printf("Venta Cargada\n");
			Control++;
		}
		else{
			if(Control==0){
				printf("Codigo no coinicdente\n");
			}
		}
	}
}
void Reponer(struct Producto *P_Products){
	int Cod=0, *P_Cod=&Cod,
		Repo=0, Control=0;
	printf("Indique el Codigo al que va a Reponer: ");
	scanf("%d",&Cod);
	for(int ii=0 ; ii<Tam_Struct ; ii++){
		if(P_Products[ii].Code == (*P_Cod)){
			printf("Codigo coinicdente\n");
			printf("Indique cuantos %s ha vendido: ",P_Products[ii].Name);
			scanf("%d",&Repo);
			P_Products[ii].Stock+=Repo;
			printf("Reposicion finalizada\n");
			Control++;
		}
		else{
			if(Control==0){
				printf("Codigo no coinicdente\n");
			}
		}
	}
}
void Ordenar(struct Producto *P_Products, char Op){
	int jj=0;
	struct Producto Aux;

	switch(Op){
	case 'd':
	case 'D':
		for(int ii=Tam_Struct ; ii>=1 ; ii--){
			Aux=P_Products[ii];
			jj=ii-1;
			while((P_Products[jj].Sales<Aux.Sales)&&(jj>=0)){
				P_Products[jj+1]=P_Products[jj];
				jj-=1;
				P_Products[jj+1]=Aux;
			}
		}
		printf("Ordenaminedo finalizado\n");
		break;
	case 'e':
	case 'E':
		for(int ii=1 ; ii<Tam_Struct ; ii++){
			Aux=P_Products[ii];
			jj=ii-1;
			while((P_Products[jj].Stock>Aux.Stock)&&(jj>=0)){
				P_Products[jj+1]=P_Products[jj];
				jj--;
				P_Products[jj+1]=Aux;
			}
		}
		printf("Ordenaminedo finalizado\n");
		break;
	}
}
