#include <iostream>
using namespace std;

int main()
{
	int ii=0, jj=0, Num_X=0, Num_Y=0, Repes=0, Cont_C1=0, Cont_C2=0, Cont_C3=0, Cont_C4=0;
	
	cout<<"¿Cuantas coordenadas x ; y va a ingresar?\nDijite el numero a continuacion:";
	cin>>Repes;
	
	
	for(ii=0 ; ii<Repes ; ii++)
	{
		if(ii==0)
		{
			cout<<"Ingrese la primer coordenada en X\n";
			cin>>Num_X;
			cout<<"Ingrese la primer coordenada en Y\n";
			cin>>Num_Y;
			//ii++;
		}
		else
		{
			if(ii<Repes)
			{
				cout<<"Ingrese la proxima coordenada en X\n";
				cin>>Num_X;
				cout<<"Ingrese la proxima coordenada en Y\n";
				cin>>Num_Y;
			}
		}
		if(Num_X>0)
		{
			if(Num_Y>0)
			{
				cout<<"\nLas coordenadas se encuentran en el primer cuadrante\n";
				Cont_C1++;
			}
			else
			{
				cout<<"\nLas coordenadas se encuentran en el cuarto cuadrante\n";
				Cont_C4++;
			}
		}
		else
		{
			if(Num_Y>0)
			{
				cout<<"\nLas coordenadas se encuentran en el segundo cuadrante\n";
				Cont_C2++;
			}
			else
			{
				cout<<"\nLas coordenadas se encuentran en el tercer cuadrante\n";
				Cont_C3++;
			}
		}
	}
	
	cout<<"Usted ha ingresado "<<Cont_C1<<" coordenadas en el primer cuadrante\n";
	cout<<"Usted ha ingresado "<<Cont_C2<<" coordenadas en el segundo cuadrante\n";
	cout<<"Usted ha ingresado "<<Cont_C3<<" coordenadas en el tercero cuadrante\n";
	cout<<"Usted ha ingresado "<<Cont_C4<<" coordenadas en el cuarto cuadrante\n";
	return 0;
}

