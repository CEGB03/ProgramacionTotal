#include <iostream>
using namespace std;

int main()
{
	int Num1=0, Num2=0, Divi=0, Mod=0;
	
	cout<<"Ingrese el primer numero a dividir\n";
	cin>>Num1;
	cout<<"Ingrese el segundo numero a dividir\n";
	cin>>Num2;
	Mod=Num1%Num2;
	
	if(Mod == 0 && Num2!=0)
	{
		Divi=Num1/Num2;
		cout<<"Su divicion es excata y el resultado es: "<<Divi<<"\n";
	}
	else
	{
		if(Num2 == 0)
		{
			cout<<"Usted ha ingresado un 0 en la segunda posicion y la divicion no se podra realizar\n";
		}
		else
		{
			cout<<"Usted ha ingresado numeros que dan una divicion inexacta\n";
		}
	}
	
	return 0;
}

