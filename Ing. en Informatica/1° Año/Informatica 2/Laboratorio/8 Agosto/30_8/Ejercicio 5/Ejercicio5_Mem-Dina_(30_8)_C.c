/*
	5. Modificar el codigo para crear una función mostrar los valores. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Mostrar_Todo(char *, int *, int *);
int main(){
	srand(time(NULL));
	char *P_Mem=NULL;
	int Ingreso=0, Nuevo_Ingreso=0,
		*P_Ingreso=&Ingreso, *P_Nuevo_Ingreso=&Nuevo_Ingreso;
	printf("¿Cuntos numeros quiere cargar? ");
	scanf("%d",&Ingreso);
	P_Mem=(char *) malloc(Ingreso*sizeof(char));
	if(P_Mem==NULL){
		printf("No hay memoria suficiente para inicializar");
		exit (1);
	}
	else{
		Mostrar_Todo(P_Mem, P_Ingreso, P_Nuevo_Ingreso);
		printf("¿Cuantos valores quiere agregar o restar?(Si desea restar ingrese el numero con un - adelante) ");
		scanf("%d",&Nuevo_Ingreso);
		
		P_Mem=(char *) realloc(P_Mem, (Ingreso+(Nuevo_Ingreso))*sizeof(char));
		Mostrar_Todo(P_Mem, P_Ingreso, P_Nuevo_Ingreso);
		printf("\n");
	}
	free(P_Mem);
	system("pause");
	return 0;
}
void Mostrar_Todo(char *P_Mem, int *P_Ingreso, int *P_Nuevo_Ingreso){
	for(int ii=0 ; ii<((*P_Ingreso)+((*P_Nuevo_Ingreso))) ; ii++){
		// para rand del n al m = (m-n)+n
		*(P_Mem + ii)=rand()%26+65;
		printf(" %c | ",*(P_Mem+ii));
	}
}

