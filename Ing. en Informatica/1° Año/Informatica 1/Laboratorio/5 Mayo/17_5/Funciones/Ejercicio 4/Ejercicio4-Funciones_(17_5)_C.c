/*
	4. Se tiene un arreglo de 10 valores rellenado por defecto o 
aleatoriamente entre el (65 al 90). Luego generar un menú de opciones con 
las siguientes funciones:

- sumar todos los valores.
- calcular el promedio. (reutilizar la función anterior)
- trasformar los números en letras.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARREGLO1D 10
int Sumar_Arreglo1D(int Arreglo_Suma[ARREGLO1D]){
	int ii=0, Suma=0;
	for(ii=0; ii<ARREGLO1D; ii++){
		Suma+=Arreglo_Suma[ii];
	}
	printf("La suma del arreglo es: %d\n",Suma);
	return(Suma);
}
float Dividir(float x, float y){
	float Divicion=0;
	Divicion=x/y;
	//printf("La divicion de %f y %f es %f\n",x,y,Divicion);
	return(Divicion);
}
void Promedio_Arreglos1D(int Arreglo_Suma[ARREGLO1D]){
	int ii=0, Suma=0, Divi=ARREGLO1D;
	float Promedio=0;
	for(ii=0; ii<ARREGLO1D; ii++){;
		Suma+=Arreglo_Suma[ii];
	}
	Promedio=Dividir(Suma,Divi);
	printf("El promedio del arreglo es: %f\n",Promedio);
}
void Trasformar_Num_en_Letras1D(int ArregloEje4Fun[ARREGLO1D]){
	int ii=0;
	for(ii=0; ii<ARREGLO1D; ii++){
		printf("Elemento %d del arrego es %c\n",ii,ArregloEje4Fun[ii]);
	}
}
int main()
{
	srand(time(NULL));
	int ArregloEje4Fun[ARREGLO1D], Inicio=65, Opcion=0;
	for(int ii=0; ii<ARREGLO1D; ii++){
		if(ii==0)
		ArregloEje4Fun[ii]=Inicio;
		if(ii>0){
			Inicio++;
			ArregloEje4Fun[ii]=Inicio;
		}
		ArregloEje4Fun[ii]=rand()%25+65;
	}
	printf("Seleccione una de las siguientes Opciones:\n");
	printf("Ingrese 1 para sumar todos los valores del arreglo.\n");
	printf("Ingrese 2 para hacer el promedio todos los valores del arreglo.\n");
	printf("Ingrese 3 para trasformar todos los valores del arreglo a letras.\n");
	scanf("%d",&Opcion);
	switch(Opcion)
	{
	case 1:
		Sumar_Arreglo1D(ArregloEje4Fun);
		printf("\nFin\n");
		break;
	case 2:
		Promedio_Arreglos1D(ArregloEje4Fun);
		printf("\nFin\n");
		break;
	case 3:
		Trasformar_Num_en_Letras1D(ArregloEje4Fun);
		printf("\nFin\n");
		break;
	case 4:
		for(int ii=0; ii<ARREGLO1D; ii++)
		{
			printf("Elemento %d del arrego es %d\n",ii,ArregloEje4Fun[ii]);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}
