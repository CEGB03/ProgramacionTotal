#include <stdio.h>
#include <stdlib.h>
struct Info_Personal{
	long DNI;
	int CP;
	char Nombre[30];
	char Apellido[30];
	long Tel;
};
int main() {
	struct Info_Personal I_P;
	//for(int ii=0 ; ii<Tam_Struct ; ii++){
		printf("Ingrese el DNI: ");
		scanf("%li",&I_P.DNI);
		printf("Ingrese el CP: ");
		scanf("%d",&I_P.CP);
		printf("Ingrese el Nombre: ");
		scanf("%s",&I_P.Nombre);
		printf("Ingrese el Apellido: ");
		scanf("%s",&I_P.Apellido);
		printf("Ingrese el Tel: ");
		scanf("%li",&I_P.Tel);
	//}
		
		printf("El DNI ingrsado es el siguiente: %li\n",I_P.DNI);
		printf("El CP ingresado es el siguinte: %d\n",I_P.CP);
		printf("El Nombre ingrsado es el siguiente: %s\n",I_P.Nombre);
		printf("El Apellido ingrsado es el siguiente: %s\n",I_P.Apellido);
		printf("El Tel ingrsado es el siguiente: %li\n", I_P.Tel);
		
	return 0;
}

