/*
	3. Crear una clase Mascota con sus atributos (tipo_animal, raza,
nombre_mascota, persona_resposable_edad) y métodos (setter(), getter() y
toString()). Luego, crear una clase Principal en donde se declare un vector de
objetos Mascota. Luego llenar este vector con datos y llamar a las  funciones
mostrarListado y MostrarListado por tipo_animal.
Hacer el diagrama de clase de Mascota.
*/
#include "Mascota.h"
Mascota::Mascota(){
	cout<<endl;
}
void Mascota::settipo_animal(string Tipo_Animal){
	tipo_animal=Tipo_Animal;
}
string Mascota::gettipo_animal(){
	return tipo_animal;
}
void Mascota::setraza(string Raza){
	raza=Raza;
}
string Mascota::getraza(){
	return raza;
}
void Mascota::setnombre_mascota(string Nombre_Mascota){
	nombre_mascota=Nombre_Mascota;
}
string Mascota::getnombre_mascota(){
	return nombre_mascota;
}
void Mascota::setpersona_resposable_edad(int Edad_Responsable){
	persona_resposable_edad=Edad_Responsable;
}
int Mascota::getpersona_resposable_edad(){
	return persona_resposable_edad;
}
void Mascota::Cargar_Mascota_All(string Tipo_Animal, string Raza, string Nombre_Mascota, int Edad_Responsable){
	tipo_animal=Tipo_Animal;
	raza=Raza;
	nombre_mascota=Nombre_Mascota;
	persona_resposable_edad=Edad_Responsable;
}
string Mascota::toString(){
	string All="El "+tipo_animal+" de raza "+raza+" tiene de nombre "+nombre_mascota+", y su responsable tiene "+std::to_string(persona_resposable_edad)+" años.\n";
	return All;
}
