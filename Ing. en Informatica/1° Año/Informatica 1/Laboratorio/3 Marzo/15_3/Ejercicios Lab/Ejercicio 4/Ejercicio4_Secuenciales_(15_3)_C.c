#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	int PG=0, PP=0, PE=0, PT=0;
	printf ("Ingrese la cantidad de Partidos Ganados: \n");
	scanf("%d", &PG);
	printf ("Ingrese la cantidad de Partidos Empatados: \n");
	scanf("%d", &PE);
	printf ("Ingrese la cantidad de Partidos Perdidos: \n");
	scanf("%d", &PP);
	PT=PG*3+PE*1+PP*0;
	printf ("Su puntaje total es de: %d", PT);
	
	return 0;
}

