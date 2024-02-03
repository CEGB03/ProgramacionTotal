#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	int Precio1=65, Precio2=70, Precio3=95, Precio4=100, Colectivo=4000;
	float Alumnos_V=0;
	cout<<"Cuantos alumnos iran al viaje\n";
	cin>>Alumnos_V;
	if(Alumnos_V>=100)
	{
		Alumnos_V=(Alumnos_V/Colectivo)+Precio1;
		cout<<"Se cobraran $"<<Alumnos_V<<" por cada alumnos que vaya al viaje\nDonde se contemplan los $65 par ael viaje y los 4000 que hay que pagar para el Colectivo";
	}
	else
	{
		if(50<=Alumnos_V&&Alumnos_V<=99)
		{
			Alumnos_V=(Alumnos_V/Colectivo)+Precio2;
			cout<<"Se cobraran $"<<Alumnos_V<<" por cada alumnos que vaya al viaje\nDonde se contemplan los $70 par ael viaje y los 4000 que hay que pagar para el Colectivo";
		}
		else
		{
			if(30<=Alumnos_V&&Alumnos_V<=49)
			{
				Alumnos_V=(Alumnos_V/Colectivo)+Precio3;
				cout<<"Se cobraran $"<<Alumnos_V<<" por cada alumnos que vaya al viaje\nDonde se contemplan los $95 par ael viaje y los 4000 que hay que pagar para el Colectivo";
			}
			else
			{
				if(Alumnos_V<=29)
				{
					Alumnos_V=(Alumnos_V/Colectivo)+Precio4;
					cout<<"Se cobraran $"<<Alumnos_V<<" por cada alumnos que vaya al viaje\nDonde se contemplan los $100 par ael viaje y los 4000 que hay que pagar para el Colectivo";
				}
				else
				{
					cout<<"Se ha ingresado un valor erroneo, intente de nuevo";
				}
			}
			
		}
	}
	return 0;
}

