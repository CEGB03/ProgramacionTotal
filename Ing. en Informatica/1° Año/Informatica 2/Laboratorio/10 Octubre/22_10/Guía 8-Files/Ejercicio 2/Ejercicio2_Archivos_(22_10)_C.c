/*
	2. Escriba un programa que cree un archivo binario llamado "pares.txt” que
contenga los valores pares del 1 al 100. Luego abrir el archivo y mostrarlo.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *P_Archivo_2;
	int Pares=0, Cont=0;
	P_Archivo_2=fopen("pares.txt","w");
	if(P_Archivo_2==NULL){
		printf("No se pudo abrir el archivo para escribirlo");
		exit (10);
	}
	else{
		for(int ii=1 ; ii<=100 ; ii++){
			if(ii%2==0){
				Pares=ii;
				fprintf(P_Archivo_2, "%d ", Pares);
			}
		}
	}
	if(fclose(P_Archivo_2)==0)
	   printf("Se cerro exitosamente\n\n");
	
	
	P_Archivo_2=fopen("pares.txt","r");
	if(P_Archivo_2==NULL){
		printf("No se pudo abrir el archivo para leerlo");
		exit (10);
	}
	else{
		while(!feof(P_Archivo_2)){
			fscanf(P_Archivo_2, "%d ", &Pares);
			printf("%d | ",Pares);
		}
		if(fclose(P_Archivo_2)==0)
			printf("\nSe cerro exitosamente\n\n");
	}
	
	system("pause");
	return 0;
}
