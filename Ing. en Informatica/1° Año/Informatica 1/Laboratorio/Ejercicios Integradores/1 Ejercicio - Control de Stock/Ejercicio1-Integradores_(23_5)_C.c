/*
Funciones a hacer:Luego deberán ejecutarse las siguientes funciones 

- estaDisponible(), es una función que consulta si hay disponibilidad de ese 
	artículo en el arreglo "stock", si es así deberá restar la 
	cantidad (la resta no puede dar número negativo), caso contrario deberá 
	informar la falta de ese artículo.

- buscarPrecio(), es una función que busca el precio unitario de un artículo 
	en el arreglo "stock" por codigo de articulo. 

- calcularSubtotal(), es una función que calcula los subtotales de cada 
	artículo, es decir cantidadprecio_unitario en en arreglo factura.

- calcularTotal(), es una función que suma todos los 
	subtotales del arreglo factura. 

- mostrarFactura(), es una función que muestra la factura a pagar por el 
	cliente. Luego se pregunta con cuánto va abonar y se calcula su 
	vuelto si es necesario. 
--------------------------------------------------------------------------------
Arreglo base:

|Código	    |Precio Unitario	|Cantidad
|1		    |10	        		|50
|2		    |30	        		|30
|3		    |1	        		|10
|4		    |100				|25
|5		    |20	        		|0
|6		    |50.5	        	|15
|7		    |5.5	        	|5
--------------------------------------------------------------------------------
Arreglo de Factura:

FACTURA N.º 1
|Código	|Cantidad	|Precio Unitario ($)	|Subtotal ($)
|1		|2			|10						|20
|7		|1			|5.5					|5.5
|3		|3			|1						|3
--------------------------------------------------------------------------------
Listado de Facturas:

|N° Factura	|Total Factura($)
|1			|28.5
|0			|0
|0			|0
--------------------------------------------------------------------------------
y hacer un cierre de caja q sume todos los totales de las facturas.
--------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#define FILAS_AB 7
#define COLUMNAS_AB 3

void Imprimir_Arreglo2D(int Arreglo[FILAS_AB][COLUMNAS_AB]){//imprime el Arreglo
	for(int ii=0 ; ii<FILAS_AB ; ii++){
		for(int jj=0 ; jj<COLUMNAS_AB ; jj++){
			printf(" %d |",Arreglo[ii][jj]);
		}
		printf("\n");
	}
}
//
void Resta_en_Arreglo(int Arreglo[FILAS_AB][COLUMNAS_AB]){//Primer intento de la funcionalidad del ejercicio
	int Producto=0/*, Contador=0*/, Compra=0;
	float Suma=0;
	char Salida=' ';
	do{
		printf("Ingrese el producto que va a llevar.\n");
		printf("1. para el codigo 1\n");
		printf("2. para el codigo 2\n");
		printf("3. para el codigo 3\n");
		printf("4. para el codigo 4\n");
		printf("5. para el codigo 5\n");
		printf("6. para el codigo 6\n");
		printf("7. para el codigo 7\n");
		scanf("%d",&Producto);
		printf("¿Cuantos elementos va a llevar?\n");
		scanf("%d",&Compra);
		//printf("\n");
		if(Producto>0 || Producto<=7){
			if(Producto==1){
				if(Arreglo[0][2]>0 && Compra<=Arreglo[0][2]){
					Arreglo[0][2]-=Compra;
					Suma=Compra*Arreglo[0][1];
					printf("En codigo 1 quedan %d\n",Arreglo[0][2]);
				}
				else{
					printf("No hay la cantidad necesaria de elementos para hacer la Compra, solo quedan: %d\n",Arreglo[0][2]);
				}
			}
			if(Producto==2){
				if(Arreglo[1][2]>0 && Compra<=Arreglo[1][2]){
					Arreglo[1][2]-=Compra;
					Suma=Compra*Arreglo[1][1];
					printf("En codigo 2 quedan %d\n",Arreglo[1][2]);
				}
				else{
					printf("No hay la cantidad necesaria de elementos para hacer la Compra, solo quedan: %d\n",Arreglo[1][2]);
				}
			}
			if(Producto==3){
				if(Arreglo[2][2]>0 && Compra<=Arreglo[2][2]){
					Arreglo[2][2]-=Compra;
					Suma=Compra*Arreglo[2][1];
					printf("En codigo 3 quedan %d\n",Arreglo[2][2]);
				}
				else{
					printf("No hay la cantidad necesaria de elementos para hacer la Compra, solo quedan: %d\n",Arreglo[2][2]);
				}
			}
			if(Producto==4){
				if(Arreglo[3][2]>0 && Compra<=Arreglo[3][2]){
					Arreglo[3][2]-=Compra;
					Suma=Compra*Arreglo[3][1];
					printf("En codigo 4 quedan %d\n",Arreglo[3][2]);
				}
				else{
					printf("No hay la cantidad necesaria de elementos para hacer la Compra, solo quedan: %d\n",Arreglo[3][2]);
				}
			}
			if(Producto==5){
				if(Arreglo[4][2]>0 && Compra<=Arreglo[4][2]){
					Arreglo[4][2]-=Compra;
					Suma=Compra*Arreglo[4][1];
					printf("En codigo 5 quedan %d\n",Arreglo[4][2]);
				}
				else{
					printf("No hay la cantidad necesaria de elementos para hacer la Compra, solo quedan: %d\n",Arreglo[4][2]);
				}
			}
			if(Producto==6){
				if(Arreglo[5][2]>0 && Compra<=Arreglo[5][2]){
					Arreglo[5][2]-=Compra;
					Suma=Compra*Arreglo[5][1];
					printf("En codigo 6 quedan %d\n",Arreglo[5][2]);
				}
				else{
					printf("No hay la cantidad necesaria de elementos para hacer la Compra, solo quedan: %d\n",Arreglo[5][2]);
				}
			}
			if(Producto==7){
				if(Arreglo[6][2]>0 && Compra<=Arreglo[6][2]){
					Arreglo[6][2]-=Compra;
					Suma=Compra*Arreglo[6][1];
					printf("En codigo 7 quedan %d\n",Arreglo[6][2]);
				}
				else{
					printf("No hay la cantidad necesaria de elementos para hacer la Compra, solo quedan: %d\n",Arreglo[6][2]);
				}
			}
		}
		printf("¿Desea continuar comprando? S/N\n");
		scanf(" %c",&Salida);
	}while(Salida=='S'||Salida=='s');
	printf("El primer sub total es de: %f\n",Suma);
}
//
void BuscarPrecio(int Arreglo[FILAS_AB][COLUMNAS_AB], int Producto){//busca el precio de cada elemento
	switch(Producto){
	case 1:
		printf("El precio que tiene cada elemento de este codigo es de $%d\n",Arreglo[0][1]);
		break;
	case 2:
		printf("El precio que tiene cada elemento de este codigo es de $%d\n",Arreglo[1][1]);
		break;
	case 3:
		printf("El precio que tiene cada elemento de este codigo es de $%d\n",Arreglo[2][1]); 
		break;
	case 4:
		printf("El precio que tiene cada elemento de este codigo es de $%d\n",Arreglo[3][1]);
		break;
	case 5:
		printf("El precio que tiene cada elemento de este codigo es de $%d\n",Arreglo[4][1]);
		break;
	case 6:
		printf("El precio que tiene cada elemento de este codigo es de $%d\n",Arreglo[5][1]);
		break;
	case 7:
		printf("El precio que tiene cada elemento de este codigo es de $%d\n",Arreglo[6][1]);
		break;
	}
}
//
float CalcularSubtotal(int Producto, int Arreglo[FILAS_AB][COLUMNAS_AB], int Compra){//Calcula es sub total de las compras
	float Suma=0, Total=0;
	switch(Producto){
	case 1:
		Suma=Compra*Arreglo[0][1];
		Total+=Suma;
		printf("El sub total de esta compra es de %f\n",Suma);
		return(Suma);
		break;
	case 2:
		Suma=Compra*Arreglo[1][1];
		Total+=Suma;
		printf("El sub total de esta compra es de %f\n",Suma);
		return(Suma);
		break;
	case 3:
		Suma=Compra*Arreglo[2][1];
		Total+=Suma;
		printf("El sub total de esta compra es de %f\n",Suma);
		return(Suma);
		break;
	case 4:
		Suma=Compra*Arreglo[3][1];
		Total+=Suma;
		printf("El sub total de esta compra es de %f\n",Suma);
		return(Suma);
		break;
	case 5:
		Suma=Compra*Arreglo[4][1];
		Total+=Suma;
		printf("El sub total de esta compra es de %f\n",Suma);
		return(Suma);
		break;
	case 6:
		Suma=Compra*Arreglo[5][1];
		Total+=Suma;
		printf("El sub total de esta compra es de %f\n",Suma);
		return(Suma);
		break;
	case 7:
		Suma=Compra*Arreglo[6][1];
		Total+=Suma;
		printf("El sub total de esta compra es de %f\n",Suma);
		return(Suma);
		break;
	default:
		return(Total);
		break;
	}
}
//
void CalcularTotal(){//Calcular el total a partir del sub total
	float Total=0;
	int Producto=0, Arreglo[FILAS_AB][COLUMNAS_AB], Compra=0;
	/*for(int ii=0 ; ii<Contador ; ii++){
		Total+=Arreglo[ii][1];
	}
	printf("El total de su compra es de $%d\n",Total);*/
	Total=CalcularSubtotal(Producto, Arreglo, Compra);
	printf("El total de su compra es de $%f\n",Total);
}
//
void EstaDisponible(int Arreglo[FILAS_AB][COLUMNAS_AB]){//revisa si hay pra comprar o no
	int Producto=0, Compra=0, Contador=0;
	char Salida=' ';
	do{
		printf("Ingrese el producto que va a llevar.\n");
		printf("1. para el codigo 1\n");
		printf("2. para el codigo 2\n");
		printf("3. para el codigo 3\n");
		printf("4. para el codigo 4\n");
		printf("5. para el codigo 5\n");
		printf("6. para el codigo 6\n");
		printf("7. para el codigo 7\n");
		scanf("%d",&Producto);
		if((Producto<=7) && (Producto>0)){
			BuscarPrecio(Arreglo, Producto);
			printf("¿Cuantos elementos va a llevar?\n");
			scanf("%d",&Compra);
			//printf("\n");
		}
		switch(Producto){
		case 1:
			if(Arreglo[0][2]>0 && Compra<=Arreglo[0][2]){
				CalcularSubtotal(Producto, Arreglo, Compra);
				Arreglo[0][2]-=Compra;
				/*Arreglo_Pepito[ii][2]=CalcularSubtotal(Arreglo, Producto, Compra);
				Arreglo_Putito[ii][4]
					ii=0{
					Producto//codigo
				};
					ii=1{
					Compra//cantidad
				};
					ii=2{
					Arreglo[0][1];//precio unitario
				};
					ii=3{
					SubTotal//SubTotal
				};
				Arreglo[0][2]-=Compra;
				*/
				printf("En codigo 1 quedan %d\n",Arreglo[0][2]);
			}
			else{
				printf("No hay la cantidad necesaria de elementos para hacer la Compra, solo quedan: %d\n",Arreglo[0][2]);
			}
			break;
		case 2:
			if(Arreglo[1][2]>0 && Compra<=Arreglo[1][2]){
				CalcularSubtotal(Producto, Arreglo, Compra);
				Arreglo[1][2]-=Compra;
				printf("En codigo 2 quedan %d\n",Arreglo[1][2]);
			}
			else{
				printf("No hay la cantidad necesaria de elementos para hacer la Compra, solo quedan: %d\n",Arreglo[1][2]);
			}
			break;
		case 3:
			if(Arreglo[2][2]>0 && Compra<=Arreglo[2][2]){
				CalcularSubtotal(Producto, Arreglo, Compra);
				Arreglo[2][2]-=Compra;
				printf("En codigo 3 quedan %d\n",Arreglo[2][2]);
			}
			else{
				printf("No hay la cantidad necesaria de elementos para hacer la Compra, solo quedan: %d\n",Arreglo[2][2]);
			}
			break;
		case 4:
			if(Arreglo[3][2]>0 && Compra<=Arreglo[3][2]){
				CalcularSubtotal(Producto, Arreglo, Compra);
				Arreglo[3][2]-=Compra;
				printf("En codigo 4 quedan %d\n",Arreglo[3][2]);
			}
			else{
				printf("No hay la cantidad necesaria de elementos para hacer la Compra, solo quedan: %d\n",Arreglo[3][2]);
			}
			break;
		case 5:
			if(Arreglo[4][2]>0 && Compra<=Arreglo[4][2]){
				CalcularSubtotal(Producto, Arreglo, Compra);
				Arreglo[4][2]-=Compra;
				printf("En codigo 5 quedan %d\n",Arreglo[4][2]);
				}
				else{
					printf("No hay la cantidad necesaria de elementos para hacer la Compra, solo quedan: %d\n",Arreglo[4][2]);
				}
				break;
		case 6:
			if(Arreglo[5][2]>0 && Compra<=Arreglo[5][2]){
				CalcularSubtotal(Producto, Arreglo, Compra);
				Arreglo[5][2]-=Compra;
				printf("En codigo 6 quedan %d\n",Arreglo[5][2]);
			}
			else{
				printf("No hay la cantidad necesaria de elementos para hacer la Compra, solo quedan: %d\n",Arreglo[5][2]);
			}
			break;
		case 7:
			if(Arreglo[6][2]>0 && Compra<=Arreglo[6][2]){
				CalcularSubtotal(Producto, Arreglo, Compra);
				Arreglo[6][2]-=Compra;
				printf("En codigo 7 quedan %d\n",Arreglo[6][2]);
			}
			else{
				printf("No hay la cantidad necesaria de elementos para hacer la Compra, solo quedan: %d\n",Arreglo[6][2]);
			}
			break;
		default:
			printf("Producto no identificado, vuelva a intentar.\n");
			break;
		}
		printf("¿Desea continuar comprando? S/N\n");
		scanf(" %c",&Salida);
		Contador++;
		CalcularTotal();
	}while(Salida=='S'||Salida=='s');
}
//

	/*
void MostrarFactura(){
	
}
void Listado_de_Facturas(){
	
}
*/
	
void Arreglo_Stock(){
	int Arreglo_Stock[FILAS_AB][COLUMNAS_AB]={{1,10,50}, {2,30,30}, {3,1,10}, {4,100,25}, {5,20,0}, {6,50.5,15}, {7,5.5,5},};
	Imprimir_Arreglo2D(Arreglo_Stock);
	EstaDisponible(Arreglo_Stock);
	Imprimir_Arreglo2D(Arreglo_Stock);
}
int main()
{
	Arreglo_Stock();
	system("pause");
	return 0;
}

