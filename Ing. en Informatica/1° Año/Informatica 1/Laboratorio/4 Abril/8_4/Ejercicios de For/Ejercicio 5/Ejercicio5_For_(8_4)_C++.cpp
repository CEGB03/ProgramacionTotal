#include <iostream>
using namespace std;

int main()
{
	int Temp=0, ii=0, Temp_Sum=0, Temp_Prom=0, Temp_Max=0, Temp_min=100;
	cout<<"Ingrese la temperatura de esta hora"<<endl;
	cin>>Temp;
	for(ii=1 ; ii<=3 ; ii++)
	{
		
		if(Temp<Temp_min)
			Temp_min=Temp;
		
		if(Temp>Temp_Max)
			Temp_Max=Temp;
		
		Temp_Sum+=Temp;
		
		if(ii<3)
		{
			cout<<"Ingrese la temperatura de esta hora"<<endl;
			cin>>Temp;
		}
		Temp_Prom=Temp_Sum/ii;
		/*cout<<ii<<endl;*/
	}
	cout<<"La temperatura promedio del dia de hoy fue: "<<Temp_Prom<<", la Temperatura Minima fue de: "<<Temp_min<<"º y la Temperatura Maxima fue de: "<<Temp_Max<<"º"<<endl;
	return 0;
}

