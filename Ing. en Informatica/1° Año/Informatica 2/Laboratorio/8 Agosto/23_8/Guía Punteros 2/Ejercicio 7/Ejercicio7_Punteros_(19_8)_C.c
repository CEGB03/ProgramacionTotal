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
float Sumatoria_F(float *);
int Promedio_F();

int main(){
	float Secuencia[L_Secuencia]={4.5,8,2.3,1.1,3}, *P_Arreglo=Secuencia, 
		Sumatoria=0, *P_Sum=&Sumatoria,
		Promedio=0,*P_Prom=&Promedio;
	Sumatoria=Sumatoria_F(Secuencia);
	printf("\n");
	system("pause");
	return 0;
}
float Sumatoria_F(float *Puntero_Arreglo){
	for(int ii=0 ; ii<L_Secuencia ; ii++){
		Puntero_Arreglo=
		printf("%.2f | ",(*Puntero_Arreglo +ii));
	}
	printf("\n");
}
