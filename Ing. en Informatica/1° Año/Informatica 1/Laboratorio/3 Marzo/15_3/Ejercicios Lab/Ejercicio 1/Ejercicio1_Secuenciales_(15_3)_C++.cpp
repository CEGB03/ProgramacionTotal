#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int Salario=0, Tarifahora=0, Horastrabajadas=0;
	cout<< "Ingrese las horas trabajadas \n";
	cout<< "Y la tarifa por hora: \n";
	cin>>Horastrabajadas>>Tarifahora;
	Salario=Horastrabajadas*Tarifahora;
	cout<<"Su salario sera: "<<Salario;
	
	return 0;
}

