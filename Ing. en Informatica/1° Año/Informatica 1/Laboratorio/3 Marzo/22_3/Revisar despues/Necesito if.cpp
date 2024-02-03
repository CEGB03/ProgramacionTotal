/*
En este codigo voy a hacer que diga cuanto falta para alcanzar la meta diaria 
de una persona.
*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	int Pasos_Dados=0, Meta_Diaria=0, Faltante=0;
	cout<<"Ingrese la cantidad de Pasos Dados el dìa de Hoy\n";
	cin>> Pasos_Dados;
	cout<<"Ingrese la cantidad de Pasos de su Meta Diaria\n";
	cin>>Meta_Diaria;
	Faltante=Meta_Diaria-Pasos_Dados;
	if(Pasos_Dados==Meta_Diaria)
	{
		cout<<"\nUsted ha cumplido su Meta diara.";
	}
	else
	{
		if(Pasos_Dados>Meta_Diaria)
		{
			Faltante=Faltante*(-1);
			cout<<"\nUsted ha caminado "<<Faltante<<" pasos de màs.";
		}
		else
		{
			cout<<"\nA usted le faltan "<<Faltante<<" Pasos para llegar a su meta diaria.";
		}
	}
	return 0;
}

