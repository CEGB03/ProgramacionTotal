#include <iostream>
using namespace std;

int main()
{
	int Contador_10=0/*, Num1=0*/;
	float Num1=0;
	
	cout<<"Ingrese un numero\n";
	cin>>Num1;
	
	while(Num1 != 0.0)
	{
		if(Num1==10)
		{
			Contador_10++;
			cout<<"Ingrese un nuevo numero\n";
			cout<<"Ingrese un 0.0 para salir\n\n";
			cin>>Num1;
			
		}
		else
		{
			cout<<"Ingrese un nuevo numero\n";
			cout<<"Ingrese un 0.0 para salir\n\n";
			cin>>Num1;
		}
	}
	if(Contador_10==1)
	{
		cout<<"Se han ingresado "<<Contador_10<<" vez el numeros 10.";
	}
	else
	{
		cout<<"Se han ingresado "<<Contador_10<<" veces el numeros 10.";
	}
	
	return 0;
}

