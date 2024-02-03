/*
	3. Programe un sistema de facturación, donde emita las facturas de un
		negocio.
	Para ello primero deberá cargar los siguientes datos por cada articulo
		(código, precio unitario y cantidad) en un arreglo (máximo 5 filas)
	Codigo	|Precio Unitario	|Cantidad	|Subtotal
	1		|4					|2			|8
	2		|2					|1			|2
	3		|1					|3			|3

Una vez, cargado todos los artículos en la factura,el programa calculará cada
uno de los subtotales y el total del montoa abonar por el cliente.
Luego, el sistema solicita que se ingrese la forma de pago
(efectivo, débito o tarjeta). Si es efectivo y este no es pago exacto,
el programa deberá calcular el vuelto, y en el caso de la tarjeta de crédito
calcular y sumar el recargo del 5%. Finalmente mostrar la factura.
*/
#include <stdio.h>
#include <stdlib.h>
#define FILAS 5
#define COLUMNAS 5

int main()
{
	int ArregloFC3[FILAS][COLUMNAS], Codigo=0, Precio_Unitario=0, Cantidad=0,
		Pago=0, Pagar=0, Vuelto=0, Contador=0;
	//Precio Unitario para cada Codigo
	int Codigo_1=4, Codigo_2=2, Codigo_3=1;
	double Sub_Total=0;
	char Salida= ' ';
	do
	{
		printf("Carga el primer datos del articulo (Codigo): ");
		scanf("%d",&Codigo);
		switch(Codigo)
		{
		case 1:
			Precio_Unitario=Codigo_1;
			printf("Precio Unitario de este articulo es %d\n",Precio_Unitario);
			printf("¿Cuantas unidades va a llevar?\n");
			scanf("%d",&Cantidad);
			Precio_Unitario*=Cantidad;
			Sub_Total+=Precio_Unitario;
			printf("El Sub Total a pagar es: %lf\n",Sub_Total);
			break;
		case 2:
			Precio_Unitario=Codigo_2;
			printf("Precio Unitario de este articulo es %d\n",Precio_Unitario);
			printf("¿Cuantas unidades va a llevar?\n");
			scanf("%d",&Cantidad);
			Sub_Total+=(Precio_Unitario*Cantidad);
			printf("El Sub Total a pagar es: %lf\n",Sub_Total);
			break;
		case 3:
			Precio_Unitario=Codigo_3;
			printf("Precio Unitario de este articulo es %d\n",Precio_Unitario);
			printf("¿Cuantas unidades va a llevar?\n");
			scanf("%d",&Cantidad);
			Sub_Total+=(Precio_Unitario*Cantidad);
			printf("El Sub Total a pagar es: %lf\n",Sub_Total);
			break;
		default:
			printf("Usted no ha ingresado un Codigo valido.\n Vuelva a empezar\n\n");
			break;
		}
		printf("¿Cargo todos los articulos para Salir? S/N :");
		scanf(" %c",&Salida);
		Contador++;
	} while((Salida=='n'||Salida=='N')&&Contador<5);
	
	
	printf("A continuacion podra ver el menu de opciones de Pago\n");
	printf("Ingrese 1 si va a pagar con Efectivo.\n");
	printf("Ingrese 2 si va a pagar con Tarjeta.(Al pagar de esta forma se le dara un recargo de 5%c)\n",37);
	printf("Ingrese 3 si va a pagar con Debito\n");
	scanf("%d",&Pago);
	switch(Pago)
	{
	case 1://	Efectivo
		printf("¿Con cuanto dinero va a pagar?\n");
		scanf(" %d",&Pagar);
		if(Pagar>Sub_Total)
		{
			Vuelto=Pagar-Sub_Total;
			printf("Su Vuelto sera de $%d",Vuelto);
		}
		else
		{
			if(Pagar==Sub_Total)
				printf("Su Pago fue excato\nAdios");
			if(Pagar<Sub_Total)
				printf("Su pago no alcansa. Vuelva a empezar. \nAdios");
		}
		break;
	case 2://	Tarjeta
		Sub_Total*=1.05;
		printf("Su Sub Total con el recargo del 5%c de recargo sera de %lf",37,Sub_Total);
		break;
	case 3://	Debito
		printf("Su Sub Total es de %lf",Sub_Total);
		break;
	}
	printf("\n");
	system("pause");
	return 0;
}

