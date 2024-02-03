#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int Perimetro=0, Area=0, Lado=0;
	printf("Ingrese la cantidad de el Lado: \n");
	scanf("%d", &Lado);
	Area=Lado*Lado;
	Perimetro=4*Lado;
	printf("\n\n El Area del Cuadrado es: \n %d",Area);
	printf("\n\n El Perimetro del Cuadrado es: \n %d",Perimetro);
	
	return 0;
}

