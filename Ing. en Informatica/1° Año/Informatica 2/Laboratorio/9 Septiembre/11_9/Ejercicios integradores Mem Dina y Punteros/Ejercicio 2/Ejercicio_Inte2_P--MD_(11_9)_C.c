/*
	2. Escribir un programa utilizando punteros y funciones en la cual se desea
cargar en un vector con las ventas diarias de un negocio, 3 como máximo.
La carga finaliza cuando el monto igual a cero.  Crear una estructura Factura,
en donde tenga los siguientes atributos: numero, fecha y monto total.
Además, se pide:
	- Cantidad de ventas cargadas.
	- Calcular la recaudación del día de manera recursiva.
*/
#include <stdio.h>
#include <stdlib.h>
#define Cant_Max 3

struct Factura{
	int Numero;
	struct Fecha Dia;
	int Monto_Total;
};
struct Fecha{
	int Dia;
	int Mes;
	int Año;
};

void Cant_Carg();
int main(){
	int  *Alma_Mont[Cant_Max]={0};
	int  Venta=0, Contador=0;
	printf("Usted esta a punto de cargar el monto recaudados por dias.\nUsted podra salir ingresando un 0 o cargando 3 dias de mnonto");
	do{
		for(int ii=0 ; ii<Cant_Max ; ii++){
			printf("Cargue la Venta del dia N°%d: ",Contador+1);
			scanf("%d",&Venta);
			Arreglo[Contador]=Venta;
			Contador++;
			if(
		}
	} while(Venta!=0 && Contador<Cant_Max);
	
	printf("Saliste\n");
	system("pause");
	return 0;
}
void Cant_Carg(int Arreglo[Cant_Max]){};
