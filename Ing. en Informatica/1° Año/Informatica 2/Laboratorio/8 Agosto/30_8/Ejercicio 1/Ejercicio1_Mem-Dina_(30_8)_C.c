/*
	1. Cree un programa que permita reservar memoria para n valores enteros.
Luego cargar los n valores, imprimirlos y liberar la memoria.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int *P_Mem=NULL, Ingreso=0;
	printf("cuntos numeros quiere cargar");
	scanf("%d",&Ingreso);
	P_Mem=(int *) malloc(Ingreso*sizeof(int));
	if(P_Mem==NULL){
		printf("No hay memoria suficiente para inicializar");
		exit (1);
	}
	else{
		for(int ii=0 ; ii<Ingreso ; ii++){
			*(P_Mem + ii)=rand()%20+1;
			printf("%d | ",*(P_Mem+ii));
		}
		printf("\n");
	}
	free(P_Mem);
	system("pause");
	return 0;
}


