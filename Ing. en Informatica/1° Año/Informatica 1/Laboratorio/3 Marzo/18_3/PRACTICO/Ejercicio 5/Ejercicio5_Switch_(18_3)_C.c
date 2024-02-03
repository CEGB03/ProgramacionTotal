#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	int TdT=0;
	float MAdT=0, LN=0;
	
	printf("Por favor ingrese el monto actual de credito su tarjeta\n(Por favor si lleva 4 cifras, pongalo todo junto)\n");
	scanf("%f", &MAdT);
	printf("\nAhora ingrese El tipo de tarjeta que posee:\n");
	printf("\nMarque 1 para Tarjetas tipo 1\n");
	printf("\nMarque 2 para Tarjetas tipo 2\n");
	printf("\nMarque 3 para Tarjetas tipo 3\n");
	printf("\nMarque 4 para tipo de Tarjetas que no figuraron anteriormente\n\n");
	scanf("%d", &TdT);
	switch(TdT)
	{
	case 1:
		LN=MAdT*1.25;
		printf("\nUsted ha conseguido un aumento de un 25%, por lo cual su limite de credito ahora sera: %f",LN);
		break;
	case 2:
		LN=MAdT*1.35;
		printf("\nUsted ha conseguido un aumento de un 35%, por lo cual su limite de credito ahora sera: %f",LN);
		break;
	case 3:
		LN=MAdT*1.40;
		printf("\nUsted ha conseguido un aumento de un 40%, por lo cual su limite de credito ahora sera: %f",LN);
		break;
	case 4:
		LN=MAdT*1.50;
		printf("\nUsted ha conseguido un aumento de un 50%, por lo cual su limite de credito ahora sera: %f",LN);
		break;
	default:
		printf("Su tipo de trjeta es desconocido, vuelva a intentarlo desde el principo");
		break;
	}
	printf("\n\n Muy bien Adios");
	return 0;
}

