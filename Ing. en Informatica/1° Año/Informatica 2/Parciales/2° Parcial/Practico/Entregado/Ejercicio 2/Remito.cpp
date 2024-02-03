#include "Remito.h"
#define Peso_Ladrillo 0.350
using namespace std;
Remito::Remito(){
	cout<<endl;
}Remito::Remito(int Num, int Cant_Ladri, string Apellido_Remito){
	Numero=Num;
	Cant_Ladrillos=Cant_Ladri;
	Peso_Total=Cant_Ladrillos*Peso_Ladrillo;
	Apellido=Apellido_Remito;
}
void Remito::Set_Apellido_Remito(string Apellido_Remito){
	Apellido=Apellido_Remito;
}
string Remito::Get_Apellido_Remito(){
	return Apellido;
}
void Remito::Set_Numero(int Num){
	Numero=Num;
}
int Remito::Get_Numero_Remito(){
	return Numero;
}
void Remito::Set_Cant_Ladrillos(int Cant_Ladri){
	Cant_Ladrillos=Cant_Ladri;
}
int Remito::Get_Cant_Ladrillos_Remito(){
	return Cant_Ladrillos;
}
void Remito::Set_Peso_Total_Remito(int Cant_Ladri){
	Peso_Total=Cant_Ladri*0.35;
}
float Remito::Get_Peso_Total_Remito(){
	return Peso_Total;
}
void Remito::Cargar_Remito_All(int Num, int Cant_Ladri, string Apellido_Remito){
	Numero=Num;
	Cant_Ladrillos=Cant_Ladri;
	Peso_Total=Cant_Ladrillos*Peso_Ladrillo;
	Apellido=Apellido_Remito;
}
string Remito::toString(){
	string All="El Remito"+std::to_string(Numero)+" a mandar "+Apellido+" hay que mandarle "+std::to_string(Cant_Ladrillos)+", y su pesa"+std::to_string(Peso_Total)+".\n";
	return All;
}
