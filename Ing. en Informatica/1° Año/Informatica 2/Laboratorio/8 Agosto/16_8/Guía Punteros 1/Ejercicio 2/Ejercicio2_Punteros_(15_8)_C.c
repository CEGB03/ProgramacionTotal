/*
	2. Cargar las 3 notas de un alumno como valores enteros. Luego mostrar el
promedio teniendo en cuenta si tiene parte decimal.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Num_Notas 3
#define Divi 3.0
int Carga_Notas(int [Num_Notas]);
int main() {
	int Notas[Num_Notas]={0}, *Mostar_Notas=NULL, Suma_A=0;
	float *Div_Notas=NULL, Promedio=0;
	
	Div_Notas=&Promedio;
	Suma_A=Carga_Notas(Notas);
	printf("Suma es: %d\n",Suma_A);
	Promedio=Suma_A/Divi;
	printf("Promedio es: %f\n",*Div_Notas);
	system("pause");
	return 0;
}
int Carga_Notas(int Arreglo[Num_Notas]){
	int Ingreso_Nota=0, Suma=0;
	for(int ii=1 ; ii<=Num_Notas ; ii++){
		printf("Ingrese la nota N°%d\n",ii);
		scanf("%d",&Ingreso_Nota);
		Suma=Ingreso_Nota+Suma;
	}
	return (Suma);
}
