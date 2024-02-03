/*
Antes de ejecutarlo porfavor ponga la ventana de ejecucuion en el siuiente formato:

Tamaño de Ventana:
Ancho 80
Alto 32

esto es para poder jugar comodamente.

*/
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <list>
#include <iostream>

using namespace std;

#define ARRIBA 72//ESTO SIRVE MUSHO
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80

void gotoxy(int x, int y)
{
	HANDLE hCon;//hay que escribir bien las palabras en ingles, bobo
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hCon, dwPos);
}
void OcultarCursor()
{
	HANDLE hCon;//hay que escribir bien las palabras en ingles, bobo
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 100;//esto es para que tan grueso se quiere el Cursor
	cci.bVisible = FALSE;//esto ra para mostrar o no el cursor titilando
	
	SetConsoleCursorInfo(hCon,&cci);
	
}
void Pintar_Limites()
{
	for(int i = 2; i<78; i++)//aca se delimitan los limites horizonctales
	{
		gotoxy(i, 3); printf("%c", 205);
		gotoxy(i, 30); printf("%c", 205);
	}
	for(int i=3 ; i<31 ; i++)//aca se delimitan los limites horizonctales
	{
		gotoxy(2, i); printf("%c",186);
		gotoxy(77, i); printf("%c",186);
	}
	gotoxy(2,3); printf("%c",201);//Estas 4 lineas son las 4 puntas
	gotoxy(2,30); printf("%c",200);
	gotoxy(77,3); printf("%c",187);
	gotoxy(77,30); printf("%c",188);
}


class NAVE
{
	int x,y;
	int Corazones;
	int Vidas;
public:
	NAVE(int _x, int _y, int _Corazones, int _Vidas): x(_x), y(_y), Corazones(_Corazones), Vidas(_Vidas){}
	int X(){return x; }// esto y los dos de abjao es para poder acceder a los valores x, y, Vidas que en un principo estan privados
	int Y(){return y; }
	int Vid(){return Vidas; }
	void COR(){ Corazones--; }
	void Pintar();//esto es para poder pintarla
	void Borrar();//esto es para poder borrarla
	void Mover();//esto es para poder moverla
	void Pintar_Corazones();//esto es para poder pintar los Corazones
	void Morir();//esto es para poder hacer una accion de Morir
};
void NAVE::Pintar()//Aca es la forma que tiene la nave, se usa el codigo ascii
{
	gotoxy(x,y); printf("  %c",30);
	gotoxy(x,y+1); printf(" %c%c%c", 40,207,41);
	gotoxy(x,y+2); printf("%c%c %c%c", 30,190,190,30);
}
void NAVE::Borrar()//Aca es para borrar el rastro de la nave cuando se mueve
{
	gotoxy(x,y); printf("      ");
	gotoxy(x,y+1); printf("      ");
	gotoxy(x,y+2); printf("      ");
}
void NAVE::Mover()
{
	if(kbhit())
	{
		char Tecla = getch();
		Borrar();
		if(Tecla == IZQUIERDA && x>4) x--;//Al principio es tan ndefinidos los valores de las flechas para que se puedan identificar
		if(Tecla == DERECHA && x+6<77)x++;
		if(Tecla == ARRIBA && y>4)y--;
		if(Tecla == ABAJO && y+3<30)y++;
		if(Tecla=='e')Corazones--;//idealmente esto es para eliminar voluntariamente un corazon
		if(Tecla=='q')Corazones++;//idealmente esto es para agregar voluntariamente un corazon
		Pintar();
		Pintar_Corazones();//esto es para que pinte los corazones del jugador
	}
}
void NAVE::Pintar_Corazones()// esto es para que muestre las vidas que tiene el jugador
{
	gotoxy(50,2); printf("VIDAS %d",Vidas);
	gotoxy(64,2); printf("SALUD");
	gotoxy(70,2); printf("     ");
	for(int i=0 ; i<Corazones ; i++)
	{
		gotoxy(70+i,2); printf ("%c",3);
	}
}
void NAVE::Morir()//Aca esta la animacion de Morir
{
	if(Corazones==0)
	{
		Borrar();
		gotoxy(x,y); 	printf("  **  ");
		gotoxy(x,y+1); 	printf(" ***  ");
		gotoxy(x,y+2);	printf("  **  ");
		Sleep(200);
		
		Borrar();
		gotoxy(x,y); 	printf("* ** *");
		gotoxy(x,y+1); 	printf(" **** ");
		gotoxy(x,y+2);	printf("* ** *");
		Sleep(200);
		
		Borrar();
		Vidas--;
		Corazones=3;
		Pintar_Corazones();
		Pintar();
	}
}


