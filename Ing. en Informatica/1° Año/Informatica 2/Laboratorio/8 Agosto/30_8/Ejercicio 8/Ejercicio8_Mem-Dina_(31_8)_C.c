/*
	8. Crear un programa en la cual contenga un menú de opciones con distintas
operaciones: 

	a. Reserva de memoria e introducción de datos enteros

	b. Agregar reserva de memoria e introducción de nuevos datos enteros

	c. Mostrar los datos en el orden y orden invertido al que fueron introducidos
*/
#include <stdio.h>
#include <stdlib.h>
void Carga_Manual(int *, int *, int *);
void Muestra_Derecha(int *, int *, int *);
void Muestra_Al_Reves(int *, int *, int *);
int main(){	
	char Opcion=' ', *P_Opcion=&Opcion,
		Salida=' ', *P_Salida=&Salida;
	int *P_Mem=NULL,
		Ingreso=0, *P_Ingreso=&Ingreso,
		Nuevo_Ingreso=0, *P_Nuevo_Ingreso=&Nuevo_Ingreso;
	do{
		do{
			printf("Bienvenido al Menu de Seleccion.\nSeleccione Segun desee.\n");
			printf("a. Reserva de memoria e introducción de datos enteros.\n");
			printf("b. Agregar reserva de memoria e introducción de nuevos datos enteros.\n");
			printf("c. Mostrar los datos en el orden y orden invertido al que fueron introducidos\n");
			scanf(" %c",&Opcion);
			switch((*P_Opcion)){
			case 'a':
			case 'A':
				printf("¿Cuntos numeros quiere cargar? ");
				scanf("%d",&Ingreso);
				P_Mem=(int *) malloc(Ingreso*sizeof(int));
				if(P_Mem==NULL){
					printf("No hay memoria suficiente para inicializar");
					exit (1);
				}
				else{
					Carga_Manual(P_Mem, P_Ingreso, P_Nuevo_Ingreso);
				}
				break;
			case 'b':
			case 'B':
				printf("Ingrese el numero que desea aumentar \n");
				scanf("%d",&Nuevo_Ingreso);
				P_Mem=(int *) realloc(P_Mem, (Ingreso+(Nuevo_Ingreso))*sizeof(int));
				if(P_Mem==NULL){
					printf("No hay memoria suficiente para inicializar");
					exit (1);
				}
				else{
					Carga_Manual(P_Mem, P_Ingreso, P_Nuevo_Ingreso);
				}
				break;
			case 'c':
			case 'C':
				printf("A cotinuacion, se mostraran los valores cargado en el orden que los ingreso\n");
				Muestra_Derecha(P_Mem, P_Ingreso, P_Nuevo_Ingreso);
				printf("A cotinuacion, se mostraran los valores cargado en a la inversa del orden que los ingreso\n");
				Muestra_Al_Reves(P_Mem, P_Ingreso, P_Nuevo_Ingreso);
				break;
			}
			printf("¿Desea volver al Menu de Seleccion para realizar otra seleccion? ");
			scanf(" %c",&Salida);
		} while((*P_Salida)=='s' || (*P_Salida)=='S');
			printf("¿Desea volver al Menu de Seleccion para volver a iniciar desde cero? ");
			scanf(" %c",&Salida);
	} while((*P_Salida)=='s' || (*P_Salida)=='S');
	//printf("\n");
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
void Muestra_Al_Reves(int *P_Mem, int *P_Ingreso, int *P_Nuevo_Ingreso){
	for(int ii=(*P_Ingreso+(*P_Nuevo_Ingreso))-1 ; ii>=0 ; ii--){
		printf("%d | ",*(P_Mem + ii));
	}
	printf("\n");
}
