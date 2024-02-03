#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int  Operacion=0;
	float Num1=0;
	float Num2=0;
	float Total=0;
	printf("Ingrese dos numeros para calcular: \n");
	scanf("%f%f", &Num1, &Num2);
	printf("\nElija una operacion para realizar: \n");
	printf("Opcion 1: Suma\n");
	printf("Opcion 2: Resta\n");
	printf("Opcion 3: Miltiplicacion\n");
	printf("Opcion 4: Division\n");
	scanf("%d", &Operacion);
	switch(Operacion)
	{
	case 1:
		Total=Num1+Num2;
		printf("\nSu total es: %f", Total);
		break;
	case 2:
		Total=Num1-Num2;
		printf("\nSu total es: %f", Total);
		break;
	case 3:
		Total=Num1*Num2;
		printf("\nSu total es: %f", Total);
		break;
	case 4:
		Total=Num1/Num2;
		printf("\nSu total es: %f", Total);
		break;
	default:
		printf("\nSeleccion Invalida, Vuelva a Intentar");
		break;
	}
	printf("\n\n\nAdios");
	cin.get();
	return 0;
}

