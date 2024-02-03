/*
	13. Desarrolle un programa que declare e inicialice un vector de 5 valores
aleatorios. Luego, crear 3 funciones que permita hallar el valor maximo, minimo
y el sumatoria de ellos. Finalmente mostrar los resultados. Utilice punteros
para realizar el ejercicio.
*/
/*
	Hacer:
Vector de 5 rand
3 funciones distintas(max ; min : Sum)
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L_SECEUNCIA 5

void Mostrar_Y_Sumatoria(int [L_SECEUNCIA], int *, int *);
void Mayor_F(int [L_SECEUNCIA], int *, int *);
void Menor_F(int [L_SECEUNCIA], int *, int *);

int main(){
	int Secuencia[L_SECEUNCIA]={0}, *Evaluar_Secuencia=Secuencia,
		Suma=0, *P_Suma=&Suma,
		Mayor=0, *P_Mayor=&Mayor,
		Menor=0, *P_Menor=&Menor;
	Mostrar_Y_Sumatoria(Secuencia, Evaluar_Secuencia, P_Suma);
	printf("La sumatoria es: %d\n",Suma);
	Mayor_F(Secuencia, Evaluar_Secuencia, P_Mayor);
	printf("El Mayor numero es: %d\n",(*P_Mayor));
	Menor_F(Secuencia, Evaluar_Secuencia, P_Menor);
	printf("El Menor numero es: %d\n",(*P_Menor));
	printf("\n");
	system("pause");
	return 0;
}
void Mostrar_Y_Sumatoria(int Arreglo[L_SECEUNCIA], int *Evaluar_Secuencia, int *P_Suma){
	srand(time(NULL));
	for(int ii=0 ; ii<L_SECEUNCIA ; ii++){
		Arreglo[ii]=rand()%99+1;
		Evaluar_Secuencia=&Arreglo[ii];
		*P_Suma+=(*Evaluar_Secuencia);
		printf("%d | ",*Evaluar_Secuencia);
	}
	printf("\n");
}
void Mayor_F(int Arreglo[L_SECEUNCIA], int *Evaluar_Secuencia, int *P_Mayor){
	for(int ii=0 ; ii<L_SECEUNCIA ; ii++){
		Evaluar_Secuencia=&Arreglo[ii];
		if(ii==0){
			*P_Mayor=(*Evaluar_Secuencia);
		}
		else{
			if((*P_Mayor)<(*Evaluar_Secuencia)){
				*P_Mayor=(*Evaluar_Secuencia);
			}
		}
	}
}
void Menor_F(int Arreglo[L_SECEUNCIA], int *Evaluar_Secuencia, int *P_Menor){
	for(int ii=0 ; ii<L_SECEUNCIA ; ii++){
		Evaluar_Secuencia=&Arreglo[ii];
		if(ii==0){
			*P_Menor=(*Evaluar_Secuencia);
		}
		else{
			if((*P_Menor)>(*Evaluar_Secuencia)){
				*P_Menor=(*Evaluar_Secuencia);
			}
		}
	}
}
