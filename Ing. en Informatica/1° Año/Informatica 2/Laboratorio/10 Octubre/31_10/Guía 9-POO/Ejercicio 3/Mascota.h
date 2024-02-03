/*
3. Crear una clase Mascota con sus atributos (tipo_animal, raza,
nombre_mascota, persona_resposable_edad) y métodos (setter(), getter() y
toString()). Luego, crear una clase Principal en donde se declare un vector de
objetos Mascota. Luego llenar este vector con datos y llamar a las  funciones
mostrarListado y MostrarListado por tipo_animal.
Hacer el diagrama de clase de Mascota.
*/
#ifndef Mascota_H
#define Mascota_H
#include <string>
using namespace std;
class Mascota{
private:
	string tipo_animal;
	string raza;
	string nombre_mascota;
	int persona_resposable_edad;
public:
	Mascota();
	void settipo_animal(string Tipo_Animal);
	string gettipo_animal();
	void setraza(string Raza);
	string getraza();
	void setnombre_mascota(string Nombre_Mascota);
	string getnombre_mascota();
	void setpersona_resposable_edad(int Edad_Responsable);
	int getpersona_resposable_edad();
	void Cargar_Mascota_All(string Tipo_Animal, string Raza, string Nombre_Mascota, int Edad_Responsable);
	string toString();
};
#endif
