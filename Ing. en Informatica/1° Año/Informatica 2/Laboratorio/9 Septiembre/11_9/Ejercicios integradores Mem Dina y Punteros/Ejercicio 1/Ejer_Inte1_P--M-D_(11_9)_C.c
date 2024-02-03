/*
	1. Escribir un programa donde se solicite el tamaño del vector
(entre 5 y 10) y reservar memoria. Luego al finalizar la ejecucion del programa
liberarla. Luego crear las siguientes funciones
	- cargarNumero(), que rellene aleatoriamente el vector con números entre el
1 y 10 utilizando punteros.
	- mostrarNumero(), que muestre el vector anterior por medio de punteros los
valores del vector y las direcciones en las cuales los valores sean mayores a 5
inclusive.
	- sumarNumero() que sume todos los números del vector de manera recursiva.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Carga_Rand(int *P_Tam_Dina, int *P_Tam);
void Muestra(int *P_Tam_Dina, int *P_Tam, int Control);
int Suma(int *P_Tam_Dina, int *P_Tam);

int main(int argc, char *argv[]) {
	int Tam=0, *P_Tam_Dina=NULL, *P_Tam=&Tam, Control=0;
	srand(time(NULL));
	Tam=rand()%6+5;
	printf("el tamaño esta vez sera de: %d \n",Tam);
	P_Tam_Dina=(int *)malloc(Tam*sizeof(int));
	if(P_Tam_Dina==NULL){
		printf("No hay memoria suficiente para iniciar");
		exit (1);
	}
	else{
		Carga_Rand(P_Tam_Dina, P_Tam);
		printf("A continuacion se mostraran los numeros que fueron cargados aleatoriamente:\n");
		Muestra(P_Tam_Dina, P_Tam, Control);
		Control=1;
		printf("A continuacion se mostraran los numeros que fueron cargados y son mayor o igual a 5 y sus direcciones de memoria:\n");
		Muestra(P_Tam_Dina, P_Tam, Control);
		printf("La Suma de los numeros generados es de: %d\n",Suma(P_Tam_Dina, P_Tam));
	}
	free(P_Tam_Dina);
	system("pause");
	return 0;
}
void Carga_Rand(int *P_Tam_Dina, int *P_Tam){
	srand(time(NULL));
	for(int ii=0 ; ii<(*P_Tam) ; ii++){
		*(P_Tam_Dina+ii)=rand()%10+1;
	}
}
void Muestra(int *P_Tam_Dina, int *P_Tam, int Control){
	switch(Control){
	case 0:
		for(int ii=0 ; ii<(*P_Tam) ; ii++){
			printf("%d | ",*(P_Tam_Dina+ii));
		}
		printf("\n");
		break;
	case 1:
		for(int ii=0 ; ii<(*P_Tam) ; ii++){
			if((*(P_Tam_Dina+ii))>=5){
				printf("%d y su direccion de memoria es: %X ",*(P_Tam_Dina+ii),(P_Tam_Dina+ii));
				printf("\n");
			}
		}
		break;
	}
}
int Suma(int *P_Tam_Dina, int *P_Tam){
	int Suma=0;
	for(int ii=0 ; ii<(*P_Tam) ; ii++){
		Suma+=(*(P_Tam_Dina+ii));
	}
	return Suma;
}
