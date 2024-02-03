/*
	1. Escribir un programa que declare e inicialice una variable del tipo float
n=5/2. Luego imprima el resultado de la división, la misma debería ser 2,5.
*/
/*
	Hacer:
		Una variable que sea 5/2
		Y que su resultado sea 2.5
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	float Divicion=0;
	float *Resultado_Div=NULL;
	/*Resultado_Div=&Divicion;
	Resultado_Div=5/2.0;*/
	Divicion=(5/2.0);
	printf("%f\n",Divicion);
	//printf("%f\n",*Resultado_Div);
	
	system("pause");
	return 0;
}

