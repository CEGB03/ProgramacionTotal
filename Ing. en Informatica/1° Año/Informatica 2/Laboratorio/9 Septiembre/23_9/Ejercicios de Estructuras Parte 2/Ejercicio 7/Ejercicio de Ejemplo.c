#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 50

void Cargar_Vector(int , int []);
void Mostrar_Vector(int , int []);
void Ordenar_Interseccion_m_a_M(int , int []);
void Ordenar_Interseccion_M_a_m(int , int []);
int main()
{
	char Op=' ';
	int Tamano=0, Arreglo[MAX]={0};
	printf("Ingrese la cantidad de números de la lista:");
	scanf("%d",&Tamano);
	Cargar_Vector(Tamano, Arreglo);
	do
	{
		// menú de opciones
		printf("_____________________________________________________________ ");
		printf("\nOPERACIONES CON ARREGLOS");
		printf("\n\"E\"- Ordenamiento de Insercion");
		printf("\n\"F\"- Ordenamiento de Insercion");
		printf("\n\"S\"- Salir");
		printf("\nSelecciona una opción: ");
		scanf(" %c",&Op);
		
		switch(Op)
		{
		case 'E':
		case 'e':
			printf("\n_____________________________________________________________ ");
			printf("\nSELECCIONO LA OPCION E: ORDENAMIENTO INSERCION DE MENOR A MAYOR\n");
			 // llama a la función cargar vector
			Mostrar_Vector(Tamano, Arreglo);
			Ordenar_Interseccion_m_a_M(Tamano, Arreglo); //llama a la función ordenar por insercion
			Mostrar_Vector(Tamano, Arreglo); // llama a la función mostrar vector
			break;
		case 'F':
		case 'f':
			printf("\n_____________________________________________________________ ");
			printf("\nSELECCIONO LA OPCION F: ORDENAMIENTO INSERCION DE MAYOR A MENOR\n");
			 // llama a la función cargar vector
			Mostrar_Vector(Tamano, Arreglo);
			Ordenar_Interseccion_M_a_m(Tamano, Arreglo); //llama a la función ordenar por insercion
			/*Ordenar_Interseccion_M_a_m(Tamano, Arreglo);
			Ordenar_Interseccion_M_a_m(Tamano, Arreglo);
			Ordenar_Interseccion_M_a_m(Tamano, Arreglo);*/
			Mostrar_Vector(Tamano, Arreglo); // llama a la función mostrar vector
			break;
		case 'S':
		case 's':
			printf("\nAdiós!!! \n");
			Op='S';
			break;
			
		default:
			printf("\nLa opción seleccionada es incorrecta. \n");
			break;
			
		}
	}while(Op!='S');
	return 0;
}
//
// Desarrollo de las FUNCIONES


// Función CARGAR vector
void Cargar_Vector(int Tamano, int Arreglo[MAX]){
	srand(time(NULL));
	for(int ii=0; ii<Tamano; ii++) {
		Arreglo[ii]=rand()%99;
	}
	Mostrar_Vector(Tamano, Arreglo); // llama a la función mostrar vector
}
//
// Función MOSTRAR vector
void Mostrar_Vector(int Tamano, int Arreglo[MAX]){
	printf("\nMuestra Vector: \n");
	for(int ii=0; ii<Tamano; ii++) {
		printf("Arregl[%d] = %d\n", ii, Arreglo[ii]);
	}
	return;
}
//
//Funcion de Ordenamineto Acendente y por Interseccion de menor a mayor
void Ordenar_Interseccion_m_a_M(int Tamano, int Arreglo[MAX]){
	int i=0, j=0, aux=0;
	for(i=0; i<Tamano; i++)
	{
		for(j=0; j<Tamano-1; j++) //el tamaño debe restarse 1
		{
			if(Arreglo[j]<Arreglo[j+1])
			{
				aux=Arreglo[j+1];
				Arreglo[j+1]=Arreglo[j];
				Arreglo[j]=aux;
			}
		} 
	}
}
//*/
//Funcion de Ordenamineto Acendente y por Interseccion de mayor a menor
void Ordenar_Interseccion_M_a_m(int Tamano, int Arreglo[MAX]){
	int i=0, j=0, aux=0;
	for (i=0; i<Tamano-1; i++) { //nº de comparaciones
		for (j=0 ; j<Tamano - 1; j++) {
			//compara los elementos adyacentes y los intercambia
			if (Arreglo[j] > Arreglo[j+1]) {
				aux = Arreglo[j];
				Arreglo[j] = Arreglo[j+1];
				Arreglo[j+1] = aux;
			}
		}
	}
}
/*/
void Ordenar_Interseccion_M_a_m(int Tamano, int Arreglo[MAX]){
	int ii=0, jj=0, Aux=0;
	for(ii=Tamano ; ii>=1 ; ii--){
		Aux= (*(Arreglo+ii));//Guardado el 1° elemento en la variable auxiliar
		jj=ii-1;//Utilizando una 2° variable para hacer las comparaciones
		while( (*(Arreglo+jj) < Aux) && (jj>=0) ){//Comparo el valor de la posicion jj con Aux
			*(Arreglo+jj+1)= (*(Arreglo+jj));//Realiza el intercambio
			jj-=1;//Recorre todos los valores mayores a la derecha
		}
			*(Arreglo+jj+1)=Aux;
	}
}
//*/
//
