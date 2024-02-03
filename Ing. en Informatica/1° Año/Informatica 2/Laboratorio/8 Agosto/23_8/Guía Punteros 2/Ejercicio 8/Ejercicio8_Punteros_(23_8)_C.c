/*
	8. Desarrollar un programa que declare e inicialice un vector tipo char con
el abecedario. Luego mostrar en pantalla el abecedario en mayuscula y minuscula,
utilizando punteros. Nota: la funcion para pasar a mayuscula es toupper() y a
minusculas es tolower().  Ejemplo: cadena[i] = tolower(cadena[i]); A=65
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define L_ABC 27

void Crear_ABC(char [L_ABC]);

int main(){
	char Abecedario_M_m[L_ABC];
	char *Mostrar_ABC=NULL;
	Mostrar_ABC=&Abecedario_M_m[0];
	Crear_ABC(Abecedario_M_m);
	
	printf("Con Puntero\n");
	printf("Muestra 1\n");
	for(int ii=0 ; ii<L_ABC-1 ; ii++){
		if(ii==13){
			printf("\n");
		}
		printf("%c | ",*Mostrar_ABC+ii);
	}
	printf("\n");
	printf("Muestra 2\n");
	for(int ii=0 ; ii<L_ABC-1 ; ii++){
		Abecedario_M_m[ii] = tolower(Abecedario_M_m[ii]);
		if(ii==13)
		printf("\n");
		printf("%c | ",*Mostrar_ABC+ii);
	}
	printf("\n");
	system("pause");
	return 0;
}
void Crear_ABC(char ABC[L_ABC]){
	for(int ii=0 ; ii<L_ABC ; ii++){
		if(ii!=14){
			if(ii<14)
				ABC[ii]=65+ii;
		}
		else{
			ABC[ii]=65+ii-1;
				if(ii==14){
					ABC[ii]=165;
				}
		}
	}
}
