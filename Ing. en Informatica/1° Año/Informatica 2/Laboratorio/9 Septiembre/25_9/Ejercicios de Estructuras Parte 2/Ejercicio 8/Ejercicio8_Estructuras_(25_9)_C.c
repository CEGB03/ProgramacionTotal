/*
	8. Crear un programa que pida al usuario los nombres, edades y alturas de
10 jugadores. Posteriormente le presentará un menú que le permita:

	a. Listar los nombres de los jugadores
	b. Listar las alturas de los jugadores
	c. Listar las edades de los jugadores

	Utilice funciones.
*/
#include <stdio.h>
#include <stdlib.h>
#define Tam_Struct 10

struct Jugador{
    char Nombre[15];
    int Edad;
    float Altura;
    int N_Jug;
};
void Menu();
void Cargar_Datos(struct Jugador *P_Jug);
void Listar_Nom(struct Jugador *P_Jug);
void Listar_Alt(struct Jugador *P_Jug);
void Listar_Edad(struct Jugador *P_Jug);
int main(){
	struct Jugador Jug[Tam_Struct];
	struct Jugador *P_Jug=Jug;
    char Opcion=' ';
	Cargar_Datos(P_Jug);
    do{
		Menu();
		scanf(" %c",&Opcion);
        switch(Opcion){
		case 'a':
		case 'A':
			Listar_Nom(P_Jug);
			break;
		case 'b':
		case 'B':
			Listar_Alt(P_Jug);
			break;
		case 'c':
		case 'C':
			Listar_Edad(P_Jug);
			break;
		case 'd':
		case 'D':
			exit (1);
        }
    }while(Opcion != 'd' || Opcion != 'D');
	printf("\n");
    system ("pause");
    return 0;
}
void Menu(){
	printf("Bienvenido al Menu de Opciones. Seleccione segun desee.\n");
	printf("a. Listar los nombres de los jugadores\n");
	printf("b. Listar las alturas de los jugadores\n");
	printf("c. Listar las edades de los jugadores\n");
	printf("d. Salir\n");
}
void Cargar_Datos(struct Jugador *P_Jug){
	char Cambio=' ';
	for(int ii=0 ; ii<Tam_Struct ; ii++){
		P_Jug[ii].N_Jug=ii+1;
		printf("Estas a punto de cargar los datos del Jugador N°%d\n", P_Jug[ii].N_Jug);
		printf("Ingrese el Nombre del Jugador: ");
		scanf("%s",&P_Jug[ii].Nombre);
		printf("Ingrese la edad del Jugador: ");
		scanf("%d",&P_Jug[ii].Edad);
		printf("Ingrese la altura del Jugador(Ingresar el decimal con un \".\"): ");
		scanf("%f",&P_Jug[ii].Altura);
		printf("El Jugador tiene a este %d? S/N ", P_Jug[ii].N_Jug);
		scanf(" %c",&Cambio);
		if(Cambio=='s' || Cambio=='S'){
			printf("ingrese el Nuevo numero del jugador: ");
			scanf("%d",&P_Jug[ii].N_Jug);
		}
	}
	
}
void Listar_Nom(struct Jugador *P_Jug){
	for(int ii=0 ; ii<Tam_Struct ; ii++){
		printf("El Nombre del Jugador %d es %s\n", P_Jug[ii].N_Jug, P_Jug[ii].Nombre);
	}
}
void Listar_Alt(struct Jugador *P_Jug){
	for(int ii=0 ; ii<Tam_Struct ; ii++){
		printf("El Nombre del Jugador %d es %.2f\n", P_Jug[ii].N_Jug, P_Jug[ii].Altura);
	}
}
void Listar_Edad(struct Jugador *P_Jug){
	for(int ii=0 ; ii<Tam_Struct ; ii++){
		printf("El Nombre del Jugador %d es %d\n", P_Jug[ii].N_Jug, P_Jug[ii].Edad);
	}
}
