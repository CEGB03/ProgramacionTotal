#include <iostream>
using namespace std;

int main()
{
	int Num1=0, ii=0, Suma=0, Promedio=0;
	
	cout<<"Ingrese un numero positivo"<<endl;
	cin>>Num1;
	
	for(ii=1 ; ii<6 ; ii++)
	{
		Suma+=Num1;
		Promedio=Suma/ii;
		cout<<"La suma total de los numeros ingresados hasta el momento es: "<<Suma<<endl;
		cout<<"El Promedio de los numeros ingresados hasta el momento es: "<<Promedio<<endl<<endl;
		cout<<"Ingrese otro numero positivo"<<endl;
		cin>>Num1;
		/*if(ii<5)
		{
			cout<<"Ingrese otro numero positivo"<<endl;
			cin>>Num1;
		}*/
	}
	ii-=1;
	cout<<"Ya ha ingresado "<<ii<<" numeros, por ello se ha finalizado el programa"<<endl;
	return 0;
}
