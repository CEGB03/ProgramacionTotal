#include <stdio.h>
#include <stdlib.h>
#define ARREGLO1D 5
#define ARREGLO1D_SALIDA 6
void Sistema_Facturacion(){
	int Codigo=0, Precio_Unitario=0, Cantidad=0, Contador=0, ii=0, Pago=0, 
		Elementos=0,
		//Precio Unitario para cada Codigo
		Codigo_1=4, Codigo_2=2, Codigo_3=1;
	float ArregloEje5Fun[ARREGLO1D]={0,0,0,0,0}, Pagar=0, Vuelto=0, Total=0;
	char Salida= ' ';
	//	Parte de Ingreso de datos
	for(ii=0 ; ii<ARREGLO1D ; ii++){
		do{
			printf("Carga el primer datos del articulo (Codigo): ");
			scanf("%d",&Codigo);
			switch(Codigo){
			case 1:
				Precio_Unitario=Codigo_1;
				printf("Precio Unitario de este articulo es %d\n",Precio_Unitario);
				printf("¿Cuantas unidades va a llevar?\n");
				scanf("%d",&Cantidad);
				ArregloEje5Fun[ii]=Precio_Unitario*Cantidad;
				printf("El Sub Total a pagar es: %f\n",ArregloEje5Fun[ii]);
				break;
			case 2:
				Precio_Unitario=Codigo_2;
				printf("Precio Unitario de este articulo es %d\n",Precio_Unitario);
				printf("¿Cuantas unidades va a llevar?\n");
				scanf("%d",&Cantidad);
				ArregloEje5Fun[ii]=Precio_Unitario*Cantidad;
				printf("El Sub Total a pagar es: %f\n",ArregloEje5Fun[ii]);
				break;
			case 3:
				Precio_Unitario=Codigo_3;
				printf("Precio Unitario de este articulo es %d\n",Precio_Unitario);
				printf("¿Cuantas unidades va a llevar?\n");
				scanf("%d",&Cantidad);
				ArregloEje5Fun[ii]=Precio_Unitario*Cantidad;
				printf("El Sub Total a pagar es: %f\n",ArregloEje5Fun[ii]);
				break;
			default:
				printf("Usted no ha ingresado un Codigo valido.\n Vuelva a empezar\n\n");
				break;
			}
			printf("¿Cargo todos los articulos para Salir? S/N: ");
			scanf(" %c",&Salida);
			Contador++;
			Elementos++;
			if(Salida=='s' || Salida=='S'){
				Contador=6;
				ii=ARREGLO1D_SALIDA;
			}
		} while((Salida=='n' || Salida=='N') && Contador<5);
	}
	
	//	Parte de muestra de ticket
	printf("\n");
	for(int ii=0 ; ii<Elementos ; ii++){
		printf("El articulo %d de la lista tiene un sub total de %f\n",ii,ArregloEje5Fun[ii]);
		Total+=ArregloEje5Fun[ii];
	}
	printf("\n");
	printf("El Total a pagar de su Factura es de %f\n",Total);
	
	//	Parte de Pago
	printf("A continuacion podra ver el menu de opciones de Pago\n");
	printf("Ingrese 1 si va a pagar con Efectivo.\n");
	printf("Ingrese 2 si va a pagar con Tarjeta.(Al pagar de esta forma se le dara un recargo de 5%c)\n",37);
	printf("Ingrese 3 si va a pagar con Debito\n");
	scanf("%d",&Pago);
	printf("\n");
	switch(Pago){
	case 1://	Efectivo
		printf("¿Con cuanto dinero va a pagar?\n");
		scanf(" %f",&Pagar);
		if(Pagar>Total)
		{
			Vuelto=Pagar-Total;
			printf("Su Vuelto sera de $%f",Vuelto);
		}
		else
		{
			if(Pagar==Total)
				printf("Su Pago fue excato\nAdios");
			if(Pagar<Total)
				printf("Su pago no alcansa. Vuelva a empezar. \nAdios");
		}
		break;
	case 2://	Tarjeta
		Total*=1.05;
		printf("Su Total con el recargo del 5%c de recargo sera de %f",37,Total);
		break;
	case 3://	Debito
		printf("Su Total es de a pagar es %f",Total);
		break;
	}
}
int main()
{
	char Empiezo=0;
	printf("¿Esta list%c para empezar? S/N \n",64);
	scanf(" %c",&Empiezo);
	switch(Empiezo)
	{
	case 's':
	case 'S':
		Sistema_Facturacion();
		break;
	case 'N':
	case 'n':
		printf("\nAdios\n");
		break;
	}
	printf("\n\n");
	system("pause");
	return 0;
}