class AST//aca esta la creaccion de los asteroides
{
	int x,y;
public:
	AST(int _x, int _y): x(_x), y(_y){}
	void Pintar();
	void Mover();
	void Choque(class NAVE &N);
	int X(){return x; }
	int Y(){return y; }
};
void AST::Pintar()//aca como van a ser los asteoides
{
	gotoxy(x,y); printf ("%c",184);
}
void AST::Mover()//aca por donde van a caer y que primero borre la caida
{
	gotoxy(x,y); printf(" ");
	y++;
	if(y>29)
	{
		x=rand()%72+3;
		y=4;
	}
	Pintar();
}
void AST::Choque(class NAVE &N)//aca esta el que poasa cuando choca con la nave
{
	if( x >= N.X() && x < N.X()+5 && y >= N.Y() && y <= N.Y()+2)
	{
		N.COR();
		N.Borrar();
		N.Pintar();
		N.Pintar_Corazones();
		
		x=rand()%72+3;
		y=4;
	}
}


class BALA//aca esta la creaccion de las balas
{
	int x,y;
public:
	BALA(int _x, int _y):x(_x), y(_y){}//esto es un cosntructor
	int X(){return x; }
	int Y(){return y; }
	void Mover();//mover las balas
	bool Fuera();//cuando las balas se van fuera
};
void BALA::Mover()//el como moverlas 
{
	gotoxy(x,y); printf(" ");
	y--;
	gotoxy(x,y); printf("*");
}
bool BALA::Fuera()//el borrarlas cuando lleguen al limite
{
	if(y == 4) return true;
	return false;
}


int main ()
{
	OcultarCursor();//el ocultar el cursor hay que llamarlo para que haga efecto
	Pintar_Limites();//el pintar lps limites tambien hay que llamar
	NAVE N(27,27,3,3);//27,27 son las coordenadas iniciales de la nave, 3,3 son las vidas y los corazones
	N.Pintar();
	N.Pintar_Corazones();
	
	list <AST*> A;//esta lista es para crear los asteroides en el juego
	list <AST*>::iterator itA;//iterador para recorrer la lista de asteroides
	for(int i=0; i<6; i++)//cantidad de asteoirdes que caen
	{
		A.push_back(new AST(rand()%72+3 , rand()%5+4));//aca esta la creacion aleatoria de los asteroides
	}
	list <BALA*> B;//esta lista es para crar la balas en el juego
	list <BALA*>::iterator it;//esto es para revisr la lisata siempre que se necesite
	
	bool Game_Over = false;
	int Score = 0;
	while(!Game_Over)//el poner "!" hace que busque q sea falsa
	{
		gotoxy(4,2); printf("Score %d", Score);// para que muestre los puntos que tiene el jugador y donde van ubicados
		
		if(kbhit())//como disparar las balas
		{
			char Tecla = getch();
			if(Tecla == 'f' || Tecla == 'F')
			B.push_back(new BALA(N.X()+2, N.Y()-1));//esto es para poder de donde sale la bala
		}
		for(it = B.begin() ; it!=B.end() ; it++)//esto es para que se "disparen" las balas
		{
			(*it)->Mover();//con el " * " se puede manipular los metodos y atributos
			if((*it)->Fuera())//esto es para borrar las balas cuando llegan a cierto punto
			{
				gotoxy((*it)->X(), (*it)->Y()); printf(" ");//borrar balas
				delete(*it);//esto es para eliminar el elemento de la lista
				it = B.erase(it);//y esto para que el iterador vuelva a la lista y siga en el que continua en la lista
			}
			
		}
		for(itA = A.begin() ; itA != A.end(); itA++)//creacion de asteoides y choque con la bala
		{
			(*itA)->Mover();//mover los asteroides
			(*itA)->Choque(N);//choque con la bala
		}
		for(itA = A.begin() ; itA != A.end(); itA++)// aca esta para las coliciones entre bala y asteroide
		{
			for(it = B.begin() ; it != B.end() ; it++)//doble for para controlar la lista de los asteroides y las balas
			{
				if((*itA)->X() == (*it)->X() && ((*itA)->Y() +1 == (*it)->Y() || (*itA)->Y() == (*it)->Y()))//condicion para detectar coliciones
				{
					gotoxy((*it)->X(), (*it)->Y()); printf(" ");//borrado de bala
					delete(*it);//esto es para eliminar el elemento de la lista
					it = B.erase(it);//y esto para que el iterador vuelva a la lista y siga en el que continua en la lista
					
					A.push_back(new AST(rand()%72+3, 4));
					gotoxy((*itA)->X(), (*itA)->Y()); printf(" ");//borrado de asteroide
					delete(*itA);//esto es para eliminar el elemento de la lista
					itA = A.erase(itA);//y esto para que el iterador vuelva a la lista y siga en el que continua en la lista
					
					Score+=5;//estos son los puntos que se le suman al jugador por eliminar los asteroides
				}
			}
		}
		if(N.Vid() == -1) Game_Over=true;// aca si las vidas son -1 se pierde
		N.Morir();
		N.Mover();
		Sleep(30);//para que respire un poco el procesamiento 
	}
/*	
Tengo que encontra la forma de borrar limpiamente el juego.
*/
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("		El juego ha finalizado, sus  puntos obtenidos son :%d						\n", Score);
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	printf("																						\n");
	cin.get();
	return 0;
}
