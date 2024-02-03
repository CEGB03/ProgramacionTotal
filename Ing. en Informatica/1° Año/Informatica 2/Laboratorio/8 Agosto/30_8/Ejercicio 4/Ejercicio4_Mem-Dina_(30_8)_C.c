/*
	4. Cree un programa que permita reservar memoria para n caracteres (char).
Luego cargar los n caracteres e imprimirlos por pantalla. El usuario desea
agregar mas caracteres, por lo que ingresa la n cantidad de caracteres a
agregar. Luego cargar los n caracteres, imprimirlos y finalmente liberar
la memoria.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	char *P_Mem=NULL;
	int Ingreso=0, Nuevo_Ingreso=0;
	printf("¿Cuntos numeros quiere cargar? ");
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
		printf("¿Cuantos valores quiere agregar o restar?(Si desea restar ingrese el numero con un - adelante) ");
		scanf("%d",&Nuevo_Ingreso);
		
		P_Mem=(char *) realloc(P_Mem, (Ingreso+(Nuevo_Ingreso))*sizeof(char));
		for(int ii=0 ; ii<(Ingreso+(Nuevo_Ingreso)) ; ii++){
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

