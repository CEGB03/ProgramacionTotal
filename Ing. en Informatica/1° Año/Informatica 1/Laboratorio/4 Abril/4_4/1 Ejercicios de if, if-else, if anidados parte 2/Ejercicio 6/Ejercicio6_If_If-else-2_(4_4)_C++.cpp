#include <iostream>
using namespace std;

int main()
{
	int Renta=0, Impositivo=0;
	
	cout<<"Ingrese su Renta Anual\n";
	cin>>Renta;
	
	if(Renta<=30000)
	{
		if(Renta<20000)
		{
			cout<<"\nSu Tipo de Impositivo es del 5%\n";
		}
		else
		{
			cout<<"\nSu Tipo de Impositivo es del 10%\n";
		}
	}
	else
	{
		if(Renta>=30000)
		{
			if(Renta<=40000)
			{
				cout<<"\nSu Tipo de Impositivo es del 15%\n";
			}
			else
			{
				cout<<"\nSu Tipo de Impositivo es del 20%\n";
			}
		}
	}
	return 0;
}

