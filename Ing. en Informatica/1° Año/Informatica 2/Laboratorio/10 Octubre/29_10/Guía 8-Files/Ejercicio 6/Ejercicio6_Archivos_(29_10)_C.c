/*
	6.  Escribir un programa que solicite los datos de un producto (nombre del
producto, marca, precio unitario, fecha de elaboración, tamaño) y lo guarde en
un archivo de texto con el nombre “Datos_Producto.txt”.
*/
#include <stdio.h>
#include <stdlib.h>
int Menu(); 
void Carga_Datos(FILE **P_Archivo_6);
void Muestra_Datos(FILE **P_Archivo_6);
int main(){
	FILE *P_Archivo_6;
	int Op=0;
	char Salida=' ';
	do{
		Op=Menu();
		switch(Op){
		case 1:
			P_Archivo_6=fopen("./Datos_Producto.txt","w");
			if(P_Archivo_6==NULL){
				printf("Imposible crear el archivo");
				exit (10);
			}
			else{
				Carga_Datos(&P_Archivo_6);
			}
			break;
		case 2:
			P_Archivo_6=fopen("./Datos_Producto.txt","r");
			if(P_Archivo_6==NULL){
				printf("Imposible la lectura del archivo");
				exit (10);
			}
			else{
				Muestra_Datos(&P_Archivo_6);
			}
			break;
		}
		
		printf("Desea volver al menu de inicio? S/N ");
		scanf(" %c",&Salida);
	} while(Salida=='s' || Salida=='S');
	printf("\n");
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
void Carga_Datos(FILE **P_Archivo_6){
	int Precio_Uni=0, D_Ela=0, M_Ela=0, A_Ela=0, Tam=0;
	char Nombre[30], Marca[20];
	
	printf("Ingrese el Nombre del producto ");
	scanf("%s",&Nombre);
	printf("Ingrese la Marca del producto ");
	scanf("%s",&Marca);
	printf("Ingrese el Precio unitario del producto ");
	scanf("%d",&Precio_Uni);
	printf("Ingrese el Dia de la elaboracion del producto ");
	scanf("%d",&D_Ela);
	printf("Ingrese el Mes de la elaboracion del producto ");
	scanf("%d",&M_Ela);
	printf("Ingrese el A%co de la elaboracion del producto ",164);
	scanf("%d",&A_Ela);
	printf("Ingrese el Tama%co en gramos del producto ",164);
	scanf("%d",&Tam);
	fprintf(*P_Archivo_6, "%s %s %d %d %d %d %d", Nombre, Marca, Precio_Uni, D_Ela, M_Ela, A_Ela, Tam);
	if(fclose(*P_Archivo_6)==0)
	   printf("Se cerro exitosamente\n\n");
}
void Muestra_Datos(FILE **P_Archivo_6){
	int Precio_Uni=0, D_Ela=0, M_Ela=0, A_Ela=0, Tam=0;
	char Nombre[30], Marca[20];
	printf("Entro a la 2\n");
	while(!feof(*P_Archivo_6)){
		fscanf(*P_Archivo_6, "%s %s %d %d %d %d %d", &Nombre, &Marca, &Precio_Uni, &D_Ela, &M_Ela, &A_Ela, &Tam);
		printf("Los datos del Producto %s son:\n",Nombre);
		printf("\tMarca: %s\n",Marca);
		printf("\tPrecio Unitario: %d\n",Precio_Uni);
		printf("\tFecha Elaboracion: %d/%d/%d\n",D_Ela,M_Ela,A_Ela);
		printf("\tTama%co en gramos: %d\n",165, Tam);
	}
	if(fclose(*P_Archivo_6)==0)
		printf("Se cerro exitosamente\n\n");
}

