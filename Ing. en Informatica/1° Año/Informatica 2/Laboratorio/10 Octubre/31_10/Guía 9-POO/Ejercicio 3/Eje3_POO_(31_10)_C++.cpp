/*
	3. Crear una clase Mascota con sus atributos (tipo_animal, raza,
nombre_mascota, persona_resposable_edad) y métodos (setter(), getter() y
toString()). Luego, crear una clase Principal en donde se declare un vector de
objetos Mascota. Luego llenar este vector con datos y llamar a las  funciones
mostrarListado y MostrarListado por tipo_animal.
Hacer el diagrama de clase de Mascota.
*/
#include <iostream>
#include <string>
#include "Mascota.h"
#include "Mascota.cpp"
#define Tam_Class 3
using namespace std;
int Menu();
void Cargar_Mascota(Mascota List_Mascotas[Tam_Class]);
void mostrarListado(Mascota List_Mascotas[Tam_Class]);
void MostrarListado_Tipo(Mascota List_Mascotas[Tam_Class]);
int main(){
	int Op=0;
	cout<<"Usted esta a punto de Cargar "<<Tam_Class<<" Mascotas."<<endl;
	Mascota List_Mascotas[Tam_Class];
	Cargar_Mascota(List_Mascotas);
	
	do{
		Op=Menu();
		switch(Op){
		case 1:
			mostrarListado(List_Mascotas);
			cout<<endl;
			break;
		case 2:
			MostrarListado_Tipo(List_Mascotas);
			cout<<endl;
			break;
		}
	} while(Op!=3);
	cin.get();
	return 0;
}
int Menu(){
	int Op=0;
	cout<<"Bienvenido al menu de opciones, ingrese la opcion numerica que desee."<<endl;
	cout<<"1. Mostrar Lista completa de los animales cargados."<<endl;
	cout<<"2. Mostrar Lista completa de los animales cargados, separados por raza."<<endl;
	cout<<"3. Salir"<<endl;
	cin>>Op;
	cout<<endl;
	return Op;
}
void Cargar_Mascota(Mascota List_Mascotas[Tam_Class]){
	string tipo_animal, raza,  nombre_mascota;
	int persona_resposable_edad=0;
	
	Mascota Aux;
	for(int ii=0 ; ii<Tam_Class ; ii++){
		cout<<"Ingrese el tipo de animal del que esta cargando los datos"<<endl;
		cin>>tipo_animal;
		cout<<"Ingrese la raza del "<<tipo_animal<<endl;
		cin>>raza;
		cout<<"Ingrese el nombre del "<<tipo_animal<<endl;
		cin>>nombre_mascota;
		cout<<"Ingrese la edad de la persona responsable del "<<tipo_animal<<endl;
		cin>>persona_resposable_edad;
		Aux.Cargar_Mascota_All(tipo_animal,raza, nombre_mascota, persona_resposable_edad);
		List_Mascotas[ii]=Aux;
		cout<<endl;
	}	
}
void mostrarListado(Mascota List_Mascotas[Tam_Class]){
	for(int ii=0 ; ii<Tam_Class ; ii++){
		Mascota Aux=List_Mascotas[ii];
		cout<<Aux.toString()<<endl<<endl;
	}
}
void MostrarListado_Tipo(Mascota List_Mascotas[Tam_Class]){
	Mascota Aux[Tam_Class];
	int jj=0;
	string Cadena1, Cadena2;
	for(int ii=0 ; ii<Tam_Class ; ii++){
		Aux[ii]=List_Mascotas[ii];
	}
	for(int ii=0 ; ii<Tam_Class ; ii++){
		cout<<"Se mostraran las mascotas de la siguiente raza: "<<Aux[jj].gettipo_animal()<<endl;
		if(Aux[jj].gettipo_animal()==Aux[ii].gettipo_animal()){
			cout<<Aux[ii].toString()<<endl<<endl;
			jj++;
		}
	}
	cout<<endl;
}

