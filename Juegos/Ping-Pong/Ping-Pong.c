
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#define ALTO_CANCHA 21
#define LARGO_CANCHA 75
#define POSICIONES 2

//  Funcion Inicio es para imprimir las entidades en el campo
void Inicio(char Campo[ALTO_CANCHA][LARGO_CANCHA], int Jugador1[POSICIONES][POSICIONES], int Pelota[POSICIONES][POSICIONES], int Bot1[POSICIONES+1]);
void GameLoop(char Campo[ALTO_CANCHA][LARGO_CANCHA], int Jugador1[POSICIONES][POSICIONES], int Pelota[POSICIONES][POSICIONES], int Bot1[POSICIONES+1]);
void Dibujar(char Campo[ALTO_CANCHA][LARGO_CANCHA]);
void Mod_Veri(char Campo[ALTO_CANCHA][LARGO_CANCHA], int Jugador1[POSICIONES][POSICIONES], int Pelota[POSICIONES][POSICIONES], int Bot1[POSICIONES+1], int *Gol);
void Actualizar(char Campo[ALTO_CANCHA][LARGO_CANCHA], int Jugador1[POSICIONES][POSICIONES], int Pelota[POSICIONES][POSICIONES], int Bot1[POSICIONES+1]);
void Cancha(char Campo[ALTO_CANCHA][LARGO_CANCHA]);
void Muestra_E(char Campo[ALTO_CANCHA][LARGO_CANCHA]);
void Raqueta_J1(char Campo[ALTO_CANCHA][LARGO_CANCHA], int [POSICIONES][POSICIONES]);
void Raqueta_B1(char Campo[ALTO_CANCHA][LARGO_CANCHA], int Bot1[POSICIONES+1]);
void Pelota_F(char Campo[ALTO_CANCHA][LARGO_CANCHA], int Pelota[POSICIONES][POSICIONES]);

