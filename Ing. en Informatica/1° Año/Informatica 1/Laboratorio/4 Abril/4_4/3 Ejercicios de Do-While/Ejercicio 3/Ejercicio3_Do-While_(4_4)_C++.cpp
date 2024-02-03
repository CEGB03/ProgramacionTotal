#include <iostream>
using namespace std;

int main()
{
	int Num1=0, Num2=0, Resultado=0, Resultado_Correcto=0, Contador_B=0, Contador_R_T=0;
	char Respuesta = 'a';
	
	do
	{
		Num1=rand()%9+1;
		Num2=rand()%9+1;
		Resultado_Correcto=Num1*Num2;
		cout<<"Cuanto es "<<Num1<<" x "<<Num2<< "=\n";
		cin>>Resultado;
		if(Resultado_Correcto==Resultado)
		{
			cout<<"El Resultado es correcto\n";
			Contador_B++;
			Contador_R_T++;
		}
		else
		{
			cout<<"El Resultado es incorrecto\n";
			cout<<"El Resultado es correcto es: "<<Resultado_Correcto<<endl;
			Contador_R_T++;
		}
		cout<<"¿Desa continuar? \n S/N \n";
		cin>>Respuesta;
	} while(Respuesta =='S' || Respuesta == 's');
	
	cout<<"Usted ha salido de la sesion, ha respondido "<<Contador_R_T<<" respuesta en total, de las cuales "<<Contador_B<<" fueron correctas";
	return 0;
}
