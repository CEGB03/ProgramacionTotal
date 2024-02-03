#include <iostream>
using namespace std;

int main()
{
	int Num1=0, Num2=0;
	cout<<"Ingrese el primero de los dos numeros a comparar\n";
	cin>>Num1;
	cout<<"Ingrese el segundo de los dos numeros a comparar\n";
	cin>>Num2;
	
	if(Num1 == Num2)
	{
		cout<<"Usted ha ingresado 2 numeros iguales";
	}
	else
	{
		if(Num1>Num2)
		{
			cout<<"El numero mayor de los dos ingresados es el "<<Num1<<" y el menor es el "<<Num2;
		}
		else
		{
			cout<<"El numero mayor de los dos ingresados es el "<<Num2<<" y el menor es el "<<Num1;
		}
	}
	return 0;
}

