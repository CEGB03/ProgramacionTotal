/*
Una inmobiliaria brinda servicios de gestión de edificios y barrios cerrados.
Las expensas se pagan de acuerdo a los m2 de la vivienda (1 m2 = $50).
Se solicita crear un programa que permita llevar a cabo la gestión del cobro de
las expensas. Para ello se tiene la siguiente tabla (a modo de ejemplo)

		0	 	  |    	1    | 				2 			 | 			3 	       |   	4   | 	  5
Cód. de Residente | Cant. m2 | Monto de las expensas ($) | Día de pago del mes | Recargo|Monto total ($)
		1	 	  | 	70   | 				3500 		 | 			8 	       | 	0 	| 3500
		2	 	  |    150   | 				7500 		 | 			11 	       |   100  | 7600
		…
		10

		Realice las siguientes funciones

	Crear una función que permita la carga de los datos (código de cliente,
cantidad de m2, día de pago del mes). Cargar 10 residentes. Los datos del
código del residente se colocan de manera consecutiva y automática.

	Nota para agilizar el proceso de carga pueden completarse con datos
aleatorios para la cantidad de m2  (entre 30 y 500) y día de pago del mes
(entre el 1 y 31).

	Crear una función que permita calcular si tiene o no recargo según el día
de pago del mes. Si el día de pago es menor o igual a 10, el recargo es cero,
sino es $100 por día de retraso. 

	Crear una función que calcule el monto de las expensas por vivienda
(monto = cant de m2 * precio unitario por m2).

	Crear una función que calcule el monto total (monto total = monto + recargo)


		Crear un menú de opciones con las siguientes funciones

1. Mostrar la factura de un residente. Esta función debe solicitar un código de
cliente y luego mostrar su factura.

2. Mostrar la recaudación de la inmobiliaria. 

3. Mostrar el residente que más ha pagado de expensas.

4. Mostrar todas las facturas de los clientes emitidas.
(Mostrar todo el arreglo).

Para la resolución de este ejercicio usar los ejercicios utilizar arreglos y
funciones con paso por valor y paso por referencia, con retorno de valor y sin
retorno. No está permitido el uso de variables globales.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define FILAS_RESIDENTES 10
#define COLUMNAS_RESIDENTES 6
#define COSTO_METRO_CUADRADO 50

//		Funciones Obligatorias
void Muestra(int [FILAS_RESIDENTES][COLUMNAS_RESIDENTES]);
void Cargas(int [FILAS_RESIDENTES][COLUMNAS_RESIDENTES]);
void Recargo(int [FILAS_RESIDENTES][COLUMNAS_RESIDENTES]);
void Expensas(int [FILAS_RESIDENTES][COLUMNAS_RESIDENTES]);
void Monto_Total(int [FILAS_RESIDENTES][COLUMNAS_RESIDENTES]);

//		Funciones a eleccion
int Recaudacion(int [FILAS_RESIDENTES][COLUMNAS_RESIDENTES]);
void Mayor_Consumidor(int [FILAS_RESIDENTES][COLUMNAS_RESIDENTES]);
	
int main()
{
	
	int N_Residente=0, Seleccion=0, Total=0,
		Residentes[FILAS_RESIDENTES][COLUMNAS_RESIDENTES]={0};
	char Salida_Do=' ', Salida_1=' ';
	Cargas(Residentes);
	do
	{
	printf("Bienvenido al Menu de Seleccion.\nSeleccione Segun corresponda.\n\n");
	printf("1. Mostrar la factura de un residente.\n");
	printf("2. Mostrar la recaudación de la inmobiliaria.\n");
	printf("3. Mostrar el residente que más ha pagado de expensas.\n");
	printf("4. Mostrar todas las facturas de los clientes emitidas.\n");
	printf("5. Para salir\n");
	scanf("%d",&Seleccion);
	switch(Seleccion)
	{
	case 1:
		//Mostrar la factura de un residente. Esta función debe solicitar un código de cliente y luego mostrar su factura
		printf("Opcion 1\n");
		do
		{
			printf("Ingrese el numero de Residente del cual quiere visualizar la factura\n");
			scanf("%d",&N_Residente);
			for(int jj=0 ; jj<COLUMNAS_RESIDENTES ; jj++){
				printf("%d | ",Residentes[N_Residente-1][jj]);
			}
			printf("\n");
			printf("¿Desea volver a seleccionar otro Residente?\n");
			scanf(" %c",&Salida_1);
		} while(Salida_1=='s' || Salida_1=='S');
		break;
	case 2:
		//Mostrar la recaudación de la inmobiliaria
		printf("Opcion 2\n");
		Total=Recaudacion(Residentes);
		printf("Se Recaudaron $%d en total\n",Total);
		break;
	case 3:
		//Mostrar el residente que más ha pagado de expensas
		printf("Opcion 3\n");
		Mayor_Consumidor(Residentes);
		break;
	case 4:
		// Mostrar todas las facturas de los clientes emitidas. (Mostrar todo el arreglo
		printf("Opcion 4\n");
		Muestra(Residentes);
		break;
	case 5:
		printf("Adios\n");
		break;
	default:
		printf("Opcion erronea, Vuelva a intentar\n");
	}
	printf("¿Desea volver al menu de Seleccion?\n");
	scanf(" %c",&Salida_Do);
	} while(Salida_Do=='s' || Salida_Do=='S');
	
	//printf("\n");
	printf("Saliste, Adios.\n");
	system("pause");
	return 0;
}
void Muestra(int Arreglo[FILAS_RESIDENTES][COLUMNAS_RESIDENTES]){
	int ii=0, jj=0;
	for(ii=0 ; ii<FILAS_RESIDENTES ; ii++){
		for(jj=0 ; jj<COLUMNAS_RESIDENTES ; jj++){
			printf("%d | ",Arreglo[ii][jj]);
		}
		printf("\n");
	}
}
void Cargas(int Arreglo[FILAS_RESIDENTES][COLUMNAS_RESIDENTES]){
	srand(time(NULL));
	int ii=0, Contador=1;
	for(ii=0 ; ii<FILAS_RESIDENTES ; ii++){
		
		// N° Residente
		Arreglo[ii][0]=Contador;
		Contador++;
		
		//	Aleatorios
		//rand()%(n-m+1) + m 	 || numero aleatorio entre m y n
		//rand()%(500-30+1) + 30 || numero aleatorio entre 30 y 500
		//rand()%471 + 30	 	 || numero aleatorio entre 30 y 500
		Arreglo[ii][1]=rand()%471 + 30;
		//rand()%(n-m+1) + m 	 || numero aleatorio entre m y n
		//rand()%(31-1+1) + 1 	 || numero aleatorio entre 1 y 31
		//rand()%31 + 1	 	 	 || numero aleatorio entre 1 y 31
		Arreglo[ii][3]=rand()%31 + 1;
		
		//	Expensas
		Expensas(Arreglo);
		
		//	Recargo
		Recargo(Arreglo);
		
		//	Total
		Monto_Total(Arreglo);
	}
}
void Recargo(int Arreglo[FILAS_RESIDENTES][COLUMNAS_RESIDENTES]){
	int M_Recargo=100, D_Recargo=0;
	for(int ii=0 ; ii<FILAS_RESIDENTES ; ii++){
		if(Arreglo[ii][3]>10){
			D_Recargo=Arreglo[ii][3]-10;
			Arreglo[ii][4]=D_Recargo*M_Recargo;
		}
	}
}
void Expensas(int Arreglo[FILAS_RESIDENTES][COLUMNAS_RESIDENTES]){
	int P_M2=COSTO_METRO_CUADRADO;
	for(int ii=0 ; ii<FILAS_RESIDENTES ; ii++){
		//	Expensas
		// P_M2=50
		Arreglo[ii][2]=Arreglo[ii][1]*P_M2;
	}
}
void Monto_Total(int Arreglo[FILAS_RESIDENTES][COLUMNAS_RESIDENTES]){
	for(int ii=0 ; ii<FILAS_RESIDENTES ; ii++){
		//	Total
		Arreglo[ii][5]=Arreglo[ii][2]+Arreglo[ii][4];
	}
}
int Recaudacion(int Arreglo[FILAS_RESIDENTES][COLUMNAS_RESIDENTES]){
	int Reca=0;
	for(int ii=0 ; ii<FILAS_RESIDENTES ; ii++){
		Reca+=Arreglo[ii][5];
	}
	return(Reca);
}
void Mayor_Consumidor(int Arreglo[FILAS_RESIDENTES][COLUMNAS_RESIDENTES]){
	int Mayor_Consumidor_Expensas=0, Auxiliar=0;
	for(int ii=0 ; ii<=FILAS_RESIDENTES ; ii++){
		if(ii==0){
			Mayor_Consumidor_Expensas=Arreglo[ii][2];
			Auxiliar=ii;
			
		}
		else{
			if(Arreglo[ii][2]>Mayor_Consumidor_Expensas){
				Mayor_Consumidor_Expensas=Arreglo[ii][2];
				Auxiliar=ii;
			}
		}
		
	}
	for(int jj=0 ; jj<COLUMNAS_RESIDENTES ; jj++){
		printf("%d | ",Arreglo[Auxiliar][jj]);
	}
	printf("\n");
}