int main()
{
    int Jugador1[POSICIONES][POSICIONES]={0}, Pelota[POSICIONES][POSICIONES]={0}, Bot1[POSICIONES+1]={0};
    char Campo[ALTO_CANCHA][LARGO_CANCHA]={0};
    //          Posiciones iniciales
    Pelota[0][0]=ALTO_CANCHA/POSICIONES;//     Dara 37
    Pelota[0][1]=LARGO_CANCHA/POSICIONES;//    Dara 10
    //  la posicion esta dara la mitad de la cancha
    Jugador1[0][0]=8;//    Para que inicie un poco mas arriba que la pelota
    Jugador1[0][1]=12;//   Para que tenga 4 casillas la paleta del jugador
    
    Bot1[0]=7;//    Para que inicie un poco mas arriba que la pelota
    Bot1[1]=13;//   Para que tenga 4 casillas la paleta del jugador

    //          Movimiento
    Pelota[1][0]= -1;//    Para que inicie un poco mas arriba que la pelota
    Pelota[1][1]= -1;
    Bot1[2]= -1;
    //          Juego
    Inicio(Campo, Jugador1, Pelota, Bot1);
	GameLoop(Campo, Jugador1, Pelota, Bot1);
    
    
    system("pause");
    return 0;
}
void GameLoop(char Campo[ALTO_CANCHA][LARGO_CANCHA], int Jugador1[POSICIONES][POSICIONES], int Pelota[POSICIONES][POSICIONES], int Bot1[POSICIONES+1])
{
	int Gol=0;
	do
	{
		Dibujar(Campo);
		Mod_Veri(Campo, Jugador1, Pelota, Bot1, &Gol);
		Actualizar(Campo, Jugador1, Pelota, Bot1);
		Sleep(120);
	} while(Gol==0);
}
void Dibujar(char Campo[ALTO_CANCHA][LARGO_CANCHA])
{
	system("cls");//	Linux = system("clear");
	Muestra_E(Campo);
}
void Muestra_E(char Campo[ALTO_CANCHA][LARGO_CANCHA])
{
    for (int ii = 0; ii < ALTO_CANCHA; ii++)
    {
        for (int jj = 0; jj < LARGO_CANCHA; jj++)
        {
            printf("%c",Campo[ii][jj]);
        }
        printf("\n");
    }
}
void Mod_Veri(char Campo[ALTO_CANCHA][LARGO_CANCHA], int Jugador1[POSICIONES][POSICIONES], int Pelota[POSICIONES][POSICIONES], int Bot1[POSICIONES+1], int *Gol)
{
	int ii=0;
	char Tecla=' ';
	//		VERIFICACION
	if( Pelota[0][0]==1 || Pelota[0][0]== (ALTO_CANCHA-2) )
		Pelota[1][0]*= (-1);
	if( Pelota[0][1]==1 || Pelota[0][1]== (LARGO_CANCHA-2) )
		*Gol=1;
	//		Choque con el Jugador1
	if( Pelota[0][1]==4 )
	{
		for(ii=Jugador1[0][0] ; ii<=Jugador1[0][1] ; ii++)
		{
			if(ii==Pelota[0][0])
				Pelota[1][1]*= (-1);
		}
	}
	//		Choque con el Bot1
	if( Pelota[0][1]== (LARGO_CANCHA-5) )
	{
		for(ii=Bot1[0] ; ii<=Bot1[1] ; ii++)
		{
			if(ii==Pelota[0][0])
				Pelota[1][1]*= (-1);
		}
	}
	if( Bot1[0]==1 || Bot1[1]==ALTO_CANCHA-1)
		Bot1[2]*= (-1);
	
	//		MODIFICACION
	if( *Gol==0)
	{
		Pelota[0][0]+=(Pelota[1][0]);
		Pelota[0][1]+=(Pelota[1][1]);
		
		Bot1[0]+=Bot1[2];
		Bot1[1]+=Bot1[2];
		
		if( kbhit()==1 )
		{
			Tecla=getch();
			if( Tecla=='w' && Jugador1[0][0]!=1)
			{
				Jugador1[0][0]-=1;
				Jugador1[0][1]-=1;
			}
			if( Tecla=='s' && Jugador1[0][1]!=ALTO_CANCHA-1)
			{
				Jugador1[0][0]+=1;
				Jugador1[0][1]+=1;
			}
		}
	}
}
void Actualizar(char Campo[ALTO_CANCHA][LARGO_CANCHA], int Jugador1[POSICIONES][POSICIONES], int Pelota[POSICIONES][POSICIONES], int Bot1[POSICIONES+1])
{
	Cancha(Campo);
	Raqueta_J1(Campo, Jugador1);
	Raqueta_B1(Campo, Bot1);
	Pelota_F(Campo, Pelota);
}
void Inicio(char Campo[ALTO_CANCHA][LARGO_CANCHA], int Jugador1[POSICIONES][POSICIONES], int Pelota[POSICIONES][POSICIONES], int Bot1[POSICIONES+1])
{
    Cancha(Campo);
    Raqueta_J1(Campo, Jugador1);
    Raqueta_B1(Campo, Bot1);
    Pelota_F(Campo, Pelota);
}
void Cancha(char Campo[ALTO_CANCHA][LARGO_CANCHA])
{
    for (int ii = 0; ii < ALTO_CANCHA; ii++)
    {
        for (int jj = 0; jj < LARGO_CANCHA; jj++)
        {
            if(ii==0 && jj==0)
                Campo[ii][jj]=201;// 201='╔'
            if((ii==(ALTO_CANCHA-1)) && jj==0)
                Campo[ii][jj]=200;// 200='╚'
            if(ii==0 && (jj==(LARGO_CANCHA-1)))
                Campo[ii][jj]=187;// 187='╗'
            if((ii==(ALTO_CANCHA-1)) && (jj==(LARGO_CANCHA-1)))
                Campo[ii][jj]=188;// 188='╝'
            if((ii==0 || ii==(ALTO_CANCHA-1)) && (jj>0 && jj<(LARGO_CANCHA-1)))
                Campo[ii][jj]=205;// 205='═'
            if((jj==0 || jj==(LARGO_CANCHA-1)) && (ii>0 && ii<(ALTO_CANCHA-1)))
                Campo[ii][jj]=186;// 186='║'
            if(  (ii!=0) && (jj!=LARGO_CANCHA-1) && (jj!=0) && (ii!=ALTO_CANCHA-1) )
                Campo[ii][jj]=32;// 32=espacio en blanco==' '
            if(  (ii!=0) && (jj!=LARGO_CANCHA-1) && (jj!=0) && (ii!=ALTO_CANCHA-1) && jj==37)
                Campo[ii][jj]=179;// 179='│'
        }
    }
    
}
void Raqueta_J1(char Campo[ALTO_CANCHA][LARGO_CANCHA], int Jugador1[POSICIONES][POSICIONES])
{
    
    for (int ii = Jugador1[0][0] ; ii < Jugador1[0][1]; ii++)
    {
        for (int jj=2 ; jj<=3; jj++)//  El valor de 2 es para que se empieza a dibuajar a una diverencia entre el borde y la raqueta, y el 3 para darle un grosor de 2
        {
            Campo[ii][jj]=88;// 88='X'
        }
    }
}
void Raqueta_B1(char Campo[ALTO_CANCHA][LARGO_CANCHA], int Bot1[POSICIONES+1])
{
    for (int ii = Bot1[0] ; ii < Bot1[1]; ii++)
    {
        for (int jj=(LARGO_CANCHA-4) ; jj<=(LARGO_CANCHA-3) ; jj++)//  El valor de -4 es para que se empieza a dibuajar a una diverencia entre el borde y la raqueta, y el -2 para darle un grosor de 2
        {
            Campo[ii][jj]=88;// 88='X'
        }
    }
}
void Pelota_F(char Campo[ALTO_CANCHA][LARGO_CANCHA], int Pelota[POSICIONES][POSICIONES])
{
    Campo[Pelota[0][0]][Pelota[0][1]]=254;//  254='■'
}
