/*
	7. Crear un programa que pregunte al usuario cuántos caracteres desea
introducir, reserve espacio para dicho número de caracteres, le permita al
usuario introducirlos desde teclado y luego mostrar por pantalla los valores.
Luego, el programa pregunta cuántos caracteres desea agregar a la lista de
elementos ya introducida, agrega espacio de memoria y solicita el ingreso de los
nuevos valores. Por último, mostrar la lista resultante. Utilizar funciones.
*/
#include <stdio.h>
#include <stdlib.h>
void Carga_Manual(int *, int *, int *);
void Muestra_Derecha(int *, int *, int *);
void Muestra_Al_Reves(int *, int *);
int main(){	
	
	int *P_Mem=NULL,
		Ingreso=0, *P_Ingreso=&Ingreso,
		Nuevo_Ingreso=0, *P_Nuevo_Ingreso=&Nuevo_Ingreso;
	printf("�Cuntos numeros quiere cargar? ");
	scanf("%d",&Ingreso);
	P_Mem=(int *) malloc(Ingreso*sizeof(int));
	if(P_Mem==NULL){
		printf("No hay memoria suficiente para inicializar");
		exit (1);
	}
	else{
		Carga_Manual(P_Mem, P_Ingreso, P_Nuevo_Ingreso);
		printf("A cotinuacion, se mostraran los valores cargado en el orden que los ingreso\n");
		Muestra_Derecha(P_Mem, P_Ingreso, P_Nuevo_Ingreso);
		//printf("A cotinuacion, se mostraran los valores cargado en a la inversa del orden que los ingreso\n");Muestra_Al_Reves(P_Mem, P_Ingreso);
		printf("Ingrese el numero que desea aumentar \n");
		scanf("%d",&Nuevo_Ingreso);
		P_Mem=(int *) realloc(P_Mem, (Ingreso+(Nuevo_Ingreso))*sizeof(int));
		if(P_Mem==NULL){
			printf("No hay memoria suficiente para inicializar");
			exit (1);
		}
		else{
			Carga_Manual(P_Mem, P_Ingreso, P_Nuevo_Ingreso);
			Muestra_Derecha(P_Mem, P_Ingreso, P_Nuevo_Ingreso);
		}
		printf("\n");
	}
	free(P_Mem);
	system("pause");
	return 0;
}
void Carga_Manual(int *P_Mem, int *P_Ingreso, int *P_Nuevo_Ingreso){
	int Carga=0;
	if((*P_Nuevo_Ingreso)==0){
		for(int ii=0 ; ii<(*P_Ingreso+(*P_Nuevo_Ingreso)) ; ii++){
			printf("Ingrese el elemto %d de los q desea ingrsar: ",ii+1);
			scanf("%d",&Carga);
			*(P_Mem + ii)=Carga;
		}
	}
	else{
		if((*P_Nuevo_Ingreso)!=0){
			for(int ii=(*P_Ingreso) ; ii<(*P_Nuevo_Ingreso)+(*P_Ingreso) ; ii++){
				printf("Ingrese el elemeto %d de los q desea ingrsar: ",ii+1);
				scanf("%d",&Carga);
				*(P_Mem + ii)=Carga;
			}
		}
	}
	
}
void Muestra_Derecha(int *P_Mem, int *P_Ingreso, int *P_Nuevo_Ingreso){
	for(int ii=0 ; ii<(*P_Ingreso+(*P_Nuevo_Ingreso)) ; ii++){
		printf("%d | ",*(P_Mem + ii));
	}
	printf("\n");
}
void Muestra_Al_Reves(int *P_Mem, int *P_Ingreso){
	for(int ii=(*P_Ingreso)-1 ; ii>=0 ; ii--){
		printf("%d | ",*(P_Mem + ii));
	}
	printf("\n");
}

