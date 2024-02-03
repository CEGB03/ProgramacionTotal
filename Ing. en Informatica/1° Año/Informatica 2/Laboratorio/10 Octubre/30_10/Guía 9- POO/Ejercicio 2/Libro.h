/*
	2. Crear una clase Libro con sus atributos (a elección) y métodos (setter(),
getter(), toString()). Luego, crear una clase Principal en donde se declare un
vector de objetos Libro. Luego llenar este vector con datos y llamar a las
funciones mostrarListado y calcularSumaPrecio.
Hacer el diagrama de clase de Libro.
*/
#ifndef Libro_H
#define Libro_H
#include <string>
using namespace std;
class Libro{
private:
	string Nombre;
	int Cant_Pag;
	string Editorial;
	string Autor;
	int Precio;
public:
	Libro();
	void setNombre(string Nombre_Libros);
	string getNombre();
	void setCant_Pag(int Cant_Pag_Libros);
	int getCant_Pag();
	void setPrecio(int Precio_Libros);
	int getPrecio();
	void setEditorial(string Editorial_Libros);
	string getEditorial();
	void setAutor(string Autor_Libros);
	string getAutor();
	string toString();
};
#endif
