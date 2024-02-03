#include <iostream>
using namespace std;

int main()
{
	int Edades=0, Edades_S, Contador=0;
	float Promedio=0;
	cout<<"Ingrese la primera edad\n";
	cin>>Edades;
	
	do
	{
		cout<<"\nIngrese la proxima edad\n";
		cout<<"\nPara Salir del bucle ingrese un valor igual a -10, el -10 no se tendra en cuenta\n";
		cin>>Edades;
		Edades_S+=Edades;
		Contador++;
	} while(Edades!=-10);
	
	Promedio=Edades_S/Contador;
	cout<<"El promedio de las edades es de: "<<Promedio;
	cout<<"\nHa ingresado "<<Contador<<" Edades";
	
	return 0;
}

