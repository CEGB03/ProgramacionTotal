/*

	2. Realizar un programa que simule una calculadora. El mismo debe 
contener un menú de opciones con las distintas operaciones que puede realizar. 
Las operaciones deben ser programadas utilizando funciones. (del tipo void)

	a. Sumar dos números.
	b. Restar dos números.
	c. Multiplicar dos números.
	d. Dividir dos números. 

*/
#include <stdio.h>
#include <stdlib.h>
float Sumar(float x, float y){
	float Suma=0;
	Suma=x+y;
	printf("La suma de %f y %f es %f\n",x,y,Suma);
}
float Restar(float x, float y){
	float Resta=0;
	Resta=x-y;
	printf("La resta de %f y %f es %f\n",x,y,Resta);
}
float Multiplicar(float x, float y){
	float Multiplicacion=0;
	Multiplicacion=x*y;
	printf("La multiplicacion de %f y %f es %f\n",x,y,Multiplicacion);
}
float Dividir(float x, float y){
	float Divicion=0;
	Divicion=x/y;
	printf("La divicion de %f y %f es %f\n",x,y,Divicion);
}
float Calculadora(float x, float y){
	float Suma=0, Resta=0, Divicion=0, Multiplicacion=0;
	int Operacion=0;
	printf("Ingrese segun lo que quiera hacer: \n");
	printf("Ingrese 1 para sumar.\n");
	printf("Ingrese 2 para restar.\n");
	printf("Ingrese 3 para multiplicar.\n");
	printf("Ingrese 4 para dividir.\n");
	scanf("%d",&Operacion);
	switch(Operacion){
	case 1:
		Suma=x+y;
		printf("La suma de %f y %f es %f\n",x,y,Suma);
		break;
	case 2:
		Resta=x-y;
		printf("La resta de %f y %f es %f\n",x,y,Resta);
		break;
	case 3:
		Multiplicacion=x*y;
		printf("La multiplicacion de %f y %f es %f\n",x,y,Multiplicacion);
		break;
	case 4:
		Divicion=x/y;
		printf("La divicion de %f y %f es %f\n",x,y,Divicion);
		break;
	}
	printf("\n");
}

int main()
{
	float Suma=0, Resta=0, Divicion=0, Multiplicacion=0, Num1=0, Num2=0;
	int Operacion=0;
	printf("Ingrese el primer numero: ");
	scanf("%f",&Num1);
	printf("Ingrese el segundo numero: ");
	scanf("%f",&Num2);
	Calculadora(Num1,Num2);
	
	/*printf("Ingrese segun lo que quiera hacer: \n");
	printf("Ingrese 1 para sumar.\n");
	printf("Ingrese 2 para restar.\n");
	printf("Ingrese 3 para multiplicar.\n");
	printf("Ingrese 4 para dividir.\n");
	scanf("%d",&Operacion);
	switch(Operacion){
	case 1:
		Sumar(Num1,Num2);
		break;
	case 2:
		Restar(Num1,Num2);
		break;
	case 3:
		Multiplicar(Num1,Num2);
		break;
	case 4:
		Dividir(Num1,Num2);
		break;
	}*/
	system("pause");
	return 0;
}

