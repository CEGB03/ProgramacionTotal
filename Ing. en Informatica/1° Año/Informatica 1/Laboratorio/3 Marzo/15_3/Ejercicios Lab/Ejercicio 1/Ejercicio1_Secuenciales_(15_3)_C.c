#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	
	int Salario=0, Tarifahora=0, Horastrabajadas=0;
	printf("Ingrese las horas trabajadas \n");
	printf("Y la tarifa por hora: \n");
	scanf("%d%d", &Horastrabajadas, &Tarifahora);
	Salario=Tarifahora*Horastrabajadas;
	printf("El salario sera: %d",Salario);
	
	return 0;
}

