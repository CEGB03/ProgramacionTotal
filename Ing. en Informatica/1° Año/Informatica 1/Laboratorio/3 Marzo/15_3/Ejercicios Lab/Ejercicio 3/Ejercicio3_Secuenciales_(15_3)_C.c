#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int RC=0, RI=0, ReB=0, PT=0;
	printf ("Ingrese la cantidad de Respuestas Correctas: \n");
	scanf("%d", &RC);
	printf ("Ingrese la cantidad de Respuestas Incorrectas: \n");
	scanf("%d", &RI);
	printf ("Ingrese la cantidad de Respuestas en Blanco: \n");
	scanf("%d", &ReB);
	PT=RC*4+(RI*(-1))+ReB*0;
	printf ("Su puntaje total es de: %d", PT);
	return 0;
}

