/*
	7. Desarrolle un programa que declare e inicialice un vector de 5 valores
(4.5,8,2.3,1.1,3). Luego, se pide que calcule y muestre la sumatoria y
el promedio. Utilice punteros para realizar el ejercicio.
*/
/*
	Hacer:
Vector con los valores(4.5,8,2.3,1.1,3)
	Luego calcular y mostrar:
La sumatoria,
El promedio.
*/
#include <stdio.h>
#include <stdlib.h>
#define L_Secuencia 5

int main(){
	float Secuencia[L_Secuencia]={4.5,8,2.3,1.1,3},*P_Arreglo=NULL,
		Sumatoria=0, *P_Sum=&Sumatoria,
		Promedio=0, *P_Prom=&Promedio;
	
	for(int ii=0 ; ii<L_Secuencia ; ii++){
		P_Arreglo=&Secuencia[ii];
		printf("%.2f | ",*P_Arreglo);
		Sumatoria+=(*P_Arreglo);
	}
	printf("\n");
	Promedio=(*P_Sum)/(L_Secuencia);	
	printf("\n");
	printf("La sumatoria da como resultado: %.2f\n", *P_Sum);
	printf("El Promedio da como resultado: %.2f\n", *P_Prom);
	system("pause");
	return 0;
}
