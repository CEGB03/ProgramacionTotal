/*
	7. Desarrollar un programa que declare e inicialice un vector tipo char con
el abecedario. Luego mostrar en pantalla el abecedario en mayúscula y minúscula,
utilizando punteros. Nota la función para pasar a mayúscula es toupper() y a
minúsculas es tolower(). Ejemplo cadena[i] = tolower(cadena[i]); A=65
*/
/*
	Hacer:
Un arreblo unidimencional de tipo char
y mostrarlo en mayuscula y en minuscula usando punteros
	Usar funciones para pasar de mayuscula a minuscula:
pasar a mayúscula es toupper() y a minúsculas es tolower()
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define L_ABC 27

void Crear_ABC(char [L_ABC]);
void Mostrar_ABC_F(char [L_ABC]);

int main(){
	char Abecedario_M_m[L_ABC];
	char *Mostrar_ABC=NULL;
	Mostrar_ABC=&Abecedario_M_m[0];
	Crear_ABC(Abecedario_M_m);
	//Mostrar_ABC_F(Abecedario_M_m);
	printf("Sin Puntero\n");
	printf("Muestra 1\n");
	for(int ii=0 ; ii<L_ABC ; ii++){
		if(ii==13)
			printf("\n");
		if(ii!=26)
			printf("%c - ",Abecedario_M_m[ii]);
		if(ii==26)
			printf("%c \n",Abecedario_M_m[ii]);
	}
	printf("Muestra 3\n");
	for(int ii=0 ; ii<L_ABC ; ii++){
		Abecedario_M_m[ii] = tolower(Abecedario_M_m[ii]);
		if(ii==13)
			printf("\n");
		if(ii!=26)
			printf("%c - ",Abecedario_M_m[ii]);
		if(ii==26)
			printf("%c \n",Abecedario_M_m[ii]);
	}
	printf("\n");
	printf("\n");
	printf("Con Puntero\n");
	printf("Muestra 4\n");
	for(int ii=0 ; ii<L_ABC-1 ; ii++){
		if(ii==13)
			printf("\n");
		//if(ii<14)
		printf("%c | ",*Mostrar_ABC+ii);
		//if(ii>=14)printf("%c | ",*Mostrar_ABC+ii-1);
	}
	printf("\n");
	printf("Muestra 5\n");
	for(int ii=0 ; ii<L_ABC-1 ; ii++){
		Abecedario_M_m[ii] = toupper(Abecedario_M_m[ii]);
		if(ii==13)
			printf("\n");
		//if(ii<14)
		printf("%c | ",*Mostrar_ABC+ii);
		//if(ii>=14)printf("%c | ",*Mostrar_ABC+ii-1);
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
			else
				ABC[ii]=65+ii-1;
		}
		if(ii==14)
		   ABC[ii]=165;
	}
}
void Mostrar_ABC_F(char ABC[L_ABC]){
	printf("Muestra 1\n");
	for(int ii=0 ; ii<L_ABC ; ii++){
		if(ii==13)
			printf("\n");
		if(ii!=26)
			printf("%c - ",ABC[ii]);
		if(ii==26)
			printf("%c \n",ABC[ii]);
	}
	printf("\n");
	printf("Muestra 2\n");
	for(int ii=0 ; ii<L_ABC ; ii++){
		printf("%d | ",ii);
		if(ii==13)
			printf("\n");
	}
	printf("\n");
	
	printf("Muestra 3\n");
	for(int ii=0 ; ii<L_ABC ; ii++){
		ABC[ii] = tolower(ABC[ii]);
		if(ii==13)
			printf("\n");
		if(ii!=26)
			printf("%c - ",ABC[ii]);
		if(ii==26)
			printf("%c \n",ABC[ii]);
	}
	printf("\n");
	
}
