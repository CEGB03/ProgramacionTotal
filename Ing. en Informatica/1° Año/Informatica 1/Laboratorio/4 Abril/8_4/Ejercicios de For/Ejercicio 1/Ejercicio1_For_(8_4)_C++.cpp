#include <iostream>
using namespace std;

int main()
{
	int Num1=0, ii=0, Resultado=0;
	
	cout<<"Ingrese un numero para hacer su tabla de multiplicar hast ael 20\n";
	cin>>Num1;
	for(ii=0 ; ii<21 ; ii++)
	{
		Resultado=Num1*ii;
		cout<<"\n"<<Num1<<" x "<<ii<<" = "<<Resultado;
	}
	return 0;
}

