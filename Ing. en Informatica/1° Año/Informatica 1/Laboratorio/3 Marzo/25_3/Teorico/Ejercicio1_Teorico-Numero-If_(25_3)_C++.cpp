#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	float Numero=0;
	printf("Ingrese un numero.\n");
	scanf("%f",&Numero);
	
	if(Numero==0)
	{
		printf("Usted ha ingresado un 0.\n");
	}
	if(Numero!=0)
	{
		if(Numero>0)
		{
			printf("Usted ha ingresado un numero positivo.\n");
		}
		else
		   {
		   printf("Usted ha ingresado un numero negativo.\n");
		}
	}
	cout
	return 0;
}

