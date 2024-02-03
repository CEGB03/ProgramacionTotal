/*
	3. Realice un programa que permita cargar el abecedario en un vector.
	   Luego muestre el abecedario ingresado.
*/
#include <stdio.h>
#include <stdlib.h>
#define INICIO_A 65

int main()
{
	int ii=0;
	char  Arreglo3[26]={' '};
	for(ii=0; ii<26; ii++)
	{
		Arreglo3[ii]=ii+65;
	}
	printf("Abecedario: \n");
	for(ii=0; ii<26; ii++)
	{
		printf(" %c -",Arreglo3[ii]);
		if(ii==12)
			printf("\n");
		if(ii==26)
			printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}

