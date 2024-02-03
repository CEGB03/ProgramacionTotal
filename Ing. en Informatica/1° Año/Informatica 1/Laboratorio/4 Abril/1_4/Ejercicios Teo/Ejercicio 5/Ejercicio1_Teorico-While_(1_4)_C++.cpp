#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	int Alumnos_C=0, Nota_A=0;
	float Promedio_S_D=0, Promedio_D=0;
	cout<<"Ingrese la cantidad de alumnos del curso\n";
	cin>>Alumnos_C;
	cout<<"Ingrese la primer nota\n";
	cin>>Nota_A;
	while(Nota_A!=-10)
	{
		Promedio_S_D+=Nota_A;
		cout<<"Ingrese la proxima nota, al salir se mostrara el promedio\n";
		cin>>Nota_A;
	}
	Promedio_D=Promedio_S_D/Alumnos_C;
	cout<<"El promedio de las notas sera: "<<Promedio_D<<"\n";
	return 0;
}
