#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Palos 4
#define Cartas 10
#define Total_Cartas 40
#define UNO 6
#define DOS 12
#define TRES 18

void Iniciar_Mazo(int *P_Mostrar);
void Reiniciar_Mazo(int *P_Mostrar);
void Mostrar_Mazo(int Arreglo[Palos][Cartas]);
void Mostrar_Mazo_Ordenado(int Jug, int *P_Mostrar);
void Repartir_Cartas(int Arreglo[Palos][Cartas]);
void Mostrar_Ganador(int Jug, int *P_Mostrar);
void Mostrar_Cartas_Juga(int Cartas_Rep, int *P_Mostrar, int N_Jug);

int main(){
	srand((int)time(0)); 
	int Mazo[Palos][Cartas]={0}, *P_MAZO=&Mazo[0][0];
	/*/
	Iniciar_Mazo(P_MAZO);
	Mostrar_Mazo(Mazo);
	printf("\n\n");
	Reiniciar_Mazo(P_MAZO);
	printf("\n\n");
	Mostrar_Mazo(Mazo);
	printf("\n\n");
	Iniciar_Mazo(P_MAZO);
	printf("\n\n");
	Mostrar_Mazo(Mazo);
	/*/
	
	
	//Iniciar juego
	Iniciar_Mazo(P_MAZO);
	Repartir_Cartas(Mazo);
	//*/
	system("pause");
	return 0;
}
void Iniciar_Mazo(int *P_Mostrar){
	int Filas=0, Columnas=0;
	for(int ii=1 ; ii<=Total_Cartas ; ){
		Filas=rand()%4;
		Columnas=rand()%10;
		if((*(P_Mostrar + Cartas*Filas + Columnas))==0){
			*(P_Mostrar + Cartas*Filas + Columnas)=ii;
			ii++;
		}
	}
}
void Reiniciar_Mazo(int *P_Mostrar){
	for(int ii=0 ; ii<Palos ; ii++){
		for(int jj=0 ; jj<Cartas ; jj++){
			*(P_Mostrar + Cartas*ii + jj)=0;
		}
	}
}
void Mostrar_Mazo(int Arreglo[Palos][Cartas]){
	for(int ii=0 ; ii<Palos ; ii++){
		for(int jj=0 ; jj<Cartas ; jj++){
			printf("%d | ", Arreglo[ii][jj]);
		}
		printf("\n");
	}
}
void Repartir_Cartas(int Arreglo[Palos][Cartas]){
	char Cam_Jug=' ', Repartir=' ';
	int Jugadores=0, *P_Mostrar=&Arreglo[0][0];
	do{
		printf ("Ingrese la opccion correspondiente\n");
		printf ("1. Para jugar 1 vs. 1\n");
		printf ("2. Para jugar 2 vs. 2\n");
		printf ("3. Para jugar 3 vs. 3\n");
		printf ("0. Para mostrar todas las cartas\n");
		scanf ("%d",&Jugadores);
		switch (Jugadores){
		case 1:
			do{
				Reiniciar_Mazo(P_Mostrar);
				Iniciar_Mazo(P_Mostrar);
				Mostrar_Mazo_Ordenado(Jugadores, P_Mostrar);
				printf ("Repartir de nuevo para volver a jugar con el mismo numero de Jugadoress? S/N  ");
				scanf(" %c",&Repartir);
			}while(Repartir=='S' || Repartir=='s');
			break;
		case 2:
			do{
				Reiniciar_Mazo(P_Mostrar);
				Iniciar_Mazo(P_Mostrar);
				Mostrar_Mazo_Ordenado(Jugadores, P_Mostrar);
				printf ("Repartir de nuevo para volver a jugar con el mismo numero de Jugadoress? S/N  ");
				scanf(" %c",&Repartir);
			}while(Repartir=='S' || Repartir=='s');
			break;
		case 3:
			do{
				Reiniciar_Mazo(P_Mostrar);
				Iniciar_Mazo(P_Mostrar);
				Mostrar_Mazo_Ordenado(Jugadores, P_Mostrar);
				printf ("Repartir de nuevo para volver a jugar con el mismo numero de Jugadoress? S/N  ");
				scanf(" %c",&Repartir);
			}while(Repartir=='S' || Repartir=='s');
			break;
		case 0:
			Mostrar_Mazo_Ordenado(Jugadores, P_Mostrar);
			break;
		}
		printf ("Desea jugar con un nunero distinto de Jugadores? S/N  ");
		scanf(" %c",&Cam_Jug);
	}while(Cam_Jug=='S' || Cam_Jug=='s');
}
void Mostrar_Mazo_Ordenado(int Jug, int *P_Mostrar){
	int Cantidad=0, N_Jug=0;
	switch (Jug){
	case 0:
		Cantidad=40;
		Mostrar_Cartas_Juga(Cantidad, P_Mostrar, N_Jug);
		break;
	case 1:
		Cantidad=3;
		printf("Estas son las cartas del jugador N°1:\n");
		Mostrar_Cartas_Juga(Cantidad, P_Mostrar, N_Jug);
		N_Jug=3;
		printf("Estas son las cartas del jugador N°2:\n");
		Mostrar_Cartas_Juga(Cantidad, P_Mostrar, N_Jug);
		break;
	case 2:
		Cantidad=3;
		printf("Estas son las cartas del jugador N°1:\n");
		Mostrar_Cartas_Juga(Cantidad, P_Mostrar, N_Jug);
		N_Jug=2;
		printf("Estas son las cartas del jugador N°2:\n");
		Mostrar_Cartas_Juga(Cantidad, P_Mostrar, N_Jug);
		N_Jug=5;
		printf("Estas son las cartas del jugador N°3:\n");
		Mostrar_Cartas_Juga(Cantidad, P_Mostrar, N_Jug);
		N_Jug=8;
		printf("Estas son las cartas del jugador N°4:\n");
		Mostrar_Cartas_Juga(Cantidad, P_Mostrar, N_Jug);
		break;
	case 3:
		Cantidad=3;
		printf("Estas son las cartas del jugador N°1:\n");
		Mostrar_Cartas_Juga(Cantidad, P_Mostrar, N_Jug);
		N_Jug=2;
		printf("Estas son las cartas del jugador N°2:\n");
		Mostrar_Cartas_Juga(Cantidad, P_Mostrar, N_Jug);
		N_Jug=5;
		printf("Estas son las cartas del jugador N°3:\n");
		Mostrar_Cartas_Juga(Cantidad, P_Mostrar, N_Jug);
		N_Jug=8;
		printf("Estas son las cartas del jugador N°4:\n");
		Mostrar_Cartas_Juga(Cantidad, P_Mostrar, N_Jug);
		N_Jug=11;
		printf("Estas son las cartas del jugador N°5:\n");
		Mostrar_Cartas_Juga(Cantidad, P_Mostrar, N_Jug);
		N_Jug=15;
		printf("Estas son las cartas del jugador N°6:\n");
		Mostrar_Cartas_Juga(Cantidad, P_Mostrar, N_Jug);
		break;
	}
}
void Mostrar_Cartas_Juga(int Cartas_Rep, int *P_Mostrar, int N_Jug){
	int iii=1;
	static const char *Palos_Cartas[4]={"Espada","Basto","Oro","Copa"},
		*Cartas_Muestra[13]={"Ancho","Dos","Tres","Cuatro","Cinco","Seis","Siete","Diez","Once","Rey"};
	iii+=N_Jug;
	while(iii<=(Cartas_Rep+N_Jug)){
		for(int ii=0  ; ii<Palos ; ii++){
			for(int jj=0 ; jj<Cartas ; jj++){
				if((*(P_Mostrar+Cartas*ii+jj))==iii && iii<=(Cartas_Rep+N_Jug)){
					printf("La carta N° %d es un %s de %s\n",iii, *(Cartas_Muestra+jj), *(Palos_Cartas+ii));
					iii++;
				}
			}
		}
	}
}
