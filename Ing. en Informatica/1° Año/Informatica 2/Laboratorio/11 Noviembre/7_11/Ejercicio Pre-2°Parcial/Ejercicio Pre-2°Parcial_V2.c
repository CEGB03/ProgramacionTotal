/*
	Desarrolle un programa que cree una estructura llamada Equipo en la cual tiene
los siguientes atributos: nombre del equipo, cantidad de juegos ganados,
cantidad de juegos perdidos, cantidad de juegos empatados y puntaje. El puntaje
es calculado según la cantidad de partidos ganados, perdidos o empatados.
Si ganó el partido se le suman 3 puntos, si empatan no suman ni restan y si
pierden se le restan -2.
	Luego crear una lista de equipos, y cargar los datos de cada equipo. El puntaje
debe ser calculado por una función. Una vez cargada la lista, mostrar un menu
de opciones con los siguientes datos:
	1. Mostrar el listado de equipos que participaron en el torneo.
	2. Mostrar el equipo ganador con su puntaje. (En caso de que haya mas de
uno, mostrarlos a todos) Ej. Si hay 3 equipos con 15 puntos y es el numero
mayor de puntaje, mostrar los 3 equipos. 
	3. Mostrar todos los equipos que nunca perdieron un partido.
	4. Grabar un archivo llamado puntaje.txt en donde se listen los datos,
por ejemplo:
	Equipo		Puntaje
	Rojo		10
	Verde		15
	Azul		8

	Hacer este ejercicio con lista, con pila y con cola.
------------------------------
	Implemente la siguiente clase con sus atributos y metodos. Luego cree una
función main donde se instancie 2 veces la clase, una con el constructor por
defecto y otra con un constructor con datos. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Gano 3
#define Perdio 2

struct Equipo{
	char nombre_equipo[15];
	int cantidad_juegos_ganados;
	int cantidad_juegos_perdidos;
	int cantidad_juegos_empatados;
	int puntaje;
	struct Equipo *Next;
};
int Menu();
void Cargar(struct Equipo **Head);
void Puntaje(struct Equipo **Head);
void Mostrar_Lista(struct Equipo *Head);
void Mostrar_Equipo_Ganador_Perdedor(struct Equipo *Head, int Op);
void Guardar(struct Equipo *Head, int Equipos_Carga);
void Chequeo_Archivo(FILE *P_Archivo_Eje_Parcial_2);
int main(){
	int Op=0, Equipos_Carga=0;
	struct Equipo *Head=NULL;
	printf("¿Cuantos Equipos se van a Cargar? ");
	scanf("%d",&Equipos_Carga);
	for(int ii=0 ; ii<Equipos_Carga ; ii++)
		Cargar(&Head);
	for(int ii=0 ; ii<Equipos_Carga ; ii++)
		Puntaje(&Head);
	do{
		Op=Menu();
		switch(Op){
		case 1:
			Mostrar_Lista(Head);
			break;
		case 2:
			Mostrar_Equipo_Ganador_Perdedor(Head, Op);
			break;
		case 3:
			Mostrar_Equipo_Ganador_Perdedor(Head, Op);
			break;
		case 4:
			Guardar(Head, Equipos_Carga);
			break;
		}
	}while(Op!=5);
	system("pause");
	return 0;
}
int Menu(){
	int Seleccion=0;
	printf("Bienvenido al menu de opciones\n");
	printf("1. Mostrar el listado de equipos que participaron en el torneo.\n");
	printf("2. Mostrar el equipo ganador con su puntaje.\n");
	printf("3. Mostrar todos los equipos que nunca perdieron un partido.\n");
	printf("4. Grabar los datos en un archivo.\n");
	printf("5. Salir.\n");
	scanf("%d",&Seleccion);
	return Seleccion;
}
void Cargar(struct Equipo **Head){
	struct Equipo *New_Equipo=NULL;
	struct Equipo *Temp=NULL;
	New_Equipo=(struct Equipo *)malloc(sizeof(struct Equipo));
	if (New_Equipo == NULL){
		printf("No hay memoria disponible");
		exit(0);
	}
	printf("Ingrese el Nombre del Equipo: ");
	scanf("%s",&New_Equipo->nombre_equipo);
	printf("Ingrese la cantidad de partidos ganados: ");
	scanf("%d",&New_Equipo->cantidad_juegos_ganados);
	printf("Ingrese la cantidad de partidos empatados: ");
	scanf("%d",&New_Equipo->cantidad_juegos_perdidos);
	printf("Ingrese la cantidad de partidos perdidios: ");
	scanf("%d",&New_Equipo->cantidad_juegos_empatados);
	New_Equipo->Next=NULL;
	printf("\n");
	
	if ((*Head)==NULL) {
		(*Head)=New_Equipo;
	}
	else {
		Temp= *Head;
		while(Temp->Next!=NULL)
			Temp=Temp->Next;
		Temp->Next=New_Equipo;
	}
}
void Mostrar_Lista(struct Equipo *Head){
	struct Equipo *Temp= Head;
	if(Head==NULL){
		printf("Lista vacia\n");
	}
	else{
		while(Temp!=NULL){
			printf("Nombre del Equipo: %s\n",Temp->nombre_equipo);
			printf("Cantidad de Juegos ganados por el Equipo son: %d\n",Temp->cantidad_juegos_ganados);
			printf("Cantidad de Juegos Empatados por el Equipo son: %d\n",Temp->cantidad_juegos_perdidos);
			printf("Cantidad de Juegos Perdidios por el Equipo son: %d\n",Temp->cantidad_juegos_empatados);
			printf("Cantidad de puntos del Equipo son: %d\n",Temp->puntaje);
			printf("\n");
			Temp=Temp->Next;
		}
	}
}
void Puntaje(struct Equipo **Head){
	struct Equipo *Temp= *Head;
	int Punts=0;
	if(Head==NULL){
		printf("Lista vacia\n");
	}
	else{
		while(Temp!=NULL){
			Punts=(Gano*Temp->cantidad_juegos_ganados);
			Punts-=(Perdio*Temp->cantidad_juegos_perdidos);
			Temp->puntaje=Punts;
			Temp=Temp->Next;
		}
	}
}
void Mostrar_Equipo_Ganador_Perdedor(struct Equipo *Head, int Op){
	struct Equipo *Temp = Head;
	int Mayor=0, Menor=0, ii=0;
	char N_Mayor[15], N_Menor[15];
	while(Temp!=NULL){
		if(ii==0){
			Mayor=Temp->puntaje;
			strcpy(N_Mayor,Temp->nombre_equipo);
			
			Menor=Temp->puntaje;
			strcpy(N_Menor,Temp->nombre_equipo);
			
			ii++;
		}
		else{
			if(ii>0){
				if(Mayor<Temp->puntaje){
					Mayor=Temp->puntaje;
					strcpy(N_Mayor,Temp->nombre_equipo);
				}
				if(Menor>Temp->puntaje){
					Menor=Temp->puntaje;
					strcpy(N_Menor,Temp->nombre_equipo);
				}
			}
		}
		Temp=Temp->Next;
	}
	switch(Op){
	case 2:
		//		Habria que mostrar todos los datos, pero son las 00:30 y me da paja Suppia...... AJJAJAJ
		//		agrege todos los datos, pero son las 01:20 y me wo a mimir Suppia, solo lo termine xq me dijiste q enserio lo necesitabas...... AJJAJAJ
		//printf("El Equipo ganador fue %s con %d puntos\n",N_Mayor, Mayor);
		Temp=Head;
		while(Temp!=NULL){
			if(strcmp(N_Mayor,Temp->nombre_equipo)==0){
				printf("Nombre del Equipo: %s\n",Temp->nombre_equipo);
				printf("Cantidad de Juegos ganados por el Equipo son: %d\n",Temp->cantidad_juegos_ganados);
				printf("Cantidad de Juegos Empatados por el Equipo son: %d\n",Temp->cantidad_juegos_perdidos);
				printf("Cantidad de Juegos Perdidios por el Equipo son: %d\n",Temp->cantidad_juegos_empatados);
				printf("Cantidad de puntos del Equipo son: %d\n",Temp->puntaje);
				printf("\n");
			}
			Temp=Temp->Next;
		}
		break;
	case 3:
		//		Habria que mostrar todos los datos, pero son las 01:20 y me da paja Suppia...... AJJAJAJ
		//		agrege todos los datos, pero son las 01:20 y me wo a mimir Suppia, solo lo termine xq me dijiste q enserio lo necesitabas...... AJJAJAJ
		//printf("El Equipo perdedor fue %s con %d puntos\n\n",N_Menor, Menor);
		Temp=Head;
		while(Temp!=NULL){
			if(strcmp(N_Menor,Temp->nombre_equipo)==0){
				printf("Nombre del Equipo: %s\n",Temp->nombre_equipo);
				printf("Cantidad de Juegos ganados por el Equipo son: %d\n",Temp->cantidad_juegos_ganados);
				printf("Cantidad de Juegos Empatados por el Equipo son: %d\n",Temp->cantidad_juegos_perdidos);
				printf("Cantidad de Juegos Perdidios por el Equipo son: %d\n",Temp->cantidad_juegos_empatados);
				printf("Cantidad de puntos del Equipo son: %d\n",Temp->puntaje);
				printf("\n");
			}
			Temp=Temp->Next;
		}
		break;
	}
}
void Chequeo_Archivo(FILE *P_Archivo_Eje_Parcial_2){
	if(P_Archivo_Eje_Parcial_2==NULL){
		printf("No se pudo utilizar el archivo\n");
		exit (10);
	}
}
void Guardar(struct Equipo *Head, int Equipos_Carga){
	FILE *P_Archivo_Eje_Parcial_2;
	int Archivo=0, ii=0, Pun=0;
	char Cadena1[9], Cadena2[9], Cadena3[15];
	struct Equipo *Aux;
	printf("Seleccione:\n1.Cargar los datos.\n2. Abrir y leer.\n");
	scanf("%d",&Archivo);
	switch(Archivo){
	case 1:
		P_Archivo_Eje_Parcial_2=fopen("puntaje.txt","w");
		Chequeo_Archivo(P_Archivo_Eje_Parcial_2);
		Aux=Head;
		fputs("Nombre\tPuntaje\n",P_Archivo_Eje_Parcial_2);
		while(Aux!=NULL){
			fprintf(P_Archivo_Eje_Parcial_2,"%s\t%d\n", Aux->nombre_equipo, Aux->puntaje);
			Aux=Aux->Next;
		}
		if(fclose(P_Archivo_Eje_Parcial_2)==0)
			printf("Se cargo con exito");
		break;
	case 2:
		P_Archivo_Eje_Parcial_2=fopen("puntaje.txt","r");
		Chequeo_Archivo(P_Archivo_Eje_Parcial_2);
		while(!feof(P_Archivo_Eje_Parcial_2)&&(Equipos_Carga>=ii)){
			if(ii==0){
				fscanf(P_Archivo_Eje_Parcial_2,"%s %s", &Cadena1, &Cadena2);
				printf("%s\t%s\n", Cadena1, Cadena2);
				ii++;
			}
			if((ii>0)){
				fscanf(P_Archivo_Eje_Parcial_2,"%s %d", &Cadena3, &Pun);
				printf("%s\t%d\n", Cadena3, Pun);
				ii++;
			}
		}
		fclose(P_Archivo_Eje_Parcial_2);
		break;
	}
}
