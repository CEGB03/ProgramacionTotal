/*
	4. Escribir un programa que intercambie los valores enteros de a y b
utilizando punteros.
*/
/*
	sumarlos en una variable, y al intercambiar el primer numero restrle el sumado a la variable q quedo sin cambiar
*/
#include <stdio.h>
#include <stdlib.h>

float Carga_Nums(float *x, float *y);

int main(){
	float Num1=0, Num2=0, Suma=0, *Operador1=NULL, *Operador2=NULL;
	Operador1=&Num1;
	Operador2=&Num2;
	Suma=Carga_Nums(Operador1, Operador2);
	printf("Numeros Orginales:\n");
	printf("Primer numero cargado: %f\n",Num1);
	printf("Segundo numero cargado: %f\n",Num2);
	printf("Numeros Intercambiados:\n");
	Num1=Num2;
	Num2=Suma-Num1;
	printf("Primer numero cargado: %f\n",*Operador1);
	printf("Segundo numero cargado: %f\n",*Operador2);
	system("pause");
	return 0;
}
float Carga_Nums(float *x,float *y){
	for(int ii=1 ; ii<=2 ; ii++){
		if(ii==1){
			printf("Ingrese el primer numero a intercambiar\n");
			scanf("%f",*x);
		}
		else{
			if(ii==2){
				printf("Ingrese el segundo numero a intercambiar\n");
				scanf("%f",*y);
			}
		}
	}
	return (*x)+(*y);
}
