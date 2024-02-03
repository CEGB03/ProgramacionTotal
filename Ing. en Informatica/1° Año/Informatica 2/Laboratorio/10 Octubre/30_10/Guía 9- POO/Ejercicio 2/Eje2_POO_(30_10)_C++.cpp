/*
	2. Crear una clase Libro con sus atributos (a elección) y métodos (setter(),
getter(), toString()). Luego, crear una clase Principal en donde se declare un
vector de objetos Libro. Luego llenar este vector con datos y llamar a las
funciones mostrarListado y calcularSumaPrecio.
Hacer el diagrama de clase de Libro.
*/
#include <iostream>
#include <string>
#include "Libro.h"
#include "Libro.cpp"
#define Tam_Class 1
using namespace std;
void Cargar_Libros(Libro List_Libros[Tam_Class]);
void mostrarListado(Libro List_Libros[Tam_Class]);
int calcularSumaPrecio(Libro List_Libros[Tam_Class]);
int main(){
	Libro List_Libros[Tam_Class];
	Cargar_Libros(List_Libros);
	mostrarListado(List_Libros);
	cout<<"La suma de los precios de los "<<Tam_Class<<" Libros es de "<<calcularSumaPrecio(List_Libros)<<endl;
	cin.get();
	return 0;
}
void Cargar_Libros(Libro List_Libros[Tam_Class]){
	Libro Aux;
	string Nombre, Editorial, Autor;
	int Precio=0,  Cant_Pag=0;
	for(int ii=0 ; ii<Tam_Class ; ii++){
		cout<<"Esta cargando los datos del Libro "<<ii+1<<endl;
		cout<<endl<<"Ingrese el Nombre del Libro: ";
		getline(cin,Nombre, '.');
		cout<<endl<<"Ingrese el Autor del Libro: ";
		getline(cin,Autor, '.');
		cout<<endl<<"Ingrese la Cantidad de paginas del Libro: ";
		cin>>Cant_Pag;
		cout<<endl<<"Ingrese la Editorial del Libro: ";
		getline(cin,Editorial, '.');
		cout<<endl<<"Ingrese el Precio del Libro: ";
		cin>>Precio;
		Aux.setNombre(Nombre);
		Aux.setAutor(Autor);
		Aux.setCant_Pag(Cant_Pag);
		Aux.setEditorial(Editorial);
		Aux.setPrecio(Precio);
		
		List_Libros[ii]=Aux;
	}
	cout<<endl;
}
void mostrarListado(Libro List_Libros[Tam_Class]){
	for(int ii=0 ; ii<Tam_Class ; ii++){
		Libro Aux=List_Libros[ii];
		cout<<Aux.toString()<<endl<<endl;
	}
}
int calcularSumaPrecio(Libro List_Libros[Tam_Class]){
	int Suma=0;
	for(int ii=0 ; ii<Tam_Class ; ii++){
		Libro Aux=List_Libros[ii];
		Suma+=Aux.getPrecio();
	}
	return Suma;
}
