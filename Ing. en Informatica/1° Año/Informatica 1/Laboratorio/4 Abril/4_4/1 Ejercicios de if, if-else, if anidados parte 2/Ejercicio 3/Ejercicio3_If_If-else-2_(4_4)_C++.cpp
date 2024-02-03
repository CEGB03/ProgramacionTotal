#include <iostream>
using namespace std;

int main()
{
	int Num1=0, Num2=0, Num3=0;
	cout<<"Ingrese el primero de los tres numeros a comparar\n";
	cin>>Num1;
	cout<<"Ingrese el segundo de los tres numeros a comparar\n";
	cin>>Num2;
	cout<<"Ingrese el tercero de los tres numeros a comparar\n";
	cin>>Num3;
	
	if(Num1 == Num2 && Num1 == Num3)
	{
		cout<<"Usted ha ingresado 3 numeros iguales";
	}
	else
	{
		if(Num1 == Num2 || Num1 == Num3 || Num2 == Num3)
		{
			cout<<"Usted ha ingresado 2 numeros iguales";
		}
		else
		{
			cout<<"Usted ha ingresado 3 numeros distintos";
		}
	}
	return 0;
}

