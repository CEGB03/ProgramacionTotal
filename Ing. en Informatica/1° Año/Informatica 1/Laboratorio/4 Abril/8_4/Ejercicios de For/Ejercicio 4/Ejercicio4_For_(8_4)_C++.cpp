#include <iostream>
using namespace std;

int main()
{
	int ii=0, Sueldo_Mes=0, Gasto_Mes=0, Ahorro=0, Ahorro_Total=0;
	cout<<"Ingrese el sueldo de este mes"<<endl;
	cin>>Sueldo_Mes;
	cout<<"Ingrese el gasto de este mes"<<endl;
	cin>>Gasto_Mes;
	
	for(ii=1 ; ii<13 ; ii++)
	{
		Ahorro=Sueldo_Mes-Gasto_Mes;
		cout<<"Este mes ha ahorrado "<<Ahorro<<endl;
		Ahorro_Total+=Ahorro;
		if(ii<11)
		{
			cout<<"Ingrese el sueldo del proximo mes"<<endl;
			cin>>Sueldo_Mes;
			cout<<"Ingrese el gasto del proximo mes"<<endl;
			cin>>Gasto_Mes;
		}
	}
	cout<<"Su Ahorro Total en un año fue de "<<Ahorro_Total<<endl;
	
	return 0;
}
