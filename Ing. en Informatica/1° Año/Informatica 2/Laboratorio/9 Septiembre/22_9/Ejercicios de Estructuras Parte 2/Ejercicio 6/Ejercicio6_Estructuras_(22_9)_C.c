/*
	6. Crear una estructura llamada alumno con sus atributos persona
(del anterior), y un arreglo de dos dimensiones de las materias que cursa y la
nota de final. (Ej. historial académico). Cargue con datos y luego muéstrelos.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define Dat_Carga 1
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
struct Materia{
	char Nom_Materia[20];
	int Not_Materia;
};
struct Alumno{
	struct Persona Alumn;
	struct Materia Mater;
};
void Cargar_Datos(struct Alumno *P_Alumno);
void Mostrar_Datos(struct Alumno *P_Alumno);
int main(){
	struct Alumno Estudainte[Dat_Carga];
	struct Alumno *P_Estudainte=Estudainte;
	Cargar_Datos(P_Estudainte);
	Mostrar_Datos(P_Estudainte
				  );
	system("pause");
	return 0;
}
void Cargar_Datos(struct Alumno *P_Estudainte){
	for(int ii=0 ; ii<Dat_Carga ; ii++){
		printf("Estas a punto de cargar los datos del Alumno N°%d\n", ii+1);
		printf("Ingrese el Nombre del Alumno: ");
		scanf("%s",&P_Estudainte[ii].Alumn.Nombre);
		printf("Ingrese el Apellido del Alumno: ");
		scanf("%s",&P_Estudainte[ii].Alumn.Apellido);
		printf("Ingrese el Dia de Nacimineto del Alumno: ");
		scanf("%d",&P_Estudainte[ii].Alumn.Fecha.Dia);
		printf("Ingrese el Mes del Nacimiento del Alumno: ");
		scanf("%d",&P_Estudainte[ii].Alumn.Fecha.Mes);
		printf("Ingrese el Anio del Nacimiento del Alumno: ");
		scanf("%d",&P_Estudainte[ii].Alumn.Fecha.Anio);
		printf("Ingrese la Calle donde vive el Alumno: ");
		scanf("%s",&P_Estudainte[ii].Alumn.Dirr.Calle);
		printf("Ingrese la Altura donde vive el Alumno: ");
		scanf("%d",&P_Estudainte[ii].Alumn.Dirr.Altura);
		printf("Ingrese el Telefono del Alumno: ");
		scanf("%lu",&P_Estudainte[ii].Alumn.Tell);
		printf("Ingrese el Nombre de la Materia del Alumno: ");
		scanf("%s",&P_Estudainte[ii].Mater.Nom_Materia);
		printf("Ingrese la nota de la Materia del Alumno: ");
		scanf("%d",&P_Estudainte[ii].Mater.Not_Materia);
	}
	printf("\n");
}
void Mostrar_Datos(struct Alumno *P_Estudainte){
	for(int ii=0 ; ii<Dat_Carga ; ii++){
		printf("Estos son los datos del Alumno N°%d\n", ii+1);
		printf("El Nombre de la Persona es: %s\n",P_Estudainte[ii].Alumn.Nombre);
		printf("El Apellido de la Persona es: %s\n",P_Estudainte[ii].Alumn.Apellido);
		printf("El Dia de Nacimineto de la Persona es: %d\n",P_Estudainte[ii].Alumn.Fecha.Dia);
		printf("El Mes del Nacimiento de la Persona es: %d\n",P_Estudainte[ii].Alumn.Fecha.Mes);
		printf("El Anio del Nacimiento de la Persona es: %d\n",P_Estudainte[ii].Alumn.Fecha.Anio);
		printf("La Calle donde vive de la Persona es: %s\n",P_Estudainte[ii].Alumn.Dirr.Calle);
		printf("La Altura donde vive de la Persona es: %d\n",P_Estudainte[ii].Alumn.Dirr.Altura);
		printf("El Telefono de la Persona es: %lu\n",(unsigned long)P_Estudainte[ii].Alumn.Tell);
		printf("El Nombre de la Materia del Alumno es: %s\n", P_Estudainte[ii].Mater.Nom_Materia);
		printf("La nota de la Materia del Alumno es: %d\n", P_Estudainte[ii].Mater.Not_Materia);
		printf("\n");
	}
}
