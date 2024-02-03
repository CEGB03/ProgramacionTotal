#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int Contador=0, Num=0;
	cout<<"Ingrese un numero hasta el cual contar\n";
	cin>>Num;
	do
	{
		cout<<"Los numeros comprendidos entre 0 y "<<Num<<" son:\n";
		cout<<Contador<<"\n";
		Contador++;
	}while(Num!=Contador);
	cout<<"El contador ha finalizado";
	
	return 0;
}

