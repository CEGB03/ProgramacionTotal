#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int PerimetroCuadrado=0, AreaCuadrado=0, AreaRectangulo=0, PerimetroRectangulo, Lado=0, Base=0, Altura=0;
	printf("Ingrese la magnitud del Lado del Cuadrado: \n");
	scanf("%d", &Lado);
	printf("Ingrese la magnitud de la altura Rectangulo: \n");
	scanf("%d", &Altura);
	printf("Ingrese la magnitud de la Base Rectangulo: \n");
	scanf("%d", &Base);
	AreaRectangulo=Base*Altura;
	PerimetroRectangulo=2*Altura+2*Base;
	AreaCuadrado=Lado*Lado;
	PerimetroCuadrado=4*Lado;
	printf("\n\n El Area del Cuadrado es: \n %d" ,AreaCuadrado);
	printf("\n\n El Perimetro del cuadrado es: \n %d" ,PerimetroCuadrado);
	printf("\n\n El Area del Rectangulo es: \n %d",AreaRectangulo);
	printf("\n\n El Perimetro del Rectangulo es: \n %d" ,PerimetroRectangulo);
	
	return 0;
}

