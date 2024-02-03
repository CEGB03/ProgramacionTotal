#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	int Perimetro=0, Area=0, Altura=0, Base=0;
	printf("Ingrese la cantidad de la altura: \n");
	scanf("%d", &Altura);
	printf("Ingrese la cantidad de la Base: \n");
	scanf("%d", &Base);
	Area=Altura*Base;
	Perimetro=2*Altura+2*Base;
	printf("\n\n El Area del Rectangulo es: \n %d",Area);
	printf("\n\n El Perimetro del Rectangulo es: \n %d",Perimetro);
	
	return 0;
}

