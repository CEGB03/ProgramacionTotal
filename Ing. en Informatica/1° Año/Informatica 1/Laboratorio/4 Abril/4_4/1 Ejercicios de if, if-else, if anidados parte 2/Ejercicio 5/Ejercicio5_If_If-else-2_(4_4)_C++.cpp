#include <iostream>
using namespace std;

int main()
{
	int Nota_Ob=0;
	char Grupo_Per= ' ', Inicial = ' ';
	
	cout<<"\nIngrese su Inicial en mayuscula\n";
	cin>>Inicial;
	cout<<"\nIngrese su Nota Obtenida\n";
	cin>>Nota_Ob;
	
	if(Inicial<= 'A' || Inicial<= 'M')
	{
		if(Nota_Ob>=7)
		{
			cout<<"\nUsted pertenece al Grupo A \n";
		}
		else
		{
			cout<<"\nUsted pertenece al Grupo C \n";
		}
	}
	else
	{
		if(Nota_Ob>=7)
		{
			cout<<"\nUsted pertenece al Grupo B \n";
		}
		else
		{
			cout<<"\nUsted pertenece al Grupo D \n";
		}
	}
	return 0;
}

