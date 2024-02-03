/*
	4. Crear una estructura llamada persona con sus atributos nombre, apellido,
fecha de nacimiento, dirección y teléfono. Tanto la dirección como la fecha de
nacimiento son otras estructuras (estructura anidada). Cargue con datos y
luego muéstrelos.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

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
	struct Persona Dat;
	struct Persona *P_Dat;
	P_Dat=&Dat;
	Cargar_Datos(P_Dat);
	Mostrar_Datos(P_Dat);
	system("pause");
	return 0;
}	
void Cargar_Datos(struct Persona *P_Dat){
	printf("Estas a punto de cargar los datos de la Persona\n");
	printf("Ingrese el Nombre de la Persona: \n");
	scanf("%s",&P_Dat->Nombre);
	printf("Ingrese el Apellido de la Persona: \n");
	scanf("%s",&P_Dat->Apellido);
	printf("Ingrese el Dia de Nacimineto de la Persona: \n");
	scanf("%d",&P_Dat->Fecha.Dia);
	printf("Ingrese el Mes del Nacimiento de la Persona: \n");
	scanf("%d",&P_Dat->Fecha.Mes);
	printf("Ingrese el Anio del Nacimiento de la Persona: \n");
	scanf("%d",&P_Dat->Fecha.Anio);
	printf("Ingrese la Calle donde vive de la Persona: \n");
	scanf("%s",&P_Dat->Dirr.Calle);
	printf("Ingrese la Altura donde vive de la Persona: \n");
	scanf("%d",&P_Dat->Dirr.Altura);
	printf("Ingrese el Telefono de la Persona: \n");
	scanf("%lu",&P_Dat->Tell);
}
void Mostrar_Datos(struct Persona *P_Dat){
	printf("El Nombre de la Persona es: %s\n",P_Dat->Nombre);
	printf("El Apellido de la Persona es: %s\n",P_Dat->Apellido);
	printf("El Dia de Nacimineto de la Persona es: %d\n",P_Dat->Fecha.Dia);
	printf("El Mes del Nacimiento de la Persona es: %d\n",P_Dat->Fecha.Mes);
	printf("El Anio del Nacimiento de la Persona es: %d\n",P_Dat->Fecha.Anio);
	printf("La Calle donde vive de la Persona es: %s\n",P_Dat->Dirr.Calle);
	printf("La Altura donde vive de la Persona es: %d\n",P_Dat->Dirr.Altura);
	printf("El Telefono de la Persona es: %lu\n",(unsigned long)P_Dat->Tell);
}
