#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	
	int Entrada=200, CantidaddeEntradas=0, TotalaPagar=0;
	printf("Ingrese la cantidad de Entadas a Comprar: \n");
	printf("Cada entrada tiene un coste de $200. \n");
	scanf("%d", &CantidaddeEntradas);
	TotalaPagar=Entrada*CantidaddeEntradas;
	printf("Su total a pagar sera: %d",TotalaPagar);
	
	return 0;
}

