/*
	96. Hacer una estructura que registre los datos de cinco personas como:
Nombre, apellido, edad, sexo y teléfono. 
*/
#include <stdio.h>
#include <stdlib.h>
#define Tam_Structs 2

struct Datos{
	char Nombre[30];
	char Apellido[30];
	int Edad;
	char Sexo[20];
	long Tel;
};

void Ingreso_Datos(struct Datos *);
void Muestra_Datos(struct Datos *);

int main(){
	struct Datos Dat[Tam_Structs];
	struct Datos *P_Datos;
	P_Datos=Dat;
	Ingreso_Datos(P_Datos);
	Muestra_Datos(P_Datos);
	system("pause");
	return 0;
}
void Ingreso_Datos(struct Datos *P_Datos){
	for(int ii=0 ; ii<Tam_Structs ; ii++){
		printf("Ingrese los siguientes datos de la persona N°%d\n",ii+1);
		printf("Ingrese el Nombre: ");
		scanf(" %s",&P_Datos[ii].Nombre);
		printf("Ingrese el Apellido: ");
		scanf(" %s",&P_Datos[ii].Apellido);
		printf("Ingrese la Edad: ");
		scanf(" %d",&P_Datos[ii].Edad);
		printf("Ingrese el Sexo: ");
		scanf(" %s",&P_Datos[ii].Sexo);
		printf("Ingrese el Telefono: ");
		scanf(" %d",&P_Datos[ii].Tel);
		printf("\n");
	}
}
void Muestra_Datos(struct Datos *P_Datos){
	for(int ii=0 ; ii<Tam_Structs ; ii++){
		printf("Estos son los datos de la persona N°%d\n",ii+1);
		printf("El Nombre es: %s\n",P_Datos[ii].Nombre);
		printf("El Apellido es: %s\n",P_Datos[ii].Apellido);
		printf("La Edad es: %d\n",P_Datos[ii].Edad);
		printf("El Sexo es: %s\n",P_Datos[ii].Sexo);
		printf("El Telefono es: %d\n",P_Datos[ii].Tel);
		printf("\n");
	}
}
