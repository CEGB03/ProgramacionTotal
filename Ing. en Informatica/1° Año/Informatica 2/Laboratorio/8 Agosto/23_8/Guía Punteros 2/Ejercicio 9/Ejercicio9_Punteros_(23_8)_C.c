/*
	9.  Desarrollar el ejercicio anterior con funciones. Crear una funcion que
pase los valores a mayusculas y una funcion que pase los valores a minusculas.
Desarrollar un programa que declare e inicialice un vector tipo char con el
abecedario. Luego mostrar en pantalla el abecedario en mayuscula y minuscula,
utilizando punteros. Nota: la funcion para pasar a mayuscula es toupper() y a
minusculas es tolower(). Ejemplo: cadena[i] = tolower(cadena[i]); A=65
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define L_ABC 27

void Crear_ABC(char [L_ABC]);
void Mostrar_En_Mayusculas(char [L_ABC]);
void Mostrar_En_Minusculas(char [L_ABC]);

int main(){
	char Abecedario_M_m[L_ABC];
	Crear_ABC(Abecedario_M_m);
	
	printf("Con Puntero\n");
	printf("Muestra 1\n");
	Mostrar_En_Mayusculas(Abecedario_M_m);
	printf("Muestra 2\n");
	Mostrar_En_Minusculas(Abecedario_M_m);
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
	
void Mostrar_En_Mayusculas(char Arreglo[L_ABC]){
	char *Mostrar_ABC=NULL;
	Mostrar_ABC=&Arreglo[0];
	for(int ii=0 ; ii<L_ABC-1 ; ii++){
		if(ii==13){
			printf("\n");
		}
		printf("%c | ",*Mostrar_ABC+ii);
	}
	printf("\n");
}
void Mostrar_En_Minusculas(char Arreglo[L_ABC]){
	char *Mostrar_ABC=NULL;
	Mostrar_ABC=&Arreglo[0];
	for(int ii=0 ; ii<L_ABC-1 ; ii++){
		Arreglo[ii] = tolower(Arreglo[ii]);
		if(ii==13)
			printf("\n");
		printf("%c | ",*Mostrar_ABC+ii);
	}
}
