/*
si dia de pago <= a 10 no se cobra recargo, si es mayor hay un recargo de 5%
cuota > a 5000, se cobra un 10% de recargo

*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	int Cuota=0, Dia_P=0, Pago_Fin=0;
	cout<<"Ingrese el valor de su Cuota \nY el dia que va a pagar\n";
	cin>>Cuota>>Dia_P;
	if(Cuota>5000||Dia_P>10)
	{
		Pago_Fin=Cuota*1.10;
		cout<<"Usted al tener una cuota mayor a $5000 o por superar el dia 10 de pago, su pago fianl tendra un 10% de recargo\nPor lo que ahora pagara: "<<Pago_Fin;
	}
	else
	{
		if(Cuota<5000||Dia_P>10)
		{
			Pago_Fin=Cuota*1.05;
			cout<<"Usted al tener una cuota mayor a $5000 o por superar el dia 10 de pago, su pago fianl tendra un 5% de recargo\nPor lo que ahora pagara: "<<Pago_Fin;
		}
		else
		{
			if(Dia_P<=10)
			{	
				cout<<"A usted no se le aplicara ningun tipo de recargo y se mantiene el precio origonal de su Cuota ($"<<Cuota<<")";
			}
		}
	}
	cin.get();
	return 0;
}

