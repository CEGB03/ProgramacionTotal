#include <iostream>
using namespace std;

int main()
{
	int Edad=0, Precio_Entrada=0, Precio_Entrada_1=100, Precio_Entrada_2=200;
	
	cout<<"Ingrese su cantidad de Años\n";
	cin>>Edad;
	
	if(Edad<4)
	{
		cout<<"Su entrada es gratis\nDisfrute...\n";
	}
	else
	{
		if(Edad ==4 || Edad<18)
		{
			cout<<"Su entrada es tiene un costo de $"<<Precio_Entrada_1<<"\nDisfrute...\n";
		}
		else
		{
			cout<<"Su entrada es tiene un costo de $"<<Precio_Entrada_2<<"\nDisfrute...\n";
		}
	}
	return 0;
}

