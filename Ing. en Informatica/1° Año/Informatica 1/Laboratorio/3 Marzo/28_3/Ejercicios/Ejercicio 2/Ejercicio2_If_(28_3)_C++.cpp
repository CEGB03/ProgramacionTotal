#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	int Un_Mat=0, Un_Es=0, Un_Fal=0;
	cout<<"Ingrese la cantidad de unidades que tiene la materia\n";
	cin>>Un_Mat;
	cout<<"Ingrese la cantidad de unidades que ha estudiado de la materia\n";
	cin>>Un_Es;
	if (Un_Es==Un_Mat)
	{
		cout<<"Usted ha estudiado todas las Unidades.\nFelicitaciuones!!\nAl fin puede descansar.";
	}
	else
	{
		Un_Fal=Un_Mat-Un_Es;
		if(Un_Fal>0)
		{
			cout<<"Al alumno le faltan estudiar "<<Un_Fal<<" para terminar de estudiar";
		}
		else
		{
			cout<<"Hubo algun error de tipeo, vuelva a empezar";
		}
	}
	return 0;
}

