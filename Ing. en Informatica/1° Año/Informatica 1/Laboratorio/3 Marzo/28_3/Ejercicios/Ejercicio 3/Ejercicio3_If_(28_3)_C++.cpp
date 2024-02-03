/*
precio=precio-((descuento*precio)/100)
*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	int Min_Loc=0, Min_Dis=0, Total=0, P_Min_Loc=0.05, P_Min_Dis=0.1;
	
	cout<<"Ingrese el numero de minutos que ha realizado localmente";
	cin>>Min_Loc;
	cout<<"Ingrese el numero de minutos que ah realizado a larga distancia";
	cin>>Min_Dis;
	Total=(Min_Dis*P_Min_Dis)+(Min_Loc*P_Min_Loc);
	if(Min_Dis>1000&&Min_Loc>1000)
	{
		Total=Total-((10*Total)/100);
		cout<<"Usted ha logrado aplicar para la promocion de descuento,\nAhora usted tendra que pagar "<<Total<<"\nSe le ha aplicado un 10% de descuento";
	}
	else
	{
		cout<<"Usted no aplica a la promocion de descuento activa actualmente y tendra que pagar "<<Total;
	}
	return 0;
}

