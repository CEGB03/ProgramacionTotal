/*

La idea de este codigo es saber si le queda mucha o pocca bateria al telefono

*/


#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	int Opcion_Bateria=0;
	cout<<"Ingrese segun corresponda en la siguinete lista la Cantidad de Bateria que le queda a su dispositivo movil\n";
	cout<<"\nIngrese 1 si tiene entre 0% y 10% \n";
	cout<<"\nIngrese 2 si tiene entre 11% y 20% \n";
	cout<<"\nIngrese 3 si tiene entre 21% y 30% \n";
	cout<<"\nIngrese 4 si tiene entre 31% y 40%\n";
	cout<<"\nIngrese 5 si tiene entre 41% y 50% \n";
	cout<<"\nIngrese 6 si tiene entre 51% y 60% \n";
	cout<<"\nIngrese 7 si tiene entre 61% y 70% \n";
	cout<<"\nIngrese 8 si tiene entre 71% y 80% \n";
	cout<<"\nIngrese 9 si tiene entre 81% y 90% \n";
	cout<<"\nIngrese 10 si tiene entre 91% y 100% \n\n";
	cin>>Opcion_Bateria;
	switch(Opcion_Bateria)
	{
	case 1:
		cout<<"\nSu telefono esta en un nivel de bateria critico, pongalo a cargar. \n";
		break;
	case 2:
		cout<<"\nSu telefon esta en un nivel de bateria semi critico, busque el cargador. \n";
		break;
	case 3:
		cout<<"\nSu telefon esta en un nivel de bateria bajo, concidere cargarlo. \n";
		break;
	case 4:
		cout<<"\nSu telefon esta en un nivel de bateria un poco bajo. \n";
		break;
	case 5:
		cout<<"\nSu telefon esta en un nivel de bateria normal. \n";
		break;
	case 6:
		cout<<"\nSu telefon esta en un nivel de bateria normal. \n";
		break;
	case 7:
		cout<<"\nSu telefon esta en un nivel de bateria normal. \n";
		break;
	case 8:
		cout<<"\nSu telefon esta en un nivel de bateria bueno. \n";
		break;
	case 9:
		cout<<"\nSu telefon esta en un nivel de bateria muy bueno. \n";
		break;
	case 10:
		cout<<"\nSu telefon esta en un nivel de bateria exelente. \n";
		break;
	}
	return 0;
}

