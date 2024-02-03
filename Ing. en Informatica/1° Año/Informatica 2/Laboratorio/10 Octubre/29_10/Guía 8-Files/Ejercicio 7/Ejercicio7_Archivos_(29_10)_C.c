/*
	7.  Escribir un programa que cree una estructura llamada Producto, y que
contenga los siguientes datos (nombre del producto, marca, precio unitario,
fecha de elaboración, tamaño) y lo guarde en un archivo de texto con el nombre
“Datos_Producto_Estructura.txt”.
*/
#include <stdio.h>
#include <stdlib.h>
struct Producto{
	int Precio_Uni;
	int D_Ela;
	int M_Ela;
	int A_Ela;
	int Tam;
	char Nombre[30];
	char Marca[20];
	
};
int Menu(); 
void Carga_Datos(FILE **P_Archivo_7);
void Muestra_Datos(FILE **P_Archivo_7);
int main(){
	FILE *P_Archivo_7;
	int Op=0;
	char Salida=' ', Remover=' ';
	do{
		Op=Menu();
		switch(Op){
		case 1:
			P_Archivo_7=fopen("./Datos_Producto_Estructura.txt","a");
			if(P_Archivo_7==NULL){
				printf("Imposible crear el archivo");
				exit (10);
			}
			else{
				Carga_Datos(&P_Archivo_7);
			}
			break;
		case 2:
			P_Archivo_7=fopen("./Datos_Producto_Estructura.txt","r");
			if(P_Archivo_7==NULL){
				printf("Imposible la lectura del archivo");
				exit (10);
			}
			else{
				Muestra_Datos(&P_Archivo_7);
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
		remove("./Datos_Producto_Estructura.txt");
	system("pause");
	return 0;
}
int Menu(){
	int Opcion=0;
	printf("Bienvenido al menu de opciones\n");
	printf("1. Agregar un productos nuevo\n");
	printf("2. Mostrar todos los productos\n");
	scanf("%d",&Opcion);
	return Opcion;
}
void Carga_Datos(FILE **P_Archivo_7){
	struct Producto Carga;
	
	printf("Ingrese el Nombre del producto ");
	scanf("%s",&Carga.Nombre);
	printf("Ingrese la Marca del producto ");
	scanf("%s",&Carga.Marca);
	printf("Ingrese el Precio unitario del producto ");
	scanf("%d",&Carga.Precio_Uni);
	printf("Ingrese el Dia de la elaboracion del producto ");
	scanf("%d",&Carga.D_Ela);
	printf("Ingrese el Mes de la elaboracion del producto ");
	scanf("%d",&Carga.M_Ela);
	printf("Ingrese el A%co de la elaboracion del producto ",164);
	scanf("%d",&Carga.A_Ela);
	printf("Ingrese el Tama%co en gramos del producto ",164);
	scanf("%d",&Carga.Tam);
	//fwrite(&Carga, sizeof(struct Producto), 1, *P_Archivo_7);
	fprintf(*P_Archivo_7, "%s %s %d %d %d %d %d ", Carga.Nombre, Carga.Marca, Carga.Precio_Uni, Carga.D_Ela, Carga.M_Ela, Carga.A_Ela, Carga.Tam);
	if(fclose(*P_Archivo_7)==0)
		printf("Se cerro exitosamente\n\n");
}
void Muestra_Datos(FILE **P_Archivo_7){
	struct Producto Lectura;
	
	printf("Entro a la 2\n");
	while(!feof(*P_Archivo_7)){
		//fread(&Lectura, sizeof(struct Producto), 1, *P_Archivo_7);
		fscanf(*P_Archivo_7, "%s %s %d %d %d %d %d ", &Lectura.Nombre, &Lectura.Marca, &Lectura.Precio_Uni, &Lectura.D_Ela, &Lectura.M_Ela, &Lectura.A_Ela, &Lectura.Tam);
		printf("Los datos del Producto %s son:\n",Lectura.Nombre);
		printf("\tMarca: %s\n",Lectura.Marca);
		printf("\tPrecio Unitario: %d\n",Lectura.Precio_Uni);
		printf("\tFecha Elaboracion: %d/%d/%d\n",Lectura.D_Ela,Lectura.M_Ela,Lectura.A_Ela);
		printf("\tTama%co en gramos: %d\n",165, Lectura.Tam);
	}
	if(fclose(*P_Archivo_7)==0)
				printf("Se cerro exitosamente\n\n");
}
	
	
