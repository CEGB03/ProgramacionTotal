#include <stdio.h>
#include <stdlib.h>
#include  <stdint.h>
#define Salida -1
int main(){
	FILE *P_Archivo_1;
	uint32_t Dato_Cargar=0;
	P_Archivo_1=fopen("./Prueba.txt","w");
	if(P_Archivo_1==NULL){
		printf("No se pudo abrir el archivo");
		exit (10);
	}
	else{
		do{
			printf("Ingrese un Numero.\nPodra salir ingresando el %d\n", Salida);
			scanf("%lu",&Dato_Cargar);
			fputc(Dato_Cargar,P_Archivo_1);
		} while(Dato_Cargar!=Salida);
	}
	fclose(P_Archivo_1);
	
	
	P_Archivo_1=fopen("./Prueba.txt","r");
	if(P_Archivo_1==NULL){
		printf("No se pudo abrir el archivo");
		exit (10);
	}
	else{
		while(!feof(P_Archivo_1)){
			Dato_Cargar=fgetc(P_Archivo_1);
			if(Dato_Cargar!=Salida)
				printf("%lu | ",(unsigned long)Dato_Cargar);
		}
		fclose(P_Archivo_1);
	}
	printf("\n");
	system("pause");
	return 0;
}

