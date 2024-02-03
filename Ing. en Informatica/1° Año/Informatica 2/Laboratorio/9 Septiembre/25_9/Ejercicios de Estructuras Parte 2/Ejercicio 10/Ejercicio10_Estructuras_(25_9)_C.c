/*
	10. Una fábrica de tornillos nos ha solicitado desarrollar un programa en C
que permita obtener e imprimir las estadísticas de una determinada muestra de
tornillos. Para ello nos indican que cada tornillo viene caracterizado por su
longitud y su diámetro y que ambas medidas deben almacenarse en un registro con
dos campos. Desarrollar un programa en C que:

	a. Solicite al usuario los datos de una muestra de tornillos 
(longitud y diámetro) y los almacene en un vector 
	b. A partir de los  datos introducidos calcule y muestre por pantalla la
media de las longitudes y la media de los diámetros.

	Nota:  El  tamaño  de  la  muestra  se  definirá  como  una  constante
denominada TAMANIO_MUESTRA
*/
#include <stdio.h>
#include <stdlib.h>
#define Tam_Columns 2
#define TAMANIO_MUESTRA 20
struct Tornillo{
	int Long;
	int Diametro;
};
void Cargar_Tornillos(struct Tornillo *P_Torni, int Tam_Rows_New);
void Mostar_Tornillos(struct Tornillo *P_Torni, int Tam_Rows_New);
int main(){
	struct Tornillo Torni[TAMANIO_MUESTRA];
	struct Tornillo *P_Torni=Torni;
	int Tam_Rows_New=0;
	printf("Cuantos tornillos va a cargar\n");
	scanf("%d",&Tam_Rows_New);
	Cargar_Tornillos(P_Torni, Tam_Rows_New);
	Mostar_Tornillos(P_Torni, Tam_Rows_New);
	printf("\n");
	system ("pause");
	return 0;
}
void Cargar_Tornillos(struct Tornillo *P_Torni, int Tam_Rows_New){
	for(int ii=0 ; ii<Tam_Rows_New ; ii++){
		printf("Ingrese el la longitud del Tornilo\n");
		scanf("%d",&P_Torni[ii].Long);
		printf("Ingrese el diametro del Tornilo\n");
		scanf("%d",&P_Torni[ii].Diametro);
		printf("\n");
	}
}
void Mostar_Tornillos(struct Tornillo *P_Torni, int Tam_Rows_New){
	for(int ii=0 ; ii<Tam_Rows_New ; ii++){
		printf("Ingrese el la longitud del Tornilo %d es de: %d\n", ii+1, P_Torni[ii].Long);
		printf("Ingrese el diametro del Tornilo %d es de: %d\n", ii+1, P_Torni[ii].Diametro);
		printf("\n");
	}
}
