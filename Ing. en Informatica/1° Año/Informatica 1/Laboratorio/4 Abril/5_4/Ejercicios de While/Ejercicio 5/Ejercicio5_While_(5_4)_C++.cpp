#include <iostream>
using namespace std;

int main()
{
	int /*P_Lugar=0, S_Lugar=0, T_Lugar=0,*/ Impugnados=0, Blanco=0;
	int Candi1=0, Candi2=0, Candi3=0;
	
	cout<<"Ingrese la cantidad de Votos del Primer Candidato\n";
	cin>>Candi1;
	cout<<"Ingrese la cantidad de Votos del Segundo Candidato\n";
	cin>>Candi2;
	cout<<"Ingrese la cantidad de Votos del Tercero Candidato\n";
	cin>>Candi3;
	cout<<"Ingrese la cantidad de Votos en Blanco\n";
	cin>>Blanco;
	cout<<"Ingrese la cantidad de Votos Impugnados\n";
	cin>>Impugnados;
	while(Candi1!=Candi2 && Candi1!=Candi3)
	{
		if(Candi1>Candi2 && Candi1>Candi3)
		{
			if(Candi2>Candi3)
			{
				cout<<"El orden de ganadores es el siguiente: "<<endl;
				cout<<"El primer lugar lo tiene el Primer Candidato con "<<Candi1<<" votos a su favor"<<endl;
				cout<<"El segundo lugar lo tiene el Segundo Candidato con "<<Candi2<<" votos a su favor"<<endl;
				cout<<"El tercer lugar lo tiene el Tercer Candidato con "<<Candi3<<" votos a su favor"<<endl;
			}
			else
			{
				cout<<"El orden de ganadores es el siguiente: "<<endl;
				cout<<"El primer lugar lo tiene el Primer Candidato con "<<Candi1<<" votos a su favor"<<endl;
				cout<<"El segundo lugar lo tiene el Tercer Candidato con "<<Candi3<<" votos a su favor"<<endl;
				cout<<"El tercer lugar lo tiene el Segundo Candidato con "<<Candi2<<" votos a su favor"<<endl;
			}
		}
		else
		{
			if(Candi2>Candi1 && Candi2>Candi3)
			{
				if(Candi1>Candi3)
				{
					cout<<"El orden de ganadores es el siguiente: "<<endl;
					cout<<"El primer lugar lo tiene el Segundo Candidato con "<<Candi2<<" votos a su favor"<<endl;
					cout<<"El segundo lugar lo tiene el Primer Candidato con "<<Candi1<<" votos a su favor"<<endl;
					cout<<"El tercer lugar lo tiene el Tercer Candidato con "<<Candi3<<" votos a su favor"<<endl;
				}
				else
				{
					cout<<"El orden de ganadores es el siguiente: "<<endl;
					cout<<"El primer lugar lo tiene el Segundo Candidato con "<<Candi2<<" votos a su favor"<<endl;
					cout<<"El segundo lugar lo tiene el Tercer Candidato con "<<Candi3<<" votos a su favor"<<endl;
					cout<<"El tercer lugar lo tiene el Primer Candidato con "<<Candi1<<" votos a su favor"<<endl;
				}
			}
			else
			{
				
				if(Candi3>Candi1 && Candi3>Candi2)
				{
					if(Candi1>Candi2)
					{
						cout<<"El orden de ganadores es el siguiente: "<<endl;
						cout<<"El primer lugar lo tiene el Tercer Candidato con "<<Candi3<<" votos a su favor"<<endl;
						cout<<"El segundo lugar lo tiene el Primer Candidato con "<<Candi1<<" votos a su favor"<<endl;
						cout<<"El tercer lugar lo tiene el Segundo Candidato con "<<Candi2<<" votos a su favor"<<endl;
					}
					else
					{
						cout<<"El orden de ganadores es el siguiente: "<<endl;
						cout<<"El primer lugar lo tiene el Tercer Candidato con "<<Candi3<<" votos a su favor"<<endl;
						cout<<"El segundo lugar lo tiene el Segundo Candidato con "<<Candi2<<" votos a su favor"<<endl;
						cout<<"El tercer lugar lo tiene el Primer Candidato con "<<Candi1<<" votos a su favor"<<endl;
					}
				}
				
			}
		}
		break;
	}
	cout<<"Los Votos en Blanco son "<<Blanco<<endl;
	cout<<"Los Votos Impugnados son "<<Impugnados<<endl;
	return 0;
}

