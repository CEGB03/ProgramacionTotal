#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	int RC=0, RI=0, ReB=0, PT=0;
	cout<< "Ingrese la cantidad de Respuestas Correctas: \n";
	cin>>RC;
	cout<< "Ingrese la cantidad de Respuestas Incorrectas: \n";
	cin>>RI;
	cout<< "Ingrese la cantidad de Respuestas en Blanco: \n";
	cin>>ReB;
	PT=RC*4+(RI*(-1))+ReB*0;
	cout<<"Su puntaje total es de: "<<PT;
	
	return 0;
}

