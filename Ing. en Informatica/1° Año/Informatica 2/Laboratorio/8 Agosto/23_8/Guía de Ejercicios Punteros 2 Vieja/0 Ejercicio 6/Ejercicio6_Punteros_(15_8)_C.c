/*
	6. Desarrolle un programa que declare e inicialice un vector de 5 valores
(4.5,8,2.3,1.1,3).Luego, se pide que calcule y muestre la sumatoria y el
promedio. Utilice punteros para realizar el ejercicio.
*/
/*
	Hacer:
		Arreglo uni de 5,
		con valores asignados
	Mostrar usando punteros:
		La suematoria
		el promedio.
*/

#include <stdio.h>
#include <stdlib.h>
#define L_SECEUNCIA 5

float Sumatoria_F(float [L_SECEUNCIA], float *);

int main(){
	float Secuencia[L_SECEUNCIA]={4.5,8,2.3,1.1,3}, *Mostrar_Secuencia=NULL,
		Sumatoria=0, Promedio=0, *Mostrar_Sumatoria=NULL, *Mostrar_Promedio=NULL,
		SUM=0;
	Mostrar_Sumatoria=&Sumatoria;
	Mostrar_Promedio=&Promedio;
	printf("La Secuencia dada es la Siguiente:\n");
	for(int ii=0 ; ii<L_SECEUNCIA ; ii++){
		Mostrar_Secuencia=&Secuencia[ii];
		printf("%f | ",*Mostrar_Secuencia);
		SUM+=Secuencia[ii];
	}
	printf("\n");
	printf("\n");
	
	printf("Suma Real es: %f\n", SUM);
	
	*Mostrar_Sumatoria= Sumatoria_F(Secuencia, Mostrar_Secuencia);
	printf("La Sumatoria de Secuencia dada es la Siguiente:\n");
	printf("%f",*Mostrar_Sumatoria);
	printf("\n");
	printf("\n");
	
	*Mostrar_Promedio= (*Mostrar_Sumatoria)/L_SECEUNCIA;
	printf("La Promedio de Secuencia dada es la Siguiente:\n");
	printf("%f",*Mostrar_Promedio);
	printf("\n");
	
	system("pause");
	return 0;
}
float Sumatoria_F(float Arreglo[L_SECEUNCIA], float *Mostrar_Secuencia){
	float Suma=0;
	for(int ii=0 ; ii<L_SECEUNCIA ; ii++){
		Mostrar_Secuencia=&Arreglo[ii];
		Suma+=(*Mostrar_Secuencia);
	}
	return (Suma);
}
