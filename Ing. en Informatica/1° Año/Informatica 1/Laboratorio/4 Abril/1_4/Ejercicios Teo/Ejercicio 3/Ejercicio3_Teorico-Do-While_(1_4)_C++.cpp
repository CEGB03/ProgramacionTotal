#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int Contador=0, Num1=0, Num2=0;
	cout<<"Ingrese el primer numero para empezar a contar\n";
	cin>>Num1;
	cout<<"Ingrese el segundo numero para dejar de contar\n";
	cin>>Num2;
	do
	{
		cout<<"Los numeros comprendidos entre "<<Num1<<" y "<<Num2<<" son:\n";
		Contador++;
		cout<<Contador<<"\n";
	}while(Contador!=Num2);
	cout<<"El contador ha finalizado";
	return 0;
}

