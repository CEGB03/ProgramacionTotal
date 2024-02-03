/*
	9. Elaborar el enunciado y la solucion de un ejercio utilizando archivos de
textos 
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
struct Materia{
	char Nom_Materia[20];
	int Not_Materia;
};
struct Alumno{
	struct Persona Alumn;
	struct Materia Mater;
};
char Menu();
void Carga_Datos(FILE **P_Archivo_9, int Dat_Carga);
void Muestra_Datos(FILE **P_Archivo_9);
int main(){
	FILE *P_Archivo_9;
	char Op=' ', Salida=' ', Remover=' ';
	int Dat_Carga;
	do{
		Op=Menu();
		switch(Op){
		case 'a':
		case 'A':
			P_Archivo_9=fopen("./Curricula.txt","a");
			if(P_Archivo_9==NULL){
				printf("Imposible crear el archivo");
				exit (10);
			}
			else{
				printf("¿Cuantos Alumnos se van a cargar? ");
				scanf("%d",&Dat_Carga);
				Carga_Datos(&P_Archivo_9, Dat_Carga);
			}
			break;
		case 'b':
		case 'B':
			P_Archivo_9=fopen("./Curricula.txt","r");
			if(P_Archivo_9==NULL){
				printf("Imposible la lectura del archivo");
				exit (10);
			}
			else{
				Muestra_Datos(&P_Archivo_9);
			}
			break;
		}
		
		printf("Desea volver al menu de inicio? S/N ");
		scanf(" %c",&Salida);
	} while(Salida=='s' || Salida=='S');
	printf("\n");
	printf("¿Remover Archivo? S/N \nEsto eliminara el archivo y todo su contenido.\n");
	scanf(" %c",&Remover);
	if(Remover=='s' || Remover=='S')
		remove("./Curricula.txt");
	printf("\n");
	system("pause");
	return 0;
}
char Menu(){
	char Opcion=' ';
	printf("Bienvenido al menu de opciones\n");
	printf("a. Agregar alumnos nuevos.\n");
	printf("b. Mostrar todos los alumnos almacenados\n");
	scanf(" %c",&Opcion);
	return Opcion;
}
void Carga_Datos(FILE **P_Archivo_9, int Dat_Carga){
	struct Alumno P_Estudainte[Dat_Carga];
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
		fprintf(*P_Archivo_9, "%s %s %d %d %d %s %d %lu %s %d \n", P_Estudainte[ii].Alumn.Nombre, P_Estudainte[ii].Alumn.Apellido, P_Estudainte[ii].Alumn.Fecha.Dia, P_Estudainte[ii].Alumn.Fecha.Mes, P_Estudainte[ii].Alumn.Fecha.Anio, P_Estudainte[ii].Alumn.Dirr.Calle, P_Estudainte[ii].Alumn.Dirr.Altura, (unsigned long)P_Estudainte[ii].Alumn.Tell, P_Estudainte[ii].Mater.Nom_Materia, P_Estudainte[ii].Mater.Not_Materia);
		printf("\n");		
	}
	if(fclose(*P_Archivo_9)==0)
		printf("Se cerro exitosamente\n\n");
}
void Muestra_Datos(FILE **P_Archivo_9){
	struct Alumno P_Estudainte;
	while(!feof(*P_Archivo_9)){
		fscanf(*P_Archivo_9, "%s %s %d %d %d %s %d %lu %s %d \n", &P_Estudainte.Alumn.Nombre, &P_Estudainte.Alumn.Apellido, &P_Estudainte.Alumn.Fecha.Dia, &P_Estudainte.Alumn.Fecha.Mes, &P_Estudainte.Alumn.Fecha.Anio, &P_Estudainte.Alumn.Dirr.Calle, &P_Estudainte.Alumn.Dirr.Altura, &P_Estudainte.Alumn.Tell, &P_Estudainte.Mater.Nom_Materia, &P_Estudainte.Mater.Not_Materia);
		printf("Estos son los datos del Alumno %s %s\n", P_Estudainte.Alumn.Nombre, P_Estudainte.Alumn.Apellido);
		printf("\tSu fecha de nacimiento completa es: %d/%d/%d\n", P_Estudainte.Alumn.Fecha.Dia, P_Estudainte.Alumn.Fecha.Mes, P_Estudainte.Alumn.Fecha.Anio);
		printf("\tSu Direccion es: %s al %d\n", P_Estudainte.Alumn.Dirr.Calle, P_Estudainte.Alumn.Dirr.Altura);
		printf("\tSu numero de Telefono es: %lu\n",(unsigned long)P_Estudainte.Alumn.Tell);
		printf("\tEl Nombre de la Materia y su nota es: %s y saco un %d\n", P_Estudainte.Mater.Nom_Materia, P_Estudainte.Mater.Not_Materia);
		printf("\n");
	}
	if(fclose(*P_Archivo_9)==0)
		printf("Se cerro exitosamente\n\n");
}

