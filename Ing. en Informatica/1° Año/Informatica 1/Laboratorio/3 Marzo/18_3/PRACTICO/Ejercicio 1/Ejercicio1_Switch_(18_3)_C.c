#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int  Dia=0;
	printf("Ingrese el numero para saber que dia es: \n");
	scanf("%d", &Dia);
	switch(Dia)
	{
	case 1:
		printf("\nEl dia de la semana es: Domingo");
		break;
	case 2:
		printf("\nEl dia de la semana es: Lunes");
		break;
	case 3:
		printf("\nEl dia de la semana es: Martes");
		break;
	case 4:
		printf("\nEl dia de la semana es: Miercoles");
		break;
	case 5:
		printf("\nEl dia de la semana es: Jueves");
		break;
	case 6:
		printf("\nEl dia de la semana es: Viernes");
		break;
	case 7:
		printf("\nEl dia de la semana es: Sabado");
		break;
	default:
		printf("\nSeleccion Invalida, Vuelva a Intentar");
		break;
	}
	printf("\n\n\nAdios");
	return 0;
}

