#include <iostream>
using namespace std;

int main()
{
	int Edad=0, Ingresos_Men=0;
	
	cout<<"Ingrese su Edad\n";
	cin>>Edad;
	cout<<"Ingrese sus Ingresos Mensuales\n";
	cin>>Ingresos_Men;
	
	if(Edad>25)
	{
		if(Ingresos_Men>=200000)
		{
			cout<<"\nUsted si debe tributar.\nAdios.";
		}
		else
		{
			cout<<"\nUsted no debe tributar.\nAdios.";
		}
	}
	else
	{
		cout<<"\nUsted no debe tributar.\nAdios.";
	}
	return 0;
}

