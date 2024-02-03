/*
Usted es contratado por la organización del evento “Maratón Ciudad de Córdoba” 
para realizar un programa en la cual se registren los siguientes datos: 


|N° Corredor	|Tipo Prueba	|Tiempo (minutos)
|26				|				|

Tener en cuenta que las pruebas que se corren pueden ser de 3 km y 8 km, 
los tiempos realizados estarán expresados en minutos. El programa debe preguntar 
cuántos corredores participaran y luego serán cargados a medida que lleguen a la 
meta. Una vez terminada la maratón deberán mostrar los siguientes resultados. 

- Mostrar el listado completo de participantes.

- Cantidad de participantes en la prueba 3km y la prueba 8 km.

- Ganador con su respectivo tiempo y por prueba. (son 2)

Para la resolución de este ejercicio usar los ejercicios utilizar arreglos y 
funciones.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAXIMO 50
void Carga_Datos(int , int [][3]);
void Mostrar_Participantes(int , int [][3]);
void Cantidad_3_y_8(int , int [][3]);
void Ganadores(int , int [][3]);
int main()
{
	int Maraton_Cordoba[MAXIMO][3], Tam=0;
	printf("Ingrese el numero de participantes que hubo: ");
	scanf("%d",&Tam);
	Carga_Datos(Tam, Maraton_Cordoba);
	Mostrar_Participantes(Tam, Maraton_Cordoba);
	Cantidad_3_y_8(Tam, Maraton_Cordoba);
	Ganadores(Tam, Maraton_Cordoba);
	printf("\n");
	system("pause");
	return 0;
}
void Carga_Datos(int Tam, int Arreglo [][3]){
	for(int ii=0 ; ii<Tam ; ii++){
		printf("Ingrese el numero del participante: ");
		scanf("%d",&Arreglo[ii][0]);
		printf("Ingrese el numero de kilometros que realizo: ");
		scanf("%d",&Arreglo[ii][1]);
		printf("Ingrese el tiempo que realizo en minutos: ");
		scanf("%d",&Arreglo[ii][2]);
	}
}
void Mostrar_Participantes(int Tam, int Arreglo[][3]){
	printf("N°| Km | Tiempo\n");
	for(int ii=0 ; ii<Tam ; ii++){
		for(int jj=0 ; jj<3 ; jj++){
			printf("%d |",Arreglo[ii][jj]);
		}
		printf("\n");
	}
}
void Cantidad_3_y_8(int Tam, int Arreglo[][3]){
	int /*Corredores_3[MAXIMO][3], Corredores_8[MAXIMO][3],*/ Cor3=0, Cor8=0;
	for(int ii=0 ; ii<Tam ; ii++){
		if(Arreglo[ii][1]==3){
			Cor3++;
			//Corredores_3[ii][jj]=Arreglo[ii][jj];
		}
		if(Arreglo[ii][1]==8){
			Cor8++;
			//Corredores_8[ii][jj]=Arreglo[ii][jj];
		}
	}
	//printf("\n");
	/*
	for(int ii=0 ; ii<Tam ; ii++){
		for(int jj=0 ; jj<3 ; jj++){
			if(Arreglo[ii][1]==3){
				Cor3++;
				//Corredores_3[ii][jj]=Arreglo[ii][jj];
			}
			if(Arreglo[ii][1]==8){
				Cor8++;
				//Corredores_8[ii][jj]=Arreglo[ii][jj];
			}
			//printf("\n");
		}
	}
	*/
	printf("\n");
	printf("La cantidad de corredores que participaron en la carrera de 3 kilimetros dueron de %d personas\n", Cor3);
	printf("\n");
	printf("La cantidad de corredores que participaron en la carrera de 8 kilimetros dueron de %d personas\n", Cor8);
}
void Ganadores(int Tam, int Arreglo[][3]){
	int G_Km_3=3, G_Km_8=8,
		G_T_3=0, G_T_8=0,
		G_N_3=0, G_N_8=0;
	for(int ii=0 ; ii<Tam ; ii++){
		if(Arreglo[ii][1]==G_Km_3){
			if(ii==0){
				G_T_3=Arreglo[ii][2];
			}
			if(G_T_3>Arreglo[ii][2]){
				G_N_3=Arreglo[ii][0];
				G_T_3=Arreglo[ii][2];
			}
		}
		/*
		numero -> 0
		kilometro -> 1
		tiempo -> 2
		*/
		if(Arreglo[ii][1]==G_Km_8){
			if(ii==0){
				G_T_8=Arreglo[ii][2];
			}
			if(G_T_8>Arreglo[ii][2]){
				G_N_8=Arreglo[ii][0];
				G_T_8=Arreglo[ii][2];
			}
		}
	}
	printf("\n");
	printf("Los ganadores tienen los siguienes datos:\n");
	printf("El ganador de los 3 Km es el Numero %d y su tiempo fue de %d minutos\n", G_N_3 , G_T_3);
	printf("El ganador de los 8 Km es el Numero %d y su tiempo fue de %d minutos\n", G_N_8 , G_T_8);
}
