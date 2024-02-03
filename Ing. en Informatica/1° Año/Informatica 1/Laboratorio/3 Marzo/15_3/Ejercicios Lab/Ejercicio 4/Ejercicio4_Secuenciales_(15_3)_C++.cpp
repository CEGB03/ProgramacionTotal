#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	int PG=0, PE=0, PP=0, PT=0;
	cout<< "Ingrese la cantidad de Partidos Ganados: \n";
	cin>>PG;
	cout<< "Ingrese la cantidad de Partidos Empatados: \n";
	cin>>PE;
	cout<< "Ingrese la cantidad de Partidos Perdidos: \n";
	cin>>PP;
	PT=PG*3+PE*1+PP*0;
	cout<<"Su puntaje total es de: "<<PT;
	
	return ;
}

