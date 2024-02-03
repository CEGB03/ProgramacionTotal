/*
	3. Cree un programa que permita reservar memoria para n caracteres (char).
Luego cargar los n caracteres, imprimirlos y liberar la memoria.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	char *P_Mem=NULL;
	int Ingreso=0;
	printf("cuntos numeros quiere cargar");
	scanf("%d",&Ingreso);
	P_Mem=(char *) malloc(Ingreso*sizeof(char));
	if(P_Mem==NULL){
		printf("No hay memoria suficiente para inicializar");
		exit (1);
	}
	else{
		for(int ii=0 ; ii<Ingreso ; ii++){
			// para rand del n al m = (m-n)+n
			*(P_Mem + ii)=rand()%26+65;
			printf(" %c | ",*(P_Mem+ii));
		}
		printf("\n");
	}
	free(P_Mem);
	system("pause");
	return 0;
}


