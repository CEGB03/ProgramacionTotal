#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	//*
	int Contador=0, Numero=0;
	cout<<"Ingrese un Numero\nY si desae salir ingrese un -1 que no se tendra en cuenta\n";
	cin>>Numero;
	
	while(Numero!=-1)
	{
		cout<<"Ingrese un nuevo Numero\nY si desae salir ingrese un -1 que no se tendra en cuenta\n";
		cin>>Numero;
		Contador++;
	}
	cout<<"Ya ha salido del bucle y ha ingresado en total "<<Contador<<" Numeros\n";
	return 0;
}


