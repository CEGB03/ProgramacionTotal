#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>

#define HEIGHT 30
#define WIDTH 80
#define ARRIBA 72
#define ABAJO 80

using namespace std;

void gotoxy(int x, int y)
{
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
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

struct coord
{
	int x;
	int y;
};

void Limites()
{
	for (int ii=0 ; ii<WIDTH ; ii++)
	{
		gotoxy(ii,0); printf("%c",205);
		gotoxy(ii,HEIGHT); printf("%c",205);
	}
	for (int ii=0 ; ii<HEIGHT ; ii++)
	{
		gotoxy(0,ii); printf("%c",186);
		gotoxy(WIDTH,ii); printf("%c",186);
	}
	gotoxy(0,0); printf("%c",201);
	gotoxy(WIDTH,0); printf("%c",187);
	gotoxy(0,HEIGHT); printf("%c",200);
	gotoxy(WIDTH,HEIGHT); printf("%c",188);
}

void Player(coord pos, int c)
{
	switch(c)
	{
	case 0:
		gotoxy(pos.x,pos.y-1);printf("%c",219);
		gotoxy(pos.x,pos.y);printf("%c",219);
		gotoxy(pos.x,pos.y+1);printf("%c",219);
		break;
	case 1:
		gotoxy(pos.x,pos.y-1);printf(" ");
		gotoxy(pos.x,pos.y);printf(" ");
		gotoxy(pos.x,pos.y+1);printf(" ");
		break;
	}
}

void Mover(coord &pos)
{
	if(kbhit())
	{
		Player(pos,1);
		char Tecla = getch();
		Player(pos,1);
		if((Tecla == 'w'||Tecla=='W' || Tecla == ARRIBA) && pos.y > 2)pos.y-=1;
		if((Tecla == 's'||Tecla=='S' || Tecla == ABAJO) && pos.y < HEIGHT-2)pos.y+=1;
		Player(pos,0);
	}
}

void Red()
{
	for(int ii=1 ; ii<HEIGHT ; ii++)
	{
		gotoxy(WIDTH/2,ii); printf("%c",176);
	}
}

void Pelota(coord pel, int c)
{
	switch(c)
	{
	case 0:
		gotoxy(pel.x,pel.y);printf("%c",184);
		break;
	case 1:
		gotoxy(pel.x,pel.y);printf(" ");
		break;
	}
}

bool Colicion(coord pos, coord pel)
{
	if(pos.x == pel.x-1)
	{
		if((pos.y-1) == pel.y || (pos.y+1) == pel.y || pos.y == pel.y)
			return true;
	}
	return false;
}

void Update(coord &pel, coord &aum, coord pos, coord ene)
{
	if(pel.y < 2 || pel.y > HEIGHT-2)
	{
		aum.y = (-aum.y);
	}
	if(pel.x < 2 || pel.x > HEIGHT-2)
	{
		Pelota(pel,1);
		aum.x = (-aum.x);
		pel.x = WIDTH/2;
	}
	if(Colicion(pos, pel) == true) aum.x = (-aum.x);
	if(Colicion(ene, pel) == true) aum.x = (-aum.x);
}

coord Mover_Pelota(coord &pel, coord aum)
{
	/*
	coord p = pel;
	Pelota(pel,1);
	pel.x = pel.x + aum.x;
	pel.y = pel.y + aum.y;
	Pelota(pel,0);
	return p;
	/*/
	coord p = pel;
	Pelota(pel,1);
	pel.x = pel.x + aum.x;
	pel.y = pel.y + aum.y;
	Pelota(pel,0);
	//*/
}

void Mover_ene(coord pel, coord &ene, coord p)
{
	if(pel.x >= ((WIDTH/2 +1)))
	{
		Player(ene,1);
		if(p.y < pel.y && ene.y < HEIGHT -2)
		{
			ene.y++;
		}
		if(p.y > pel.y && ene.y > 2)
		{
			ene.y--;
		}
		Player(ene,0);
	}
	else
	{
		return;
	}
}

int main()
{
	coord pos = {10, HEIGHT/2};
	coord pel = {WIDTH/2, HEIGHT/2};
	coord aum = {-1, -1};
	coord ene = {WIDTH-10, HEIGHT/2};
	coord p;
	
	//OcultarCursor();
	Limites();
	Player(pos,0);
	int V=0;
	bool game=true;
	while(game)
	{
		Red();
		if(V >= 5)
		{
			/*p = */Mover_Pelota(pel,aum);
			Mover_ene(pel,ene,p);
			V=0;
		}
		Player(ene,0);
		Mover(pos);
		
		Update(pel, aum, pos, ene);
		V++;
		Sleep(90);
	}
	cin.get();
	return 0;
}
