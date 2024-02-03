/*
	8.  Escribir un programa que tenga un menú de opciones, cada una de ellas
una función:
	a. Cargar lista de productos en el archivo de texto.
	b. Leer la lista de productos del archivo de texto.
Para ello deberá crear un vector de estructura llamada Producto y de tamaño 3.
La estructura Producto contendrá los siguientes atributos nombre del producto,
marca, precio unitario, fecha de elaboración, tamaño.
	El archivo se llamará “Listado_Producto.txt”. 
*/
#include <stdio.h>
#include <stdlib.h>
#define Tam_Struct 3
struct Dimensiones{
	int Alto;
	int Ancho;
};
struct Fecha{
	int D_Ela;
	int M_Ela;
	int A_Ela;
};
struct Producto{
	int Precio_Uni;
	struct Dimensiones Tam;
	struct Fecha Elaboracion;
	char Nombre[30];
	char Marca[20];
};
char Menu();
void Carga_Datos(FILE **P_Archivo_8);
void Muestra_Datos(FILE **P_Archivo_8);
int main(){
	FILE *P_Archivo_8;
	char Op=' ', Salida=' ', Remover=' ';
	do{
		Op=Menu();
		switch(Op){
		case 'a':
		case 'A':
			P_Archivo_8=fopen("./Listado_Producto.txt","a");
			if(P_Archivo_8==NULL){
				printf("Imposible crear el archivo");
				exit (10);
			}
			else{
				Carga_Datos(&P_Archivo_8);
			}
			break;
		case 'b':
		case 'B':
			P_Archivo_8=fopen("./Listado_Producto.txt","r");
			if(P_Archivo_8==NULL){
				printf("Imposible la lectura del archivo");
				exit (10);
			}
			else{
				Muestra_Datos(&P_Archivo_8);
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
		remove("./Listado_Producto.txt");
	printf("\n");
	system("pause");
	return 0;
}
char Menu(){
	char Opcion=' ';
	printf("Bienvenido al menu de opciones\n");
	printf("a. Agregar una lista de 3 productos nuevo.\n");
	printf("b. Mostrar todos los productos\n");
	scanf(" %c",&Opcion);
	return Opcion;
}
void Carga_Datos(FILE **P_Archivo_8){
	struct Producto Carga[Tam_Struct];
	for(int ii=0 ; ii<Tam_Struct ; ii++){
		printf("Ingrese el Nombre del producto ");
		scanf("%s",&Carga[ii].Nombre);
		printf("Ingrese la Marca del producto ");
		scanf("%s",&Carga[ii].Marca);
		printf("Ingrese el Precio unitario del producto ");
		scanf("%d",&Carga[ii].Precio_Uni);
		printf("Ingrese el Dia de la elaboracion del producto ");
		scanf("%d",&Carga[ii].Elaboracion.D_Ela);
		printf("Ingrese el Mes de la elaboracion del producto ");
		scanf("%d",&Carga[ii].Elaboracion.M_Ela);
		printf("Ingrese el A%co de la elaboracion del producto ",164);
		scanf("%d",&Carga[ii].Elaboracion.A_Ela);
		printf("Ingrese el Ancho en centimetros  del producto ");
		scanf("%d",&Carga[ii].Tam.Alto);
		printf("Ingrese el Alto en centimetros del producto ");
		scanf("%d",&Carga[ii].Tam.Ancho);
		fprintf(*P_Archivo_8, "%s %s %d %d %d %d %d %d \n", Carga[ii].Nombre, Carga[ii].Marca, Carga[ii].Precio_Uni, Carga[ii].Elaboracion.D_Ela, Carga[ii].Elaboracion.M_Ela, Carga[ii].Elaboracion.A_Ela, Carga[ii].Tam.Alto, Carga[ii].Tam.Ancho);
		printf("\n");		
	}
	if(fclose(*P_Archivo_8)==0)
		printf("Se cerro exitosamente\n\n");
}
void Muestra_Datos(FILE **P_Archivo_8){
	struct Producto Lectura[Tam_Struct];
	for(int ii=0 ; ii<Tam_Struct ; ii++)
		fscanf(*P_Archivo_8, "%s %s %d %d %d %d %d %d \n", &Lectura[ii].Nombre, &Lectura[ii].Marca, &Lectura[ii].Precio_Uni, &Lectura[ii].Elaboracion.D_Ela, &Lectura[ii].Elaboracion.M_Ela, &Lectura[ii].Elaboracion.A_Ela, &Lectura[ii].Tam.Alto, &Lectura[ii].Tam.Ancho);
	if(fclose(*P_Archivo_8)==0)
		printf("Se cerro exitosamente\n\n");
	for(int ii=0 ; ii<Tam_Struct ; ii++){
		printf("Los datos del Producto %s son:\n",Lectura[ii].Nombre);
		printf("\tMarca: %s\n",Lectura[ii].Marca);
		printf("\tPrecio Unitario: %d\n",Lectura[ii].Precio_Uni);
		printf("\tFecha Elaboracion: %d/%d/%d\n",Lectura[ii].Elaboracion.D_Ela,Lectura[ii].Elaboracion.M_Ela,Lectura[ii].Elaboracion.A_Ela);
		printf("\tTama%co es: %dx%d cm\n",165, Lectura[ii].Tam.Alto,Lectura[ii].Tam.Ancho);
		printf("\n");
	}
}
