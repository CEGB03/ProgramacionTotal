#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	int Lado1=0, Lado2=0, Lado3=0;
	cout<<"Ingrese los Valores de Cada lado del triangulo\n";
	cin>>Lado1>>Lado2>>Lado3;
	if(Lado1!=Lado2&&Lado1!=Lado3&&Lado2!=Lado3)
	{
		cout<<"El triangulo es Escaleno";//Todos sus lados distintos
	}
	else
	{
		if(Lado1==Lado2&&Lado1==Lado3)
		{
			cout<<"El triangulo es Equilatero";//Todos sus lados iguales
		}
		else
		{
			cout<<"El triangulo es Isosceles";//Dos lados iguales y uno solo distinto
		}
	}
	return 0;
}

