#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	int Entrada=200, CantidaddeEntradas=0, TotalaPagar=0;
	cout<< "Ingrese la cantidad de Entadas a Comprar teniendo en cuenta que cada entrada tiene un costo de $200: \n";
	cin>>CantidaddeEntradas;
	TotalaPagar=Entrada*CantidaddeEntradas;
	cout<<"Su total a pagar sera: "<<TotalaPagar;
	
	return 0;
}

