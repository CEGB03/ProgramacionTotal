#include <iostream>
using namespace std;

int main()
{
	int Num=0, Contador_P=0, Contador_N=0;
	
	cout<<"Ingrese el primer numero, por favor no ingrese un 0\n";
	cin>>Num;
	
	do
	{
		if(Num<0)
		{
			Contador_N++;
			cout<<"\nIngrese el proximo numero\n";
			cout<<"\nPara Salir del bucle ingrese un valor igual a 0, el 0 no se tendra en cuenta\n";
			cin>>Num;
		}
		else
		{
			Contador_P++;
			cout<<"\nIngrese el proximo numero\n";
			cout<<"\nPara Salir del bucle ingrese un valor igual a 0, el 0 no se tendra en cuenta\n";
			cin>>Num;
		}
	} while(Num!=0);
	
	cout<<"Usted ha ingresado "<<Contador_P<<" numeros positivos y "<<Contador_N<<" numeros negativos";
	
	return 0;
}
