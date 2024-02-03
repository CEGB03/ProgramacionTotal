#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	int Num=0;
		
	cout<<"Ingrese un numero cualquiera que no tenga coma\n";
	cin>>Num;
		
	Num=Num%2;
		
	if (Num==0)
	{
		cout<<"El Numero es Par";
	}
	else
	{
		cout<<"El Numero es Impar";
	}
	return 0;
}

