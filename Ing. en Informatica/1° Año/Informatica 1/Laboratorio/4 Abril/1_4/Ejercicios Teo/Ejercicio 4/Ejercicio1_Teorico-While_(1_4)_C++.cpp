#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	int Suma=0, Num1=0;
	cout<<"Ingrese un numero positivo, de lo contraio no se tomara en cuenta y se cerrara el programa\n";
	cin>>Num1;
	while(Num1>=0)
	{
		cout<<"Ingrese un nuevo numero positivo, de lo contraio no se tomara en cuenta y se cerrara el programa\n";
		Suma+=Num1;
		cin>>Num1;
	}
	cout<<"La suma total de todos los positivos ingresados es: "<<Suma;
	return 0;
	
}

