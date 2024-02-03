/*
	5. Tomar el ejercicio anterior y modificarlo para que se cree un vector de
estructuras de tamaño 5. Cargar valores y mostrar. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define Dat_Carga 2

//typedef unsigned int uint32_t;

struct Direccion{
	char Calle[10];
	int Altura;
};
struct Fecha_Naci{
	int Dia;
	int Mes;
	int Anio;
};
struct Persona{
	char Nombre[30];
	char Apellido[30];
	struct Fecha_Naci Fecha;
	struct Direccion Dirr;
	/*unsigned int*/uint32_t Tell;
};

void Cargar_Datos(struct Persona *P_Dat);
void Mostrar_Datos(struct Persona *P_Dat);

int main(){
	struct Persona Dat[Dat_Carga];
	struct Persona *P_Dat;
	P_Dat=Dat;
	Cargar_Datos(P_Dat);
	Mostrar_Datos(P_Dat);
	system("pause");
	return 0;
}	
void Cargar_Datos(struct Persona *P_Dat){
	for(int ii=0 ; ii<Dat_Carga ; ii++){
		printf("Estas a punto de cargar los datos de la Persona N°%d\n", ii+1);
		printf("Ingrese el Nombre de la Persona: ");
		scanf("%s",&P_Dat[ii].Nombre);
		printf("Ingrese el Apellido de la Persona: ");
		scanf("%s",&P_Dat[ii].Apellido);
		printf("Ingrese el Dia de Nacimineto de la Persona: ");
		scanf("%d",&P_Dat[ii].Fecha.Dia);
		printf("Ingrese el Mes del Nacimiento de la Persona: ");
		scanf("%d",&P_Dat[ii].Fecha.Mes);
		printf("Ingrese el Anio del Nacimiento de la Persona: ");
		scanf("%d",&P_Dat[ii].Fecha.Anio);
		printf("Ingrese la Calle donde vive de la Persona: ");
		scanf("%s",&P_Dat[ii].Dirr.Calle);
		printf("Ingrese la Altura donde vive de la Persona: ");
		scanf("%d",&P_Dat[ii].Dirr.Altura);
		printf("Ingrese el Telefono de la Persona: ");
		scanf("%lu",&P_Dat[ii].Tell);
	}
	printf("\n");
}
void Mostrar_Datos(struct Persona *P_Dat){
	for(int ii=0 ; ii<Dat_Carga ; ii++){
		printf("Estos son los datos de la Persona N°%d\n", ii+1);
		printf("El Nombre de la Persona es: %s\n",P_Dat[ii].Nombre);
		printf("El Apellido de la Persona es: %s\n",P_Dat[ii].Apellido);
		printf("El Dia de Nacimineto de la Persona es: %d\n",P_Dat[ii].Fecha.Dia);
		printf("El Mes del Nacimiento de la Persona es: %d\n",P_Dat[ii].Fecha.Mes);
		printf("El Anio del Nacimiento de la Persona es: %d\n",P_Dat[ii].Fecha.Anio);
		printf("La Calle donde vive de la Persona es: %s\n",P_Dat[ii].Dirr.Calle);
		printf("La Altura donde vive de la Persona es: %d\n",P_Dat[ii].Dirr.Altura);
		printf("El Telefono de la Persona es: %lu\n",(unsigned long)P_Dat[ii].Tell);
		printf("\n");
	}
}
