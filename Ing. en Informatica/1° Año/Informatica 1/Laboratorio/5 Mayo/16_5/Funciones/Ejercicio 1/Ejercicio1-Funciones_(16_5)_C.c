/*
	1.  Escribir un programa que ingrese un número y llame a una
 función en la cual determine si un número es o no par. 
(La función debe devolver el valor)
*/
#include <stdio.h>
#include <stdlib.h>
int Paridad(int x){
	if(x%2==0)
		printf("\nEl numero %d es par\n",x);
	if(x%2==1)
		printf("\nEl numero %d no es par\n",x);
}
int main()
{
	int Num1=0;
	printf("Ingrese el numero a controlar su paridad: ");
	scanf("%d",&Num1);
	Paridad(Num1);
	printf("\n");
	system("pause");
	return 0;
}

