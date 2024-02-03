#include <iostream>
using namespace std;

int main()
{
	int Cont_Alumn=0, Nota=0, Nota_Mayor=0, Nota_Min=10000, Promedio_S_D=0, Promedio_D=0, Conta_A=0, Conta_R=0;
	
	cout<<"Ingrese la nota: ";
	cin>>Nota;
	while(Nota != 0)
	{
		if(Nota!=0)
		{
			Cont_Alumn++;
			if(Nota<Nota_Min)
				Nota_Min=Nota;
			if(Nota>Nota_Mayor)
				Nota_Mayor=Nota;
			if(Nota>=4)
				Conta_A++;
			if(Nota<4 && Nota!=0)
				Conta_R++;
		}
		if(Cont_Alumn>0)
		{
			cout<<"Ingrese la nota: ";
			cin>>Nota;
		}
		Promedio_S_D+=Nota;
		Promedio_D=Promedio_S_D/Cont_Alumn;
	}
	cout<<"\nLa nota más alta es: "<<Nota_Mayor<<endl;
	cout<<"La nota más baja es: "<<Nota_Min<<endl;
	cout<<"La cantidad de alumnos aprobados es: "<<Conta_A<<endl;
	cout<<"La cantidad de alumnos reprobados es: "<<Conta_R<<endl;
	cout<<"EL promedio de las notas es de: "<<Promedio_D<<endl;
	return 0;
}

