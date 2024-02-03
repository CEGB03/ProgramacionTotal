#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TABLERO_FILAS 3
#define TABLERO_COLUMNAS 3
#define NUM_1 49
void Iniciar_Tablero(int *P_Tablero);
int Posicion_Ficha(int Turno, int Ficha, int *P_Tablero);
void Mostrar_Tablero(int *P_Tablero);
int Ganador(int Tablero[TABLERO_FILAS][TABLERO_COLUMNAS], int Ficha, int Turnos);
int main(){
	srand((int)time(0));
    int Turnos=0, Ficha=0, Salida=0;
    int Tablero[TABLERO_FILAS][TABLERO_COLUMNAS]={0}, *P_Tablero=&Tablero[0][0];
    Mostrar_Tablero(P_Tablero);
    system("cls");
    Iniciar_Tablero(P_Tablero);
    Mostrar_Tablero(P_Tablero);
    do{
        system("pause");
        system("cls");
        system("cls");
    if (Turnos%2==0)
        printf("\tTurno del Jugador\n");
    else
        printf("\tTurno del Bot\n");
        Mostrar_Tablero(P_Tablero);
        if (Turnos%2==0){
            printf("%cEn que posicion numnerica quiere poner su ficha? ",168);
            scanf("%d",&Ficha);
        }
        Ficha=Posicion_Ficha(Turnos, Ficha, P_Tablero);
        Salida=Ganador(Tablero, Ficha, Turnos);
        Turnos++;
        if (Salida==74 || Salida==66){
            Turnos=10;
        }
        
    } while (Turnos<9);
	system("pause");
	system("cls");
    system("cls");
	Mostrar_Tablero(P_Tablero);
    if (Salida==74)
        printf("Gano el %cugador\nFinalizo el Juego...\n",Salida);
    if (Salida==66)
        printf("Gano el %cot\nFinalizo el Juego...\n",Salida);
    system("pause");
    system("cls");
    return 0;
}
void Iniciar_Tablero(int *P_Tablero){
    int Contador=0;
    for (int ii = 0; ii < TABLERO_FILAS; ii++){
        for (int jj = 0; jj < TABLERO_COLUMNAS; jj++){
            *(P_Tablero+TABLERO_COLUMNAS*ii+jj)=NUM_1+Contador;
            Contador++;
        }
    }
}
int Posicion_Ficha(int Turno, int Ficha, int *P_Tablero){
    int Otra_Vez=0;
    if (Turno%2==0){
        do{
            Ficha+=48;
            for (int ii = 0; ii < TABLERO_FILAS; ii++){
                for (int jj = 0; jj < TABLERO_COLUMNAS; jj++){
                    if (  (*(P_Tablero+TABLERO_COLUMNAS*ii+jj)==Ficha) && (*(P_Tablero+TABLERO_COLUMNAS*ii+jj)!=79)  && (*(P_Tablero+TABLERO_COLUMNAS*ii+jj)!=88)   ){
                        *(P_Tablero+TABLERO_COLUMNAS*ii+jj)=88;
                        Otra_Vez=1;
                    }
                }
            }
			if(Otra_Vez!=1){
				printf("Posicion numnerica ocupada, seleccione otra? ");
				scanf("%d",&Ficha);
				Otra_Vez=0;
			}
        }while(Otra_Vez!=1);
    }
    else{
        do{
            Ficha=rand()%9+1;
            Ficha+=48;
            if (Turno%2==1){
                for (int ii = 0; ii < TABLERO_FILAS; ii++){
                    for (int jj = 0; jj < TABLERO_COLUMNAS; jj++){
                        if (  (*(P_Tablero+TABLERO_COLUMNAS*ii+jj)==Ficha) && (*(P_Tablero+TABLERO_COLUMNAS*ii+jj)!=88) && (*(P_Tablero+TABLERO_COLUMNAS*ii+jj)!=79)){
                            *(P_Tablero+TABLERO_COLUMNAS*ii+jj)=79;
                            Otra_Vez=1;
                        }
                    }
                }
            }
        }while(Otra_Vez!=1);
    }
    return Ficha;
}
void Mostrar_Tablero(int *P_Tablero){
    for (int ii = 0; ii < TABLERO_FILAS; ii++){
        if(ii==0)
            printf("\n\t-----------------\n\t|");
        else
            printf("|\n\t-----------------\n\t|");
        for (int jj = 0; jj < TABLERO_COLUMNAS; jj++){
            printf("| %c |",*(P_Tablero+TABLERO_COLUMNAS*ii+jj));
        }
    }
    printf("|\n\t-----------------\n\n");
}
int Ganador(int Tablero[TABLERO_FILAS][TABLERO_COLUMNAS], int Ficha, int Turnos){
    char Win=' ';
    int Liberar=0;
    if (Turnos%2==0)
        Ficha=88;
    else
        Ficha=79;
    if (Tablero[1][1]==Ficha){
        if (Tablero[0][0]==Ficha && Tablero[2][2]==Ficha)
            Liberar=1;
        if (Tablero[0][2]==Ficha && Tablero[2][0]==Ficha)
            Liberar=1;
        if (Tablero[0][1]==Ficha && Tablero[2][1]==Ficha)
            Liberar=1;
        if (Tablero[1][0]==Ficha && Tablero[1][2]==Ficha)
            Liberar=1;
    }
    if (Tablero[0][0]==Ficha){
        if (Tablero[1][0]==Ficha && Tablero[2][0]==Ficha)
            Liberar=1;
        if (Tablero[0][1]==Ficha && Tablero[0][2]==Ficha)
            Liberar=1;
    }
    if (Tablero[2][2]==Ficha){
        if (Tablero[0][2]==Ficha && Tablero[1][2]==Ficha)
            Liberar=1;
        if (Tablero[2][0]==Ficha && Tablero[2][1]==Ficha)
            Liberar=1;
    }
    if (Liberar==1){
        if (Turnos%2==0)
            Win='J';
        else
            Win='B';
    }
    return Win;
}
