#include "Veiculo.h"
Veiculo::Veiculo(){
	cout<<"Veiculo Creado"<<endl;
}
void Veiculo::setTipo(string Tipo_Veiculo){
	Tipo=Tipo_Veiculo;
}
string Veiculo::getTipo(){
	return Tipo;
}
void Veiculo::setCapacidad(int Capacidad_Veiculo){
	Capacidad=Capacidad_Veiculo;
}
int Veiculo::getCapacidad(){
	return Capacidad;
}
void Veiculo::setPatente(string Patente_Veiculo){
	Patente=Patente_Veiculo;
}
string Veiculo::getPatente(){
	return Patente;
}
void Veiculo::setColor(string Color_Veiculo){
	Color=Color_Veiculo;
}
string Veiculo::getColor(){
	return Color;
}
void Veiculo::PreValores(string Tipo_Veiculo, int Capacidad_Veiculo, string Patente_Veiculo, string Color_Veiculo){
	Tipo=Tipo_Veiculo;
	Capacidad=Capacidad_Veiculo;
	Patente=Patente_Veiculo;
	Color=Color_Veiculo;
}
string Veiculo::toString(){
	string Todo=Tipo+"\t\t"+std::to_string(Capacidad)+"\t"+Patente+"\t\t"+Color+"\n";
	return Todo;
}
