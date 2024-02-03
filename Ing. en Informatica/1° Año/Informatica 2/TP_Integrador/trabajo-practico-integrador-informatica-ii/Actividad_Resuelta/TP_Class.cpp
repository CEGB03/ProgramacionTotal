#include "TP_Class.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <new>
#define Tam_Provincias 3
using namespace std;
TP_Class::TP_Class (){
}
TP_Class::~TP_Class (){
}
void TP_Class::SetStructs(){
	struct city *New_city=NULL, *Temp=NULL;
	int IdProvincia=0, Ciudades=0;
	//TP_Integrador=fopen("data_set - copia.txt", "r"); //		Archivo de pruebas...
	TP_Integrador=fopen("data_set.txt", "r");
	if(TP_Integrador==NULL){
		cout<<"No se pudo abrir el archivo"<<endl;
		exit (10);
	}
	else{
		cout<<"Se abrio con exito el archivo"<<endl;
	}
	while(!feof(TP_Integrador)){
		New_city=new(city);
		if(New_city==NULL){
			cout<<"No se pudo reservar memoria"<<endl;
			exit (10);
		}
		New_city->netx=NULL;
		fscanf(TP_Integrador, "%d %d %s %f %f %d %d %d %d\n", &New_city->cityId, &IdProvincia, &New_city->city_name, &New_city->m.temp, &New_city->m.hum, &New_city->m.time.hh, &New_city->m.time.mm, &New_city->m.time.day, &New_city->m.time.month);
		switch(IdProvincia){
		case 1:
			if(Head_Cordoba==NULL){
				Head_Cordoba= New_city;
			}
			else{
				Temp= Head_Cordoba;
				while(Temp->netx!=NULL){
					Temp=Temp->netx;
				}
				Temp->netx=New_city;
			}
			Ciudades++;
			break;
		case 2:
			if(Head_Santa_Fe==NULL){
				Head_Santa_Fe= New_city;
			}
			else{
				Temp=Head_Santa_Fe;
				while(Temp->netx!=NULL)
					Temp=Temp->netx;
				Temp->netx=New_city;
			}
			Ciudades++;
			break;
		case 3:
			if(Head_Mendoza==NULL){
				Head_Mendoza= New_city;
			}
			else{
				Temp=Head_Mendoza;
				while(Temp->netx!=NULL)
					Temp=Temp->netx;
				Temp->netx=New_city;
				
			}
			Ciudades++;
			break;
		}
		
	}
	cout<<"Recuperaron "<<Ciudades<<" Ciudades"<<endl<<endl;
	fclose(TP_Integrador);
}
void TP_Class::GetStructs(){
	struct city *Temp= NULL;
	int Id_Aux=90, Muestra=0;
	cout<<"�De que provineica desea ver los datos?"<<endl;
	cout<<"1. Ver datos de Cordoba."<<endl;
	cout<<"2. Ver datos de Santa Fe."<<endl;
	cout<<"3. Ver datos de Mendoza."<<endl;
	cout<<"4. Ver datos de todas las Provincias"<<endl;
	cin>>Muestra;
	switch(Muestra){
	case 1:
		//      Muestra Cordoba
		if(Head_Cordoba==NULL)
			cout<<"No hay datos de Cordoba"<<endl;
		else{
			Temp= Head_Cordoba;
			cout<<"Estos son los datos de las ciudades de Cordoba"<<endl;
			while (Temp!=NULL){
				if(Id_Aux!=Temp->cityId){
					cout<<"\tA continuacion se mostraran los datos de la ciudad: "<<Temp->city_name<<endl;
					cout<<"\t\tSu identificador es: "<<Temp->cityId<<endl;
				}
				cout<<"\t\tEl dia "<<Temp->m.time.day<<" del mes "<<Temp->m.time.month<<" a las "<<Temp->m.time.hh<<":"<<Temp->m.time.mm<<"hs, su temperatura era de "<<Temp->m.temp<<", con una humedad de "<<Temp->m.hum<<"."<<endl;
				
				Id_Aux=Temp->cityId;
				Temp=Temp->netx;
			}
		}
		break;
	case 2:
		//      Muestra Santa Fe
		if(Head_Santa_Fe==NULL)
			cout<<"No hay datos de Santa Fe"<<endl;
		else{
			Temp= Head_Santa_Fe;
			cout<<"Estos son los datos de las ciudades de Santa Fe"<<endl;
			while (Temp!=NULL){
				if(Id_Aux!=Temp->cityId){
					cout<<"\tA continuacion se mostraran los datos de la ciudad: "<<Temp->city_name<<endl;
					cout<<"\t\tSu identificador es: "<<Temp->cityId<<endl;
				}
				cout<<"\t\tEl dia "<<Temp->m.time.day<<" del mes "<<Temp->m.time.month<<" a las "<<Temp->m.time.hh<<":"<<Temp->m.time.mm<<"hs, su temperatura era de "<<Temp->m.temp<<", con una humedad de "<<Temp->m.hum<<"."<<endl;
				
				Id_Aux=Temp->cityId;
				Temp=Temp->netx;
			}
		}
		break;
	case 3:
		//      Muestra Mendoza
		if(Head_Mendoza==NULL)
			cout<<"No hay datos de Mendoza"<<endl;
		else{
			Temp= Head_Mendoza;
			cout<<"Estos son los datos de las ciudades de Mendoza"<<endl;
			while (Temp!=NULL){
				if(Id_Aux!=Temp->cityId){
					cout<<"\tA continuacion se mostraran los datos de la ciudad: "<<Temp->city_name<<endl;
					cout<<"\t\tSu identificador es: "<<Temp->cityId<<endl;
				}
				cout<<"\t\tEl dia "<<Temp->m.time.day<<" del mes "<<Temp->m.time.month<<" a las "<<Temp->m.time.hh<<":"<<Temp->m.time.mm<<"hs, su temperatura era de "<<Temp->m.temp<<", con una humedad de "<<Temp->m.hum<<"."<<endl;
				
				Id_Aux=Temp->cityId;
				Temp=Temp->netx;
			}
		}
		break;
	case 4:
		//      Muestra Cordoba
		if(Head_Cordoba==NULL)
			cout<<"No hay datos de Cordoba"<<endl;
		else{
			Temp= Head_Cordoba;
			cout<<"Estos son los datos de las ciudades de Cordoba"<<endl;
			while (Temp!=NULL){
				if(Id_Aux!=Temp->cityId){
					cout<<"\tA continuacion se mostraran los datos de la ciudad: "<<Temp->city_name<<endl;
					cout<<"\t\tSu identificador es: "<<Temp->cityId<<endl;
				}
				cout<<"\t\tEl dia "<<Temp->m.time.day<<" del mes "<<Temp->m.time.month<<" a las "<<Temp->m.time.hh<<":"<<Temp->m.time.mm<<"hs, su temperatura era de "<<Temp->m.temp<<", con una humedad de "<<Temp->m.hum<<"."<<endl;
				
				Id_Aux=Temp->cityId;
				Temp=Temp->netx;
			}
		}
		//      Muestra Santa Fe
		if(Head_Santa_Fe==NULL)
			cout<<"No hay datos de Santa Fe"<<endl;
		else{
			Temp= Head_Santa_Fe;
			cout<<"Estos son los datos de las ciudades de Santa Fe"<<endl;
			while (Temp!=NULL){
				if(Id_Aux!=Temp->cityId){
					cout<<"\tA continuacion se mostraran los datos de la ciudad: "<<Temp->city_name<<endl;
					cout<<"\t\tSu identificador es: "<<Temp->cityId<<endl;
				}
				cout<<"\t\tEl dia "<<Temp->m.time.day<<" del mes "<<Temp->m.time.month<<" a las "<<Temp->m.time.hh<<":"<<Temp->m.time.mm<<"hs, su temperatura era de "<<Temp->m.temp<<", con una humedad de "<<Temp->m.hum<<"."<<endl;
				
				Id_Aux=Temp->cityId;
				Temp=Temp->netx;
			}
		}
		//      Muestra Mendoza
		if(Head_Mendoza==NULL)
			cout<<"No hay datos de Mendoza"<<endl;
		else{
			Temp= Head_Mendoza;
			cout<<"Estos son los datos de las ciudades de Mendoza"<<endl;
			while (Temp!=NULL){
				if(Id_Aux!=Temp->cityId){
					cout<<"\tA continuacion se mostraran los datos de la ciudad: "<<Temp->city_name<<endl;
					cout<<"\t\tSu identificador es: "<<Temp->cityId<<endl;
				}
				cout<<"\t\tEl dia "<<Temp->m.time.day<<" del mes "<<Temp->m.time.month<<" a las "<<Temp->m.time.hh<<":"<<Temp->m.time.mm<<"hs, su temperatura era de "<<Temp->m.temp<<", con una humedad de "<<Temp->m.hum<<"."<<endl;
				
				Id_Aux=Temp->cityId;
				Temp=Temp->netx;
			}
		}
		break;
	}
	
}
void TP_Class::Temps_Prom_Provincia(){
	struct city *Temp= NULL;
	Promedio_Cordoba=0;
	Temps_Cordoba=0;
	Contador_Cordoba=0;
	Promedio_Santa_Fe=0;
	Temps_Santa_Fe=0;
	Contador_Santa_Fe=0;
	Promedio_Mendoza=0;
	Temps_Mendoza=0;
	Contador_Mendoza=0;
	//      Muestra Cordoba
	if(Head_Cordoba==NULL)
		cout<<"No hay datos de Cordoba"<<endl;
	else{
		Temp= Head_Cordoba;
		while (Temp!=NULL){
			Temps_Cordoba+=Temp->m.temp;
			Contador_Cordoba++;
			Temp=Temp->netx;
		}
	}
	//      Muestra Santa Fe
	if(Head_Santa_Fe==NULL)
		cout<<"No hay datos de Santa Fe"<<endl;
	else{
		Temp= Head_Santa_Fe;
		while (Temp!=NULL){
			Contador_Santa_Fe++;
			Temps_Santa_Fe+=Temp->m.temp;
			Temp=Temp->netx;
		}
	}
	//      Muestra Mendoza
	if(Head_Mendoza==NULL)
		cout<<"No hay datos de Mendoza"<<endl;
	else{
		Temp= Head_Mendoza;
		while (Temp!=NULL){
			Temps_Mendoza+=Temp->m.temp;
			Contador_Mendoza++;
			Temp=Temp->netx;
		}
	}
	if(Contador_Cordoba!=0){
		Promedio_Cordoba=Temps_Cordoba/Contador_Cordoba;
		cout<<"La temperatura promedio en Cordoba es de "<<Promedio_Cordoba<<endl;
	}
	else{
		cout<<"No hay datos para calclar el promedio de Cordoba"<<endl;
	}
	if(Contador_Santa_Fe!=0){
		Promedio_Santa_Fe=Temps_Santa_Fe/Contador_Santa_Fe;
		cout<<"La temperatura promedio en Santa Fe es de "<<Promedio_Santa_Fe<<endl;
	}
	else{
		cout<<"No hay datos para calclar el promedio de Santa Fe"<<endl;
	}
	if(Contador_Mendoza!=0){
		Promedio_Mendoza=Temps_Mendoza/Contador_Mendoza;
		cout<<"La temperatura promedio en Mendoza es de "<<Promedio_Mendoza<<endl;
	}
	else{
		cout<<"No hay datos para calclar el promedio de Mendoza"<<endl;
	}
	cout<<endl<<endl;
}
void TP_Class::Temps_Prom_City(){
	struct city *Aux= NULL;
	int  IdAux=0;
	char Nombre_Ciudad[50]="Ninguna";
	//      Muestra Cordoba
	if(Head_Cordoba==NULL)
		cout<<"No hay datos de Cordoba"<<endl;
	else{
		Aux= Head_Cordoba;
		Contador_Ciudades_Cordoba=0;
		Temps_Ciudades_Cordoba=0;
		IdAux= Aux->cityId;
		strcpy(Nombre_Ciudad, Aux->city_name);
		while (Aux!=NULL){
			if(IdAux==Aux->cityId){
				Contador_Ciudades_Cordoba++;
				Temps_Ciudades_Cordoba+= Aux->m.temp;
			}else{
				Promedio_Ciudades_Cordoba=Temps_Ciudades_Cordoba/Contador_Ciudades_Cordoba;
				if(strcmp(Nombre_Ciudad,Aux->city_name)!=0)
					cout<<"La Temperatura promedio en "<<Nombre_Ciudad<<" es de "<<Promedio_Ciudades_Cordoba<<" con un total de "<<Contador_Ciudades_Cordoba<<" muestras de la ciudad."<<endl<<endl;
				IdAux++;
				Temps_Ciudades_Cordoba=Aux->m.temp;
				Contador_Ciudades_Cordoba=1;
				
			}
			strcpy(Nombre_Ciudad, Aux->city_name);
			Aux=Aux->netx;
		}
		Promedio_Ciudades_Cordoba=Temps_Ciudades_Cordoba/Contador_Ciudades_Cordoba;
		cout<<"La Temperatura promedio en "<<Nombre_Ciudad<<" es de "<<Promedio_Ciudades_Cordoba<<" con un total de "<<Contador_Ciudades_Cordoba<<" muestras de la ciudad."<<endl<<endl;
		
	}
	//      Muestra Santa Fe
	if(Head_Santa_Fe==NULL)
		cout<<"No hay datos de Santa Fe"<<endl;
	else{
		Aux= Head_Santa_Fe;
		Contador_Ciudades_Santa_Fe=0;
		Temps_Ciudades_Santa_Fe=0;
		IdAux= Aux->cityId;
		strcpy(Nombre_Ciudad, Aux->city_name);
		while (Aux!=NULL){
			if(IdAux==Aux->cityId){
				Contador_Ciudades_Santa_Fe++;
				Temps_Ciudades_Santa_Fe+= Aux->m.temp;
			}else{
				Promedio_Ciudades_Santa_Fe=Temps_Ciudades_Cordoba/Contador_Ciudades_Santa_Fe;
				if(strcmp(Nombre_Ciudad,Aux->city_name)!=0)
					cout<<"La Temperatura promedio en "<<Nombre_Ciudad<<" es de "<<Promedio_Ciudades_Santa_Fe<<" con un total de "<<Contador_Ciudades_Santa_Fe<<" muestras de la ciudad."<<endl<<endl;
				IdAux++;
				Temps_Ciudades_Santa_Fe=Aux->m.temp;
				Contador_Ciudades_Santa_Fe=1;
				
			}
			strcpy(Nombre_Ciudad, Aux->city_name);
			Aux=Aux->netx;
		}
		Promedio_Ciudades_Santa_Fe=Temps_Ciudades_Santa_Fe/Contador_Ciudades_Santa_Fe;
		cout<<"La Temperatura promedio en "<<Nombre_Ciudad<<" es de "<<Promedio_Ciudades_Santa_Fe<<" con un total de "<<Contador_Ciudades_Santa_Fe<<" muestras de la ciudad."<<endl<<endl;
		
	}
	//      Muestra Mendoza
	if(Head_Mendoza==NULL)
		cout<<"No hay datos de Mendoza"<<endl;
	else{
		Aux= Head_Mendoza;
		Contador_Ciudades_Mendoza=0;
		Temps_Ciudades_Mendoza=0;
		IdAux= Aux->cityId;
		strcpy(Nombre_Ciudad, Aux->city_name);
		while (Aux!=NULL){
			if(IdAux==Aux->cityId){
				Contador_Ciudades_Mendoza++;
				Temps_Ciudades_Mendoza+= Aux->m.temp;
			}else{
				Promedio_Ciudades_Mendoza=Temps_Ciudades_Mendoza/Contador_Ciudades_Mendoza;
				if(strcmp(Nombre_Ciudad,Aux->city_name)!=0)
					cout<<"La Temperatura promedio en "<<Nombre_Ciudad<<" es de "<<Promedio_Ciudades_Mendoza<<" con un total de "<<Contador_Ciudades_Mendoza<<" muestras de la ciudad."<<endl<<endl;
				IdAux++;
				Temps_Ciudades_Mendoza=Aux->m.temp;
				Contador_Ciudades_Mendoza=1;
				
			}
			strcpy(Nombre_Ciudad, Aux->city_name);
			Aux=Aux->netx;
		}
		Promedio_Ciudades_Mendoza=Temps_Ciudades_Mendoza/Contador_Ciudades_Mendoza;
		cout<<"La Temperatura promedio en "<<Nombre_Ciudad<<" es de "<<Promedio_Ciudades_Mendoza<<" con un total de "<<Contador_Ciudades_Mendoza<<" muestras de la ciudad."<<endl<<endl;
		
	}
}
void TP_Class::Cultivo_Piminetos(){
	Temps_Prom_Provincia();
	float Mejor_Provincia=0, Array_Proms[3]={Promedio_Cordoba, Promedio_Santa_Fe, Promedio_Mendoza};
	int ii=0, Aux=0, Medir=0;
	char Mejor_Provincia_Nom[50]="Ninguna";
	static const char *Provincias_Nom[3]={"Cordoba", "Santa Fe", "Mendoza"};
	if(Promedio_Cordoba==0)
		cout<<"La temperatura de Cordoba es "<<Promedio_Cordoba<<endl;
	if(Promedio_Santa_Fe==0)
		cout<<"La temperatura de Santa Fe es "<<Promedio_Santa_Fe<<endl;
	if(Promedio_Mendoza==0)
		cout<<"La temperatura de Mendoza es "<<Promedio_Mendoza<<endl;
	Mejor_Provincia=Array_Proms[0];
	strcpy(Mejor_Provincia_Nom, Provincias_Nom[0]);
	for (ii=0; ii<Tam_Provincias; ii++){
		if((Array_Proms[ii]-23)==0){
			Mejor_Provincia=Array_Proms[ii];
			strcpy(Mejor_Provincia_Nom, Provincias_Nom[ii]);
			Medir=1;
			break;
		}
		else{
			for (Aux = 0 ; Aux <=(Tam_Provincias*5) ; Aux++){
				if(  ((Array_Proms[ii]-23)<Aux) && ((Array_Proms[ii]-23)>(-Aux))   ){
					if(Mejor_Provincia>Array_Proms[ii]){
						Mejor_Provincia=Array_Proms[ii];
						strcpy(Mejor_Provincia_Nom, Provincias_Nom[ii]);
						Medir=1;
					}
				}
			}
		}
		if (Medir==0 && (Array_Proms[ii]>30)){
			if(Mejor_Provincia>Array_Proms[ii]){
				Mejor_Provincia=Array_Proms[ii];
				strcpy(Mejor_Provincia_Nom, Provincias_Nom[ii]);
			}
		}
		if (Medir==0 && (Array_Proms[ii]<20)){
			if(Mejor_Provincia<Array_Proms[ii]){
				Mejor_Provincia=Array_Proms[ii];
				strcpy(Mejor_Provincia_Nom, Provincias_Nom[ii]);
			}
		}
		
	}
	if(strcmp(Mejor_Provincia_Nom,"Ninguna")!=0)
		cout<<"La mejor provincia para plantar piminetos es "<<Mejor_Provincia_Nom<<". Con una temperatura de "<<Mejor_Provincia<<endl;
	else
		cout<<Mejor_Provincia_Nom<<" provincia es apta para para plantar piminetos."<<endl;
}
void TP_Class::Dia_Frio_Provinacia(){
	int Dia_M_Frio=0;
	float Temp_Dia_M_Frio=0;
	struct city *Aux=NULL;
	//      Muestra Cordoba
	if(Head_Cordoba==NULL)
		cout<<"No hay datos de Cordoba"<<endl;
	else{
		Aux= Head_Cordoba;
		Dia_M_Frio=Aux->m.time.day;
		Temp_Dia_M_Frio=Aux->m.temp;
		while (Aux!=NULL){
			if((Temp_Dia_M_Frio)>(Aux->m.temp)){
				Dia_M_Frio=Aux->m.time.day;
				Temp_Dia_M_Frio=Aux->m.temp;
			}
			Aux=Aux->netx;
		}
		cout<<"\tEl dia "<<Dia_M_Frio<<" fue el mas frio de Cordoba, con una temperatura de "<<Temp_Dia_M_Frio<<"."<<endl;
	}
	//      Muestra Santa Fe
	if(Head_Santa_Fe==NULL)
		cout<<"No hay datos de Santa Fe"<<endl;
	else{
		Aux= Head_Santa_Fe;
		Dia_M_Frio=Aux->m.time.day;
		Temp_Dia_M_Frio=Aux->m.temp;
		while (Aux!=NULL){
			if((Temp_Dia_M_Frio)>(Aux->m.temp)){
				Dia_M_Frio=Aux->m.time.day;
				Temp_Dia_M_Frio=Aux->m.temp;
			}
			Aux=Aux->netx;
		}
		cout<<"\tEl dia "<<Dia_M_Frio<<" fue el mas frio de Santa Fe, con una temperatura de "<<Temp_Dia_M_Frio<<"."<<endl;
	}
	//      Muestra Mendoza
	if(Head_Mendoza==NULL)
		cout<<"No hay datos de Mendoza"<<endl;
	else{
		Aux= Head_Mendoza;
		Dia_M_Frio=Aux->m.time.day;
		Temp_Dia_M_Frio=Aux->m.temp;
		while (Aux!=NULL){
			if((Temp_Dia_M_Frio)>(Aux->m.temp)){
				Dia_M_Frio=Aux->m.time.day;
				Temp_Dia_M_Frio=Aux->m.temp;
			}
			Aux=Aux->netx;
		}
		cout<<"\tEl dia "<<Dia_M_Frio<<" fue el mas frio de Mendoza, con una temperatura de "<<Temp_Dia_M_Frio<<"."<<endl;
	}
		
}
void TP_Class::Dia_Calido_Ciudad(){
	int Dia_M_Calido_Ciudad=0, IdAux=0;
	float Temp_Dia_M_Calido_Ciudad=0;
	char Nombre_Ciudad[50]="Ninguna";
	struct city *Aux=NULL;
	//      Muestra Cordoba
	if(Head_Cordoba==NULL)
		cout<<"No hay datos de Cordoba"<<endl;
	else{
		Aux= Head_Cordoba;
		Dia_M_Calido_Ciudad=Aux->m.time.day;
		Temp_Dia_M_Calido_Ciudad=Aux->m.temp;
		IdAux= Aux->cityId;
		strcpy(Nombre_Ciudad, Aux->city_name);
		while (Aux!=NULL){
			if(IdAux==Aux->cityId){
				if((Temp_Dia_M_Calido_Ciudad)<(Aux->m.temp)){
					Dia_M_Calido_Ciudad=Aux->m.time.day;
					Temp_Dia_M_Calido_Ciudad=Aux->m.temp;
				}
			}else{
				if(strcmp(Nombre_Ciudad,Aux->city_name)!=0)
					cout<<"El dia "<<Dia_M_Calido_Ciudad<<" fue el mas calido de "<<Nombre_Ciudad<<", con una temperatura de "<<Temp_Dia_M_Calido_Ciudad<<"."<<endl<<endl;
				
				Dia_M_Calido_Ciudad=Aux->m.time.day;
				Temp_Dia_M_Calido_Ciudad=Aux->m.temp;
			}
			strcpy(Nombre_Ciudad, Aux->city_name);
			IdAux++;
			Aux=Aux->netx;
		}
		cout<<"El dia "<<Dia_M_Calido_Ciudad<<" fue el mas calido de "<<Nombre_Ciudad<<", con una temperatura de "<<Temp_Dia_M_Calido_Ciudad<<"."<<endl<<endl;
		
	}
	//      Muestra Santa Fe
	if(Head_Santa_Fe==NULL)
		cout<<"No hay datos de Santa Fe"<<endl;
	else{
		Aux= Head_Santa_Fe;
		Dia_M_Calido_Ciudad=Aux->m.time.day;
		Temp_Dia_M_Calido_Ciudad=Aux->m.temp;
		IdAux= Aux->cityId;
		strcpy(Nombre_Ciudad, Aux->city_name);
		while (Aux!=NULL){
			if(IdAux==Aux->cityId){
				if((Temp_Dia_M_Calido_Ciudad)<(Aux->m.temp)){
					Dia_M_Calido_Ciudad=Aux->m.time.day;
					Temp_Dia_M_Calido_Ciudad=Aux->m.temp;
				}
			}else{
				if(strcmp(Nombre_Ciudad,Aux->city_name)!=0)
					cout<<"El dia "<<Dia_M_Calido_Ciudad<<" fue el mas calido de "<<Nombre_Ciudad<<", con una temperatura de "<<Temp_Dia_M_Calido_Ciudad<<"."<<endl<<endl;
				
				Dia_M_Calido_Ciudad=Aux->m.time.day;
				Temp_Dia_M_Calido_Ciudad=Aux->m.temp;
			}
			strcpy(Nombre_Ciudad, Aux->city_name);
			IdAux++;
			Aux=Aux->netx;
		}
		cout<<"El dia "<<Dia_M_Calido_Ciudad<<" fue el mas calido de "<<Nombre_Ciudad<<", con una temperatura de "<<Temp_Dia_M_Calido_Ciudad<<"."<<endl<<endl;
		
	}
	//      Muestra Mendoza
	if(Head_Mendoza==NULL)
		cout<<"No hay datos de Mendoza"<<endl;
	else{
		Aux= Head_Mendoza;
		Dia_M_Calido_Ciudad=Aux->m.time.day;
		Temp_Dia_M_Calido_Ciudad=Aux->m.temp;
		IdAux= Aux->cityId;
		strcpy(Nombre_Ciudad, Aux->city_name);
		while (Aux!=NULL){
			if(IdAux==Aux->cityId){
				if((Temp_Dia_M_Calido_Ciudad)<(Aux->m.temp)){
					Dia_M_Calido_Ciudad=Aux->m.time.day;
					Temp_Dia_M_Calido_Ciudad=Aux->m.temp;
				}
			}else{
				if(strcmp(Nombre_Ciudad,Aux->city_name)!=0)
					cout<<"El dia "<<Dia_M_Calido_Ciudad<<" fue el mas calido de "<<Nombre_Ciudad<<", con una temperatura de "<<Temp_Dia_M_Calido_Ciudad<<"."<<endl<<endl;
				
				Dia_M_Calido_Ciudad=Aux->m.time.day;
				Temp_Dia_M_Calido_Ciudad=Aux->m.temp;
			}
			strcpy(Nombre_Ciudad, Aux->city_name);
			IdAux++;
			Aux=Aux->netx;
		}
		cout<<"El dia "<<Dia_M_Calido_Ciudad<<" fue el mas calido de "<<Nombre_Ciudad<<", con una temperatura de "<<Temp_Dia_M_Calido_Ciudad<<"."<<endl<<endl;
		
	}
		
}
void TP_Class::Ciudad_Fria_Provinia(){
	int Ciudad_M_Fria=0;
	float Temp_Ciudad_M_Fria=0;
	char Nombre_Ciudad[50]="Ninguna";
	struct city *Aux=NULL;
	//      Muestra Cordoba
	if(Head_Cordoba==NULL)
		cout<<"No hay datos de Cordoba"<<endl;
	else{
		Aux= Head_Cordoba;
		Ciudad_M_Fria=Aux->m.time.day;
		Temp_Ciudad_M_Fria=Aux->m.temp;
		strcpy(Nombre_Ciudad, Aux->city_name);
		while (Aux!=NULL){
			if((Temp_Ciudad_M_Fria)>(Aux->m.temp)){
				Ciudad_M_Fria=Aux->m.time.day;
				Temp_Ciudad_M_Fria=Aux->m.temp;
				strcpy(Nombre_Ciudad, Aux->city_name);
			
			}
			strcpy(Nombre_Ciudad, Aux->city_name);
			Aux=Aux->netx;
		}
		cout<<"El dia "<<Ciudad_M_Fria<<" fue el mas frio de Cordoba y fue en la ciudad "<<Nombre_Ciudad<<", con una temperatura de "<<Temp_Ciudad_M_Fria<<"."<<endl<<endl;
		
	}
	//      Muestra Santa Fe
	if(Head_Santa_Fe==NULL)
		cout<<"No hay datos de Santa Fe"<<endl;
	else{
		Aux= Head_Santa_Fe;
		Ciudad_M_Fria=Aux->m.time.day;
		Temp_Ciudad_M_Fria=Aux->m.temp;
		strcpy(Nombre_Ciudad, Aux->city_name);
		while (Aux!=NULL){
			if((Temp_Ciudad_M_Fria)>(Aux->m.temp)){
				Ciudad_M_Fria=Aux->m.time.day;
				Temp_Ciudad_M_Fria=Aux->m.temp;
				strcpy(Nombre_Ciudad, Aux->city_name);
			
			}
			strcpy(Nombre_Ciudad, Aux->city_name);
			Aux=Aux->netx;
		}
		cout<<"El dia "<<Ciudad_M_Fria<<" fue el mas frio de Santa Fe y fue en la ciudad "<<Nombre_Ciudad<<", con una temperatura de "<<Temp_Ciudad_M_Fria<<"."<<endl<<endl;
		
	}
	//      Muestra Mendoza
	if(Head_Mendoza==NULL)
		cout<<"No hay datos de Mendoza"<<endl;
	else{
		Aux= Head_Mendoza;
		Ciudad_M_Fria=Aux->m.time.day;
		Temp_Ciudad_M_Fria=Aux->m.temp;
		strcpy(Nombre_Ciudad, Aux->city_name);
		while (Aux!=NULL){
			if((Temp_Ciudad_M_Fria)>(Aux->m.temp)){
				Ciudad_M_Fria=Aux->m.time.day;
				Temp_Ciudad_M_Fria=Aux->m.temp;
				strcpy(Nombre_Ciudad, Aux->city_name);
			
			}
			strcpy(Nombre_Ciudad, Aux->city_name);
			Aux=Aux->netx;
		}
		cout<<"El dia "<<Ciudad_M_Fria<<" fue el mas frio de Mendoza y fue en la ciudad "<<Nombre_Ciudad<<", con una temperatura de "<<Temp_Ciudad_M_Fria<<"."<<endl<<endl;
		
	}
		
}
void TP_Class::Ciudad_Calida_Provinia(){
	int Ciudad_M_Fria=0;
	float Temp_Ciudad_M_Fria=0;
	char Nombre_Ciudad[50]="Ninguna";
	struct city *Aux=NULL;
	//      Muestra Cordoba
	if(Head_Cordoba==NULL)
		cout<<"No hay datos de Cordoba"<<endl;
	else{
		Aux= Head_Cordoba;
		Ciudad_M_Fria=Aux->m.time.day;
		Temp_Ciudad_M_Fria=Aux->m.temp;
		strcpy(Nombre_Ciudad, Aux->city_name);
		while (Aux!=NULL){
			if((Temp_Ciudad_M_Fria)<(Aux->m.temp)){
				Ciudad_M_Fria=Aux->m.time.day;
				Temp_Ciudad_M_Fria=Aux->m.temp;
				strcpy(Nombre_Ciudad, Aux->city_name);
			
			}
			strcpy(Nombre_Ciudad, Aux->city_name);
			Aux=Aux->netx;
		}
		cout<<"El dia "<<Ciudad_M_Fria<<" fue el mas calido de Cordoba y fue en la ciudad "<<Nombre_Ciudad<<", con una temperatura de "<<Temp_Ciudad_M_Fria<<"."<<endl<<endl;
		
	}
	//      Muestra Santa Fe
	if(Head_Santa_Fe==NULL)
		cout<<"No hay datos de Santa Fe"<<endl;
	else{
		Aux= Head_Santa_Fe;
		Ciudad_M_Fria=Aux->m.time.day;
		Temp_Ciudad_M_Fria=Aux->m.temp;
		strcpy(Nombre_Ciudad, Aux->city_name);
		while (Aux!=NULL){
			if((Temp_Ciudad_M_Fria)<(Aux->m.temp)){
				Ciudad_M_Fria=Aux->m.time.day;
				Temp_Ciudad_M_Fria=Aux->m.temp;
				strcpy(Nombre_Ciudad, Aux->city_name);
			
			}
			strcpy(Nombre_Ciudad, Aux->city_name);
			Aux=Aux->netx;
		}
		cout<<"El dia "<<Ciudad_M_Fria<<" fue el mas calido de Santa Fe y fue en la ciudad "<<Nombre_Ciudad<<", con una temperatura de "<<Temp_Ciudad_M_Fria<<"."<<endl<<endl;
		
	}
	//      Muestra Mendoza
	if(Head_Mendoza==NULL)
		cout<<"No hay datos de Mendoza"<<endl;
	else{
		Aux= Head_Mendoza;
		Ciudad_M_Fria=Aux->m.time.day;
		Temp_Ciudad_M_Fria=Aux->m.temp;
		strcpy(Nombre_Ciudad, Aux->city_name);
		while (Aux!=NULL){
			if((Temp_Ciudad_M_Fria)<(Aux->m.temp)){
				Ciudad_M_Fria=Aux->m.time.day;
				Temp_Ciudad_M_Fria=Aux->m.temp;
				strcpy(Nombre_Ciudad, Aux->city_name);
			
			}
			strcpy(Nombre_Ciudad, Aux->city_name);
			Aux=Aux->netx;
		}
		cout<<"El dia "<<Ciudad_M_Fria<<" fue el mas calido de Mendoza y fue en la ciudad "<<Nombre_Ciudad<<", con una temperatura de "<<Temp_Ciudad_M_Fria<<"."<<endl<<endl;
		
	}
		
}
