#include <iostream>
#include <string>
#include "Remito.h"
#include "Remito.cpp"
#define Tam_Class 2
using namespace std;

int Menu();
void Cargar_Remito(Remito List_Remitos[Tam_Class]);
void Mostrar_Listado_Remitos(Remito List_Remitos[Tam_Class]);
int main(){
	cout<<"Usted esta a punto de Cargar "<<Tam_Class<<" Remitos."<<endl;
	Remito List_Remitos[Tam_Class];
	Cargar_Remito(List_Remitos);
	Mostrar_Listado_Remitos(List_Remitos);
	cout<<endl;
	cin.get();
	return 0;
}	
void Cargar_Remito(Remito List_Remitos[Tam_Class]){
	int Numero, Cant_Ladrillos;
	string Apellido;
	
	Remito Aux;
	for(int ii=0 ; ii<Tam_Class ; ii++){
		cout<<"Ingrese el tipo de animal del que esta cargando los datos"<<endl;
		cin>>Numero;
		cout<<"Ingrese la raza del "<<endl;
		cin>>Cant_Ladrillos;
		Aux.Set_Peso_Total_Remito(Cant_Ladrillos);
		cout<<"Ingrese la edad de la persona responsable del "<<endl;
		cin>>Apellido;
		Aux.Cargar_Remito_All(Numero,Cant_Ladrillos, Apellido);
		List_Remitos[ii]=Aux;
		cout<<endl;
	}	
}
void Mostrar_Listado_Remitos(Remito List_Remitos[Tam_Class]){
	for(int ii=0 ; ii<Tam_Class ; ii++){
		Remito Aux=List_Remitos[ii];
		cout<<Aux.toString()<<endl<<endl;
	}
}
