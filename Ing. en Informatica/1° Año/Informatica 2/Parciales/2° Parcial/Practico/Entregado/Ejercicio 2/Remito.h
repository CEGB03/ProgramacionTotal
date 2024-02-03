#ifndef Remito_H
#define Remito_H
#include <string>
using namespace std;
class Remito{
private:
	int Numero;
	int Cant_Ladrillos;
	float Peso_Total;
	string Apellido;
public:
	Remito();
	Remito(int Num, int Cant_Ladri, string Nombre_Remito);
	void Set_Numero(int Num);
	int Get_Numero_Remito();
	void Set_Cant_Ladrillos(int Cant_Ladri);
	int Get_Cant_Ladrillos_Remito();
	void Set_Peso_Total_Remito(int Cant_Ladri);
	float Get_Peso_Total_Remito();
	void Set_Apellido_Remito(string Apellido_Remito);
	string Get_Apellido_Remito();
	void Cargar_Remito_All(int Num, int Cant_Ladri, string Nombre_Remito);
	string toString();
};
#endif
