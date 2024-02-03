#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int Perimetro=0, Area=0, Altura=0, Base=0;
	cout<< "Ingrese la cantidad de la altura: \n";
	cin>>Altura;
	cout<< "Ingrese la cantidad de la Base: \n";
	cin>>Base;
	Area=Base*Altura;
	Perimetro=2*Altura+2*Base;
	cout<<"\n"<<"El Area del Rectangulo es: \n"<<Area<<"\n\n";
	cout<<"El Perimetro del Rectangulo es: \n"<<Perimetro;
	
	return 0;
}

