/*
En este codigo voy a hacer que le pregunte su estado civil
*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	int Estado_Civil=0;
	cout<<"Marque 1 si usted es soltero/soltera\n";
	cout<<"Marque 2 si usted esta en convivencia\n";
	cout<<"Marqur 3 si usted es casado/casada\n";
	cout<<"Marque 4 si usted es viudo/viuda\n";
	cout<<"Marque 5 si usted esta de novio/de novia\n";
	cin>>Estado_Civil;
	switch(Estado_Civil)
	{
	case 1:
		cout<<"\nFelicitaciones usted todavia es libre\n";
		break;
	case 2:
		cout<<"\nNo cometas más errores\n";
		break;
	case 3:
		cout<<"\n¿¿Porque has cometido es gran error??\n";
		break;
	case 4:
		cout<<"\nFelicitaciones usted ya es libre de nuevo\n";
		break;
	default:
		cout<<"\nUsted ha marcado una opcion no dispuesta todavia\n";
		break;
	}
	cout<<"\nAdios\n";
	return 0;
}

