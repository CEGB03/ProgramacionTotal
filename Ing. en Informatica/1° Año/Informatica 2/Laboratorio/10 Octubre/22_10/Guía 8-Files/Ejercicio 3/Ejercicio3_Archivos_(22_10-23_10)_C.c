/*
	3. Escriba un programa que cree un menu de opciones que permita a) abrir un
archivo, b) escribir un archivo, c) leer un archivo.
*/
#include <stdio.h>
#include <stdlib.h>
char Menu();
char Menu_Escritura();
char Menu_Lectura();
int main(){
	FILE *P_Archivo_3;
	char Op=' ', Salida=' ', Letra=' ', Cadenas[60], Salida_Escritura=' ';
	int Numeros=0, Verificador=0;
	do{
		Op=Menu();
		switch(Op){
		case 'a':
		case 'A':
			P_Archivo_3=fopen("./Ejercicio3.txt","a");
			if(P_Archivo_3==NULL){
				printf("Imposible abrir el archivo");
				exit (10);
			}
			else{
				if(!feof(P_Archivo_3))
					printf("El archivo esta vacio.\n\n");
				else
					printf("El archivo no esta vacio.\n\n");
			}
			printf("\n");
			fclose(P_Archivo_3);
			break;
		case 'b':
		case 'B':
			P_Archivo_3=fopen("./Ejercicio3.txt","w");
			if(P_Archivo_3==NULL){
				printf("Imposible abrir para escribir el archivo");
				exit (20);
			}
			else{
				printf("¿Que desea escribir?\n");
				switch(Menu_Escritura()){
				case 'a':
				case 'A':
					do{
						printf("Ingrese una Letra\nPara salir ingrese $\n");
						scanf(" %c",&Letra);
						if((Letra>=65 && Letra<=90) || (Letra>=97 && Letra<=122))
							fputc(Letra,P_Archivo_3);
					}while(Letra!='$');
					break;
				case 'b':
				case 'B':
					do{
						printf("Ingrese un Numero\nPara salir ingrese $\n");
						scanf("%d",&Numeros);
						if(Numeros!=(-0))
							fprintf(P_Archivo_3, "%d ", Numeros);
					} while(Numeros!=(-0));
					break;
				case 'c':
				case 'C':
					do{
						printf("Ingrese una Palabra\nPara salir ingrese $\n");
						scanf("%s",Cadenas);
						fprintf(P_Archivo_3, "%s ", Cadenas);
						printf("¿Desea volver a ingresar otra palabra? S/N  ");
						scanf(" %c",&Salida_Escritura);
					} while(Salida_Escritura=='s' || Salida_Escritura=='S');
					break;
				}
			}
			printf("\n");
			fclose(P_Archivo_3);
			break;
		case 'c':
		case 'C':
			P_Archivo_3=fopen("./Ejercicio3.txt","r");
			if(P_Archivo_3==NULL){
				printf("Imposible abrir para leer el archivo");
				exit (30);
			}
			else{
				printf("¿Que desea Leer?\n");
				switch(Menu_Lectura()){
				case 'a':
				case 'A':
					printf("Las letras recuperadas son:\n");
					while(!feof(P_Archivo_3)){
						Letra=(fgetc(P_Archivo_3));
						printf("%c | ",Letra);
					}
					break;
				case 'b':
				case 'B':
					printf("Los numeros recuperados son:\n");
					while(!feof(P_Archivo_3)){
						fscanf(P_Archivo_3, "%d", &Numeros);
						printf("%d | ",Numeros);
					}
					break;
				case 'c':
				case 'C':
					printf("Las palabras recuperadas son:\n");
					while(!feof(P_Archivo_3)){
						fscanf(P_Archivo_3, "%s", &Cadenas);
						printf("%s | ",Cadenas);
					}
					break;
				}
			}
			fclose(P_Archivo_3);
			printf("\n");
			break;
		}
		printf("¿Desea volver al menu de seleccion? S/N  ");
		scanf(" %c",&Salida);
	} while(Salida=='s' || Salida=='S');
	printf("\n");
	system("pause");
	return 0;
}
char Menu(){
	char Eleccion=' ';
	printf("Bienvenido al menu de opciones.\nSeleccione segun desee.\n");
	printf("a) Abrir un archivo.\n");
	printf("b) Escribir un archivo.\n");
	printf("c) Leer un archivo.\n");
	scanf(" %c",&Eleccion);
	return Eleccion;
}
char Menu_Escritura(){
	char Eleccion=' ';
	printf("Bienvenido al menu de opciones.\nSeleccione segun desee.\n");
	printf("a) Escribir letras.\n");
	printf("b) Escribir numeros.\n");
	printf("c) Escribir palabras.\n");
	scanf(" %c",&Eleccion);
	return Eleccion;
}
char Menu_Lectura(){
	char Eleccion=' ';
	printf("Bienvenido al menu de opciones.\nSeleccione segun desee.\n");
	printf("a) Leer letras.\n");
	printf("b) Leer numeros.\n");
	printf("c) Leer palabras.\n");
	scanf(" %c",&Eleccion);
	return Eleccion;
}
