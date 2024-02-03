/*
	12. Se desea cargar en un vector de punteros una cantidad de saldos de
proveedores (maximo 10). La carga finaliza con un saldo menor o igual a cero.
	Además, desarrolle las siguientes funciones para mostrar:

a. Cantidad de saldos cargados.
b. Promedio de saldos.
c. Cantidad de saldos menores al promedio.
d. Cantidad de saldos mayores al promedio.
e. Calcular cuánto fue lo recaudado en el mes.

*/
#include <stdio.h>
#include <stdlib.h>
#define L_VECTOR 10
void Menu();
int Carga_Manual(int [L_VECTOR], int , int *);
void Cant_Sal_Carg(int *);
float Promedio_Saldos(int [L_VECTOR], int *, int *, float *);
void Menores_Prom(int [L_VECTOR], int *, int *, float *);
void Mayores_Prom(int [L_VECTOR], int *, int *, float *);
void Recaudado_Mes(int [L_VECTOR], int *, int *);
int main(){
	Menu();
	//printf("\n");
	system("pause");
	return 0;
}
//	Listo
void Menu(){
	int Contador=0, Saldo=0, Arreglo[L_VECTOR]={0};
	char Opcion=' ', Salida=' ';
	int *P_Contador=&Contador, *P_Arreglo=Arreglo;
	float Promedio=0, *P_Promedio=&Promedio;
	*P_Contador=Carga_Manual(Arreglo, Saldo, P_Contador);
	do{
		printf("Bienvenido al Menu de Opciones, Seleccione segun corresponda\n");
		printf("a. Cantidad de saldos cargados.\n");
		printf("b. Promedio de saldos.\n");
		printf("c. Cantidad de saldos menores al promedio.\n");
		printf("d. Cantidad de saldos mayores al promedio.\n");
		printf("e. Calcular cuánto fue lo recaudado en el mes.\n");
		scanf(" %c",&Opcion);
		switch(Opcion){
		case 'a':
		case 'A':
			printf("a. Cantidad de saldos cargados.\n");
			Cant_Sal_Carg( P_Contador);
			break;
		case 'b':
		case 'B':
			printf("b. Promedio de saldos.\n");
			Promedio=Promedio_Saldos(Arreglo, P_Contador, P_Arreglo, P_Promedio);
			printf("El Promedio de los saldos cargado es: %.2f.\n",Promedio);
			break;
		case 'c':
		case 'C':
			printf("c. Cantidad de saldos menores al promedio.\n");
			Menores_Prom(Arreglo, P_Contador, P_Arreglo, P_Promedio);
			break;
		case 'd':
		case 'D':
			printf("d. Cantidad de saldos mayores al promedio.\n");
			Mayores_Prom(Arreglo, P_Contador, P_Arreglo, P_Promedio);
			break;
		case 'e':
		case 'E':
			printf("e. Calcular cuánto fue lo recaudado en el mes.\n");
			Recaudado_Mes(Arreglo, P_Contador, P_Arreglo);
			break;
		default:
			printf("Seleccion Invalida.\n");
			break;
		}
		printf("¿Desea volver al menu de seleccion?\n");
		scanf(" %c",&Salida);
	} while(Salida=='s' || Salida=='S');
}
//	Listo
int Carga_Manual(int Arreglo[L_VECTOR], int Saldo, int *P_Contador){
	int Cont=0;
	do{
		printf("Ingrese el saldo N°%d, si ya termino de cargar ingrese un numero menor o igual a 0, (valor maximo del Saldo 10)\n",Cont+1);
		scanf("%d",&Saldo);
		if(Saldo>0){
			Arreglo[Cont]=Saldo;
			Cont++;
		}
		P_Contador=&Cont;
	} while(((*P_Contador)<=9) && (Saldo>0));
	return (*P_Contador);
}
//	Listo
void Cant_Sal_Carg(int *P_Contador){
	int N_Saldos=0;
	//int Cont=(*P_Contador);
	/*
	printf("Cont: %d\n",Cont);
	printf("Puntero: %d\n",*P_Contador);
	*/
	for(int ii=0 ; ii<(*P_Contador) ; ii++){
		N_Saldos++;
	}
	printf("La cantidad de saldos cargados fueron: %d\n",N_Saldos);
}
//	Listo
float Promedio_Saldos(int Arreglo[L_VECTOR], int *P_Contador, int *P_Arreglo, float *P_Promedio){
	int Suma=0, Cont=(*P_Contador);
	float Promedio=0;
	for(int ii=0 ; ii<(*P_Contador) ; ii++){
		P_Arreglo=&Arreglo[ii];
		Suma+=(*P_Arreglo);
	}
	//printf("Suma con Puntero: %d.\n",Suma);
	Promedio=(float) Suma/Cont;
	return Promedio;
}
//	Listo
void Mayores_Prom(int Arreglo[L_VECTOR], int *P_Contador, int *P_Arreglo, float *P_Promedio){
	int Ma_Prom=0;
	for(int ii=0 ; ii<(*P_Contador) ; ii++){
		P_Arreglo=&Arreglo[ii];
		if((*P_Arreglo)>(*P_Promedio)){
			Ma_Prom++;
		}
	}
	printf("Hay %d Saldos mayores al promedio\n",Ma_Prom);
}
//	Listo
void Menores_Prom(int Arreglo[L_VECTOR], int *P_Contador, int *P_Arreglo, float *P_Promedio){
	int Me_Prom=0;
	float Prom=(*P_Promedio);
	for(int ii=0 ; ii<(*P_Contador) ; ii++){
		P_Arreglo=&Arreglo[ii];
		if(Arreglo[ii]<Prom){
			Me_Prom++;
		}
	}
	printf("Hay %d Saldos menores al promedio\n",Me_Prom);

}
//	Listo
void Recaudado_Mes(int Arreglo[L_VECTOR], int *P_Contador, int *P_Arreglo){
	int Suma=0;
	for(int ii=0 ; ii<(*P_Contador) ; ii++){
		P_Arreglo=&Arreglo[ii];
		Suma+=(*P_Arreglo);
	}
	printf("El Recaudado en el mes es de $%d.\n",Suma);
}
