#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	int Temp_A=0, Temp_AE=100;
	cout<<"Ingrese la temperatrura del agua";
	cin>>Temp_A;
	if(Temp_A>=Temp_AE)
	{
		cout<<"Arriba del punto de ebullicion del agua";
	}
	else
	{
		cout<<"Abajo del punto de ebullicion del agua";
	}
	return 0;
}

