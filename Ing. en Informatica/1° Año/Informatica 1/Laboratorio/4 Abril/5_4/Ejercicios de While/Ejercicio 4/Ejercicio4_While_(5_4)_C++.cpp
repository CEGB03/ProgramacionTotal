#include <iostream>
using namespace std;

int main()
{
	int Precio_Total=0, Precio=1, Contador=0, Descuento1=15, Descuento2=20;
	char Respuesta=' ';
	
	cout<<"Ingrese el primer Precio";
	cin>>Precio;
	while(Precio != 0 || Respuesta== 's' || Respuesta== 'S')
	{
		if(Contador>0)
		{
			cout<<"Ingrese el proximo Precio";
			cin>>Precio;
		}
		Precio_Total+=Precio;
		if(Precio_Total>=50 && Precio_Total<=120)
		{
			Precio_Total=Precio_Total-((Descuento1*Precio_Total)/100);
		}
		if(Precio_Total<120)
		{
			Precio_Total=Precio_Total-((Descuento2*Precio_Total)/100);
		}
		Contador++;
		
		cout<<"¿Más clientes (S/N)?"<<endl;
		cin>>Respuesta;
	}
	return 0;
}

