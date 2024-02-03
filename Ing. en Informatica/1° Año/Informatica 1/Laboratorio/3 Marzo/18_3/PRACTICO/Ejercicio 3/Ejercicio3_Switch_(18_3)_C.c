#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char C;
	printf("Ingrese una letra\n");
	scanf("%c", &C);
	switch(C)
	{
	case 'a'://las variables aca tiene q ir con co,illas simples
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("\nLa letra elegida es una vocal");
		break;
	default:
		printf("\nLa letra elegida no es una vocal");
		break;
	}
	printf("\n\nAdios");
	return 0;
}

