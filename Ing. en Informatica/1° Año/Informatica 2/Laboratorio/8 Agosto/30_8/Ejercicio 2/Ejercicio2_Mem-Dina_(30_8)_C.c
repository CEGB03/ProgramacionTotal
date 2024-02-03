/*
	2.  Cree un programa que permita reservar memoria para n valores decimales
(float). Luego cargar los n valores, imprimirlos y liberar la memoria.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	float *P_Mem=NULL;
	int Ingreso=0;
	printf("cuntos numeros quiere cargar");
	scanf("%d",&Ingreso);
	P_Mem=(float *) malloc(Ingreso*sizeof(float));
	if(P_Mem==NULL){
		printf("No hay memoria suficiente para inicializar");
		exit (1);
	}
	else{
		for(int ii=0 ; ii<Ingreso ; ii++){
			// para rand del n al m = (m-n)+n
			*(P_Mem + ii)=rand()%100+1;
			printf(" %.2f | ",*(P_Mem+ii));
		}
		printf("\n");
	}
	free(P_Mem);
	system("pause");
	return 0;
}


