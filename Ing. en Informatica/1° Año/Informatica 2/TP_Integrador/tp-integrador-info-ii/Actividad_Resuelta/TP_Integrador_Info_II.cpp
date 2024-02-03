#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <new>
#include <cstring>
#include "TP_Class.h"
#include "TP_Class.cpp"
using namespace std;
//		Funciones Basicas Solicitadas
char Menu();
int main(){
	char Menu_Selec=' ', Salida=' ';
	TP_Class TP_Integrador_Class;
	TP_Integrador_Class.SetStructs();
	do{
		Menu_Selec=Menu();
		switch (Menu_Selec){
		case 'a':
		case 'A':
			TP_Integrador_Class.GetStructs();
			break;
		case 'b':
		case 'B':
			TP_Integrador_Class.Temps_Prom_Provincia();
			break;
		case 'c':
		case 'C':
			TP_Integrador_Class.Temps_Prom_City();
			break;
		case 'd':
		case 'D':
			TP_Integrador_Class.Ciudad_Calida_Provinia();
			break;
		case 'e':
		case 'E':
			TP_Integrador_Class.Ciudad_Fria_Provinia();
			break;
		case 'f':
		case 'F':
			TP_Integrador_Class.Dia_Frio_Provinacia();
			break;
		case 'g':
		case 'G':
				TP_Integrador_Class.Dia_Calido_Ciudad();
			break;
		case 'h':
		case 'H':
			TP_Integrador_Class.Cultivo_Piminetos();
			break;
		case 'i':
		case 'I':
			exit (2);
			break;
		default:
			cout<<"Seleccion Invalida..."<<endl;
			break;
		}
		cout<<"�Desa volver al menu de seleccion? S/N  ";
		cin>>Salida;
		}while(Salida=='s' || Salida=='S');
	system("pause");//		Para que no se cierre instantaneamente el archivo..
	cout<<endl;
	return 0;
}
//		Ema
char Menu(){
	char Seleccion=0;
    cout<<"Ingrese segun desee visualizar..."<<endl;
    cout<<"a. Ver todos los datos por Provincias."<<endl;
    cout<<"b. Ver Temperaturas Promedio de cada Provinvia."<<endl;
    cout<<"c. Ver Temperaturas Promedio de cada Ciudad."<<endl;
    cout<<"d. Ver la Ciudad mas Calido de cada Provincia."<<endl;
    cout<<"e. Ver la Ciudad mas Fria de cada Provincia."<<endl;
    cout<<"f. Ver el Dia mas Frio de cada Provincia."<<endl;
    cout<<"g. Ver el dia mas Calido de cada Ciudad."<<endl;
    cout<<"h. Ver la Mejor provincia para plantar Piminetos."<<endl;
	cout<<"i. Salir."<<endl;
    cin>>Seleccion;
	return Seleccion;
}

