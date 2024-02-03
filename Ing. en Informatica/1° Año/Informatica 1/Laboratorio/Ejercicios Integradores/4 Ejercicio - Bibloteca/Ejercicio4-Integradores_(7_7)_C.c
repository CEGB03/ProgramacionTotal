/*
En una biblioteca se desean gestionar los préstamos de libros, para ello el
encargado posee una lista con todos los libros y los siguientes atributos: 
código, cantidad total, cantidad prestado y cantidad disponible.

|Código	|Cant. Total	|Cant. Prestado	|Cant. Disponible
|1		|100			|	0			|	100
|2		|200			|	0			|	200
|3		|30				|	0			|	30

Se solicita que el programa realice las siguientes funciones:

Cargar los datos de los libros en un arreglo de 10 x 4 de manera automática 
(uso de números aleatorios). La columna 0 es un código que se va aumentando en 
1 en 1, y para las columnas 1 y 3 se debe obtener un número aleatorio entre el
5 y 10. Y la columna 2 colocar 0 por defecto. (Como se muestra en la tabla
anterior)

Mostrar los datos registrados en el arreglo.

Prestar libros. El cual debe mostrar la lista de libros disponibles y solicitar
al usuario el código del libro y la cantidad de libros a pedir. Luego el sistema
debe controlar que haya la cantidad disponible que se solicita, sino deberá
mostrar un mensaje "No hay suficientes libros del código x". Recordar agregar
la comprobación de libros disponibles, no se pueden prestar libros cuando si
cantidad disponible es cero. Cuando se quiere terminar la operación "prestar
libros" el código es igual a cero (0). Finalmente el sistema muestra un resumen
de los libros solicitados.
Mostrar el libro más solicitados.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXIMO_FILAS 10
#define MAXIMO_COLUMNAS 4
void Ver(int [][MAXIMO_COLUMNAS]);
void Carga(int [][MAXIMO_COLUMNAS]);
void Prestamos(int [][MAXIMO_COLUMNAS]);
int main()
{
	int Lista_Libros_Prueba[MAXIMO_FILAS][MAXIMO_COLUMNAS]={{1,0,0,0},{2,0,0,0},
															{3,0,0,0},{4,0,0,0},
															{5,0,0,0},{6,0,0,0},
															{7,0,0,0},{8,0,0,0},
															{9,0,0,0},{10,0,0,0}};
	printf("Hola pai\n");
	Carga(Lista_Libros_Prueba);
	Ver(Lista_Libros_Prueba);
	Prestamos(Lista_Libros_Prueba);
	Ver(Lista_Libros_Prueba);
	system("pause");
	return 0;
}
/*
Cargar los datos de los libros en un arreglo de 10 x 4 de manera automática 
(uso de números aleatorios). La columna 0 es un código que se va aumentando en 
1 en 1, y para las columnas 1 y 3 se debe obtener un número aleatorio entre el
5 y 10. Y la columna 2 colocar 0 por defecto. (Como se muestra en la tabla
anterior)

Columna 0=jj-- de 1 en 1
Columna 1=jj-- aleatorio entre 5 y 10
Columna 2=jj-- 0 x defecto
Columna 3=jj-- aleatorio entre 5 y 10
*/
void Carga(int Arreglo[MAXIMO_FILAS][MAXIMO_COLUMNAS]){
	srand(time(NULL));
	for(int ii=0 ; ii<MAXIMO_FILAS ; ii++){
		for(int jj=0 ; jj<MAXIMO_COLUMNAS ; jj++){
			//Arreglo[ii][0]+=1;
			Arreglo[ii][1]=rand()%5+5;
			Arreglo[ii][2]=0;
			Arreglo[ii][3]=Arreglo[ii][1];
		}
	}
}
void Ver(int Arreglo[MAXIMO_FILAS][MAXIMO_COLUMNAS]){
	for(int ii=0 ; ii<MAXIMO_FILAS ; ii++){
		for(int jj=0 ; jj<MAXIMO_COLUMNAS ; jj++){
			printf("%d |",Arreglo[ii][jj]);
		}
		printf("\n");
	}
}
void Prestamos(int Arreglo[MAXIMO_FILAS][MAXIMO_COLUMNAS]){
	int Pedido=0, Libros=0;
	char Salida=' ';
	do{
		printf("Ingrese el codigo del libro que desea solicitar ");
		scanf("%d",&Pedido);
		switch(Pedido){
		case 1:
			if(Arreglo[Pedido][3]>0){
				printf("\nIngrese el numero de libros que va a llevar ");
				scanf("%d",&Libros);
				if(Libros<Arreglo[Pedido][3])
					Arreglo[Pedido][3]-=Libros;
				else
					printf("No hay suficientes libros del código %d\n",Pedido);
			}
			else
				printf("No hay suficientes libros del código %d\n",Pedido);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			break;
		default:
			break;
		}
		printf("¿Termino de solicitat Libros?");
		scanf(" %c",&Salida);
	}while(Salida=='n'||Salida=='N');
}
