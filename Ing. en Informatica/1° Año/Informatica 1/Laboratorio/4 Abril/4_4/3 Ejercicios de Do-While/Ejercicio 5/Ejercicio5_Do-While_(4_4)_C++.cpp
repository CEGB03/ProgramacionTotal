#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int Num1=0, Evaluar=0 /*, Potencia=0, Raiz_Cuadrada=0, Raiz_Cubica=0, Seno=0, Coseno=0, Tangente=0*/;
	double Resultado=0;
	char Respuesta = ' ';
	/*cout<<"Ingrese un numero";
	cin>>Num1;
	cout<<"Ingrese que quiere realizar al numero anteriormente ingreado:\n1 para la Potecia Cuadrada(Elevar al cuadrado).\n2 para la Raiz Cuadrada.\n3 para la Raiz Cubica\n4 para el Seno.\n5 para el Coseno.\n6 para la Tangente\n";
	cin>>Evaluar;*/
	do
	{
		cout<<"Ingrese un numero\n";
		cin>>Num1;
		cout<<"\nIngrese que quiere realizar al numero anteriormente ingreado:\n\n1 para la Potecia Cuadrada (Elevar al cuadrado).\n\n2 para la Raiz Cuadrada.\n\n3 para la Raiz Cubica\n\n4 para el Seno.\n\n5 para el Coseno.\n\n6 para la Tangente\n\n\n";
		cin>>Evaluar;
		
		if(Evaluar < 4)
		{
			if(Evaluar == 1)
			{
				Resultado=pow(Num1,2);
				cout<<"La Potencia Cuadrada de "<<Num1<<" es: "<<Resultado<<endl;
			}
			if(Evaluar == 2)
			{
				Resultado=sqrt(Num1);
				cout<<"La Raiz Cuadrada de "<<Num1<<" es: "<<Resultado<<endl;
			}
			else
			{
				/*Resultado=sqrt(Num1);
				cout<<"La Raiz Cubica de "<<Num1<<" es: "<<Resultado<<endl;*/
			}
		}
		else
		{
			if(Evaluar == 4)
			{
				Resultado=sin(Num1);
				cout<<"El seno de "<<Num1<<" es: "<<Resultado<<endl;
			}
			if(Evaluar == 5)
			{
				Resultado=cos(Num1);
				cout<<"El Coseno de "<<Num1<<" es: "<<Resultado<<endl;
			}
			else
			{
				Resultado=tan(Num1);
				cout<<"La Tangente de "<<Num1<<" es: "<<Resultado<<endl;
			}
		}
		/*switch(Evaluar)
		{
		case 1:
			Resultado=pow(Num1,2);
			cout<<"La Potencia Cuadrada de "<<Num1<<" es: "<<Resultado<<endl;
			break;
		case 2:
			Resultado=sqrt(Num1);
			cout<<"La Raiz Cuadrada de "<<Num1<<" es: "<<Resultado<<endl;
			break;
		case 3:
			Resultado=sqrt(Num1);
			cout<<"La Raiz Cubica de "<<Num1<<" es: "<<Resultado<<endl;
			break;
		case 4:
			Resultado=sin(Num1);
			cout<<"El seno de "<<Num1<<" es: "<<Resultado<<endl;
			break;
		case 5:
			Resultado=cos(Num1);
			cout<<"El Coseno de "<<Num1<<" es: "<<Resultado<<endl;
			break;
		case 6:
			Resultado=tan(Num1);
			cout<<"La Tangente de "<<Num1<<" es: "<<Resultado<<endl;
			break;
		}*/
		
		cout<<"\n¿Desa volver a empezar? \n S/N \n";
		cin>>Respuesta;
	} while(Respuesta =='S' || Respuesta == 's');
	cout<<"Has salido del bucle de claculos";
	return 0;
}
