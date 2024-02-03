#ifndef VEICULO_H
#define VEICULO_H
#include <string>
using namespace std;

class Veiculo{
private:
	string Tipo;
	int Capacidad;
	string Patente;
	string Color;
public:
	Veiculo();
	void setTipo(string Tipo_Veiculo);
	string getTipo();
	
	void setCapacidad(int Capacidad_Veiculo);
	int getCapacidad();
	
	void setPatente(string Patente_Veiculo);
	string getPatente();
	
	void setColor(string Color_Veiculo);
	string getColor();
	
	void PreValores(string Tipo_Veiculo, int Capacidad_Veiculo, string Patente_Veiculo, string Color_Veiculo);
	
	string toString();
};
#endif

