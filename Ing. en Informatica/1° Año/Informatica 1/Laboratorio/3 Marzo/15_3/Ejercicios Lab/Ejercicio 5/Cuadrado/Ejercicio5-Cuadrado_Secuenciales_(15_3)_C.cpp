#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	int Perimetro=0, Area=0, Lado=0;
	cout<< "Ingrese la cantidad del Lado: \n";
	cin>>Lado;
	Area=Lado*Lado;
	Perimetro=4*Lado;
	cout<<"\n"<<"El Area del Cuadrado es: \n"<<Area<<"\n\n";
	cout<<"El Perimetro del cuadrado es: \n"<<Perimetro;
	
	return 0;
}

