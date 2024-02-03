#include <iostream>
#include <string>
#include "Veiculo.h"
#include "Veiculo.cpp"
#define Tam_Class 2
using namespace std;
void Cargar_Veiculo_Pre(Veiculo List_Veiculos[Tam_Class]);
void Cargar_Veiculo(Veiculo List_Veiculos[Tam_Class]);
void Mostrar_Veiculo(Veiculo List_Veiculos[Tam_Class]);
int main(){
	Veiculo List_Veiculos[Tam_Class];
	int Op=0;
	do{
		cout<<"Ingrese segun desee"<<endl<<"1. Operar con volore pre-establecidos"<<endl<<"2. Operar con volore propios"<<endl<<"3. Salir"<<endl;
		cin>>Op;
		switch(Op){
		case 1:
			Cargar_Veiculo_Pre(List_Veiculos);
			Mostrar_Veiculo(List_Veiculos);
			break;
		case 2:
			Cargar_Veiculo(List_Veiculos);
			Mostrar_Veiculo(List_Veiculos);
			break;
		}
	} while(Op!=3);
	
	
	cin.get();
	return 0;
}
void Cargar_Veiculo_Pre(Veiculo List_Veiculos[Tam_Class]){
	string Tipo[Tam_Class]={"Auto", "Moto"}, Patente[Tam_Class]={"123", "456"}, Color[Tam_Class]={"Rojo", "Verde"};
	int Capacidad[Tam_Class]={5, 2};
	cout<<"Tipo\t"<<"Capacidad\t"<<"Patente\t\t"<<"Color\t"<<endl;
	for(int ii=0 ; ii<Tam_Class ; ii++){
		Veiculo Aux=List_Veiculos[ii];
		Aux.PreValores(Tipo[ii], Capacidad[ii], Patente[ii], Color[ii]);
		List_Veiculos[ii]=Aux;
	}
}
void Cargar_Veiculo(Veiculo List_Veiculos[Tam_Class]){
	Veiculo Aux;
	string Tipo, Patente, Color;
	int Capacidad=0;
	for(int ii=0 ; ii<Tam_Class ; ii++){
		cout<<"Esta cargando los datos del Veiculo "<<ii+1<<endl;
		cout<<endl<<"Ingrese el Tipo de Veiculo: ";
		getline(cin,Tipo, '.');
		Aux.setTipo(Tipo);
		cout<<endl<<"Ingrese la Capacidad de Veiculo: ";
		cin>>Capacidad;
		Aux.setCapacidad(Capacidad);
		cout<<endl<<"Ingrese la Patente de Veiculo: ";
		getline(cin,Patente, '.');
		Aux.setPatente(Patente);
		cout<<endl<<"Ingrese el Color de Veiculo: ";
		getline(cin,Color, '.');
		Aux.setColor(Color);
		
		List_Veiculos[ii]=Aux;
	}
}
void Mostrar_Veiculo(Veiculo List_Veiculos[Tam_Class]){
	for(int ii=0 ; ii<Tam_Class ; ii++){
		Veiculo Aux=List_Veiculos[ii];
		cout<<Aux.toString()<<endl<<endl;
	}
}
