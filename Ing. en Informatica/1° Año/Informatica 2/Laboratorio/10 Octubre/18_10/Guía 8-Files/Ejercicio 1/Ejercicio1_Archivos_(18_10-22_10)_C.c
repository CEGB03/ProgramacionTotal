/*
	1. Escriba un programa que cree un archivo binario llamado
"datos_personales.txt” que pregunte los siguientes datos personales:
nombre, apellido, dni, edad, nacionalidad. Luego abrir el archivo y mostrarlo.
*/
#include <stdio.h>
#include <stdlib.h>
#include  <stdint.h>
int main(){
	FILE *P_Archivo_1;
	int Edad=0;
	long DNI=0;
	char Nombre[20]="Nombre",Apellido[20]="Apellido",Nacionalidad[20]="Nacionalidad";
	P_Archivo_1=fopen("datos_personales.txt","w");
	if(P_Archivo_1==NULL){
		printf("No se pudo abrir el archivo para escribirlo");
		exit (10);
	}
	else{
		printf("Ingrese el DNI: ");
		scanf("%li",&DNI);
		printf("Ingrese la Edad: ");
		scanf("%d",&Edad);
		printf("Ingrese el Nombre: ");
		scanf("%s",Nombre);
		printf("Ingrese el Apellido: ");
		scanf("%s",Apellido);
		printf("Ingrese la Nacionalidad: ");
		scanf("%s",Nacionalidad);
		fprintf(P_Archivo_1, "%li %d %s %s %s", DNI, Edad, Nombre, Apellido, Nacionalidad);
	}
	fclose(P_Archivo_1);
	
	
	P_Archivo_1=fopen("datos_personales.txt","r");
	if(P_Archivo_1==NULL){
		printf("No se pudo abrir el archivo para leerlo");
		exit (10);
	}
	else{
		fscanf(P_Archivo_1, "%li %d %s %s %s", &DNI, &Edad, &Nombre, &Apellido, &Nacionalidad);
		printf("El Nombre es: %s\n",Nombre);
		printf("El Apellido es: %s\n",Apellido);
		printf("El DNI es: %lu\n",DNI);
		printf("La Edad es: %d\n",Edad);
		printf("La Nacionalidad es: %s\n",Nacionalidad);
		fclose(P_Archivo_1);
	}
	
	system("pause");
	return 0;
}
