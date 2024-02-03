/*
	2. Ampliar el programa del ejercicio anterior, para que almacene datos de
hasta 3 canciones en un vector de estructura. Luego crear un menú que permita
las opciones (cada una es una función) 
	a. agregar una nueva canción
	b. mostrar todas las canciones
	c. buscar una canción por titulo

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Tam_Struct 3
struct Cancion{
	char Artista[30];
	char Titulo[30];
	float Duracion;
	int Tam;
};
void Ingreso_Cancion(struct Cancion *);
void Muestra_Cancion(struct Cancion *);
void Busqueda_Can(struct Cancion *);
int main(){
	struct Cancion Can[Tam_Struct];
	struct Cancion *P_Can;
	char Opcion=' ', Salida=' ';
	do{
		printf("Seleccione segun desee\n");
		printf("a. agregar una nueva canción\n");
		printf("b. mostrar todas las canciones\n");
		printf("c. buscar una canción por titulo\n");
		scanf(" %c",&Opcion);
		switch(Opcion){
		case 'a':
		case 'A':
			P_Can=Can;
			Ingreso_Cancion(P_Can);
			break;
		case 'b':
		case 'B':
			P_Can=Can;
			printf("En main\n");
			for(int ii=0 ; ii<Tam_Struct ; ii++){
				printf("El nombre del artista de la cancion es: %s\n",Can[ii].Artista);
				printf("Ingrese el titulo de la cancion %s\n",Can[ii].Titulo);
				printf("Ingrese la duracion de la cancion en segundos %0.2f\n",Can[ii].Duracion);
				printf("Ingrese el tam de la cancion en KB %d\n",Can[ii].Tam);
			}
			printf("\n");
			Muestra_Cancion(P_Can);
			break;
		case 'c':
		case 'C':
			P_Can=Can;
			Busqueda_Can(P_Can);
			break;
		}
		printf("\n");
		printf("¿Desea volver al menu de seleccion? S/N\n");
		scanf(" %c",&Salida);
		printf("\n");
	} while(Salida=='s' || Salida=='S');
	printf("Adios\n");
	system("pause");
	return 0;
}

void Ingreso_Cancion(struct Cancion *P_Can){
	for(int ii=0 ; ii<Tam_Struct ; ii++){
		printf("Ingrese el nombre del artista de la cancion ");
		scanf("%s",&P_Can[ii].Artista);
		printf("Ingrese el titulo de la cancion ");
		scanf("%s",&P_Can[ii].Titulo);//	Por mas raro q parezca, si la estructura es simple, se puede usar ->, pero si no lo es. se pide usar .
		printf("Ingrese la duracion de la cancion en segundos ");
		scanf("%f",&P_Can[ii].Duracion);
		printf("Ingrese el tam de la cancion en KB ");
		scanf("%d",&P_Can[ii].Tam);
	}
}
void Muestra_Cancion(struct Cancion *P_Can){
	printf("En funcion\n");
	for(int ii=0 ; ii<Tam_Struct ; ii++){
		printf("El nombre del artista de la cancion es: %s\n",P_Can[ii].Artista);
		printf("Ingrese el titulo de la cancion %s\n",P_Can[ii].Titulo);
		printf("Ingrese la duracion de la cancion en segundos %0.2f\n",P_Can[ii].Duracion);
		printf("Ingrese el tam de la cancion en KB %d\n",P_Can[ii].Tam);
	}
}
void Busqueda_Can(struct Cancion *P_Can){
	char Busqueda[30], *P_Busqueda=Busqueda;
	int Reemplazo=0, Control=0;
	printf("Indique el nombre de la cancion a busacar: ");
	scanf(" %s",&Busqueda);
	for(int ii=0 ; ii<Tam_Struct ; ii++){
		//printf("Puntero de Busqueda vale %s\n",P_Busqueda);
		//printf("Titulo actual tiene el nombre de: %s\n",P_Can[ii].Titulo);
		if(strcmp(P_Can[ii].Titulo, P_Busqueda)==0){
			Reemplazo=ii;
			printf("El nombre del artista de la cancion es: %s\n",P_Can[Reemplazo].Artista);
			printf("Ingrese el titulo de la cancion %s\n",P_Can[Reemplazo].Titulo);
			printf("Ingrese la duracion de la cancion en segundos %0.2f\n",P_Can[Reemplazo].Duracion);
			printf("Ingrese el tam de la cancion en KB %d\n",P_Can[Reemplazo].Tam);
			Control++;
		}
		else{
			if(Control==0){
				printf("No encontre una\n");	
			}
		}
	}
}
