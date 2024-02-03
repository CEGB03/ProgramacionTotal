/*
La idea de este codigo es que diga si los puntos del truco son buenos o malos
*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	int Puntos=0;
	cout<<"Ingrese la cantidad de puntos que tiene en su mano.\n";
	cin>>Puntos;
	switch(Puntos)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
		cout<<"\nSus puntos son malos, no pida envido.\n";
		break;
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
		cout<<"\nSus puntos son buenos, podira defenderse si le piden envido.\n";
	case 31:
	case 32:
	case 33:
		cout<<"\nSus puntos son muy buenos, pida envido, hay muy pocas probabilidades de que pierda \n";
		break;
	default:
		cout<<"Esa cantidad de puntos es invalida, no sea tramposo.";
		break;
	}
	
	return 0;
}

