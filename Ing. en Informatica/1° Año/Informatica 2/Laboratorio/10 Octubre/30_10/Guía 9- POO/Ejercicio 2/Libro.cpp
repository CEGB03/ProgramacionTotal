/*
	2. Crear una clase Libro con sus atributos (a elección) y métodos (setter(),
getter(), toString()). Luego, crear una clase Principal en donde se declare un
vector de objetos Libro. Luego llenar este vector con datos y llamar a las
funciones mostrarListado y calcularSumaPrecio.
Hacer el diagrama de clase de Libro.
*/
#include "Libro.h"
Libro::Libro(){
	cout<<"Libro Creado"<<endl;
}
void Libro::setNombre(string Nombre_Libro){
	Nombre=Nombre_Libro;
}
string Libro::getNombre(){
	return Nombre;
}
void Libro::setCant_Pag(int Cant_Pag_Libro){
	Cant_Pag=Cant_Pag_Libro;
}
int Libro::getCant_Pag(){
	return Cant_Pag;
}
void Libro::setPrecio(int Precio_Libro){
	Precio=Precio_Libro;
}
int Libro::getPrecio(){
	return Precio;
}
void Libro::setEditorial(string Editorial_Libro){
	Editorial=Editorial_Libro;
}
string Libro::getEditorial(){
	return Editorial;
}
void Libro::setAutor(string Autor_Libro){
	Autor=Autor_Libro;
}
string Libro::getAutor(){
	return Autor;
}
string Libro::toString(){
	string Todo="El nombre del libro es "+Nombre+" es del escritor "+Autor+", tiene "+std::to_string(Cant_Pag)+" paginas, es de la Editorial "+Editorial+", y su precio es de $"+std::to_string(Precio)+"\n";
	return Todo;
}
