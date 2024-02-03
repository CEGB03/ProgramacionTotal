#include <iostream>
using namespace std;

int main()
{
	int Edades=0, Precio_Total=0, Precio1=20, Precio2=40;
	
	cout<<"Ingrese la primera edad:\n";
	cin>>Edades;
	do
	{
		if(Edades<5)
		{
			cout<<"Ingrese la proxima edad:\n";
			cout<<"Si ya ha ingresado todas las edades, ahora ingrese un 0, no se preocupe no se tomara en cuenta.\n";
			cin>>Edades;
		}
		else
		{
			if(Edades==5 || Edades<15)
			{
				Precio_Total+=Precio1;
				cout<<"Ingrese la proxima edad:\n";
				cout<<"Si ya ha ingresado todas las edades, ahora ingrese un 0, no se preocupe no se tomara en cuenta.\n";
				cin>>Edades;
			}
			else
			{
				Precio_Total+=Precio2;
				cout<<"Ingrese la proxima edad:\n";
				cout<<"Si ya ha ingresado todas las edades, ahora ingrese un 0, no se preocupe no se tomara en cuenta.\n";
				cin>>Edades;
			}
		}
	} while(Edades!=0);
	cout<<"\nSu total a pagar sera de: $"<<Precio_Total<<endl;
	return 0;
}
