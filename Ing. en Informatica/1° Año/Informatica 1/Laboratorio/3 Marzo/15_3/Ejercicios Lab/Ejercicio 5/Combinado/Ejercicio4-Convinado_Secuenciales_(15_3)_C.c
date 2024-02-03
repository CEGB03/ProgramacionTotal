#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int PerimetroCuadrado=0, AreaCuadrado=0, AreaRectangulo=0, PerimetroRectangulo=0, Lado=0, Base=0, Altura=0;
	cout<< "Ingrese la magnitud del Lado del Cuadrado: \n";
	cin>>Lado;
	cout<< "Ingrese la magnitud de la altura Rectangulo: \n";
	cin>>Altura;
	cout<< "Ingrese la magnitud de la Base Rectangulo: \n";
	cin>>Base;
	AreaRectangulo=Base*Altura;
	PerimetroRectangulo=2*Altura+2*Base;
	AreaCuadrado=Lado*Lado;
	PerimetroCuadrado=4*Lado;
	cout<<"\n\n"<<"El Area del Cuadrado es: \n"<<AreaCuadrado<<"\n\n";
	cout<<"El Perimetro del cuadrado es: \n"<<PerimetroCuadrado<<"\n\n";
	cout<<"\n"<<"El Area del Rectangulo es: \n"<<AreaRectangulo<<"\n\n";
	cout<<"El Perimetro del Rectangulo es: \n"<<PerimetroRectangulo<<"\n";
	
	return 0;
}

