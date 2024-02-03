/*
	9. Implementar en C un programa que maneje un array de estructuras para
almacenar las fechas de cumpleaños de 20 amigos. Los datos a almacenar sobre
cada amigo son nombre, día, mes y año. El programa debe indicarnos cuántos de
nuestros amigos cumplen los años un día y mes determinados
introducidos por teclado.
*/
#include <stdio.h>
#include <stdlib.h>
#define Tam_Struct 2
struct Fecha{
	int Dia;
	int Mes;
	int Anio;
};
struct Cumpleanios{
	char Nombre[20];
	struct Fecha DMA;
};
void Cargar_Datos(struct Cumpleanios *P_Amigos);
void Comparar_Fecha(struct Cumpleanios *P_Amigos, int *P_N_Amigos);
int main(){
	struct Cumpleanios Amigos[Tam_Struct];
	struct Cumpleanios *P_Amigos=Amigos;
	char Buscar=' ', Salida=' ';
	int N_Amigos=0, *P_N_Amigos=&N_Amigos;
	Cargar_Datos(P_Amigos);
	do{
		printf("¿Listo para Buscar una Fecha? S/N: ");
		scanf(" %c",&Buscar);
		if(Buscar == 's' || Buscar == 'S')
			Comparar_Fecha(P_Amigos, P_N_Amigos);
		if(N_Amigos>0)
			printf("Tienes %d Amigos que cumplen anios en la Fecha cargada\n", N_Amigos );
		printf("¿Desa Buscar otra Fecha? S/N: ");
		scanf(" %c",&Salida);
	} while(Salida == 's' || Salida == 'S');
	printf("Adios.\n");
	system("pause");
	return 0;
}
void Cargar_Datos(struct Cumpleanios *P_Amigos){
	for(int ii=0 ; ii<Tam_Struct ; ii++){
		printf("Ingrese el Nombre de su amigo: ");
		scanf("%s",&P_Amigos[ii].Nombre);
		printf("Ingrese el dia de nacimento de su amigo: ");
		scanf("%d",&P_Amigos[ii].DMA.Dia);
		printf("Ingrese el dia de nacimento de su amigo: ");
		scanf("%d",&P_Amigos[ii].DMA.Mes);
		printf("Ingrese el dia de nacimento de su amigo: ");
		scanf("%d",&P_Amigos[ii].DMA.Anio);
	}
}
void Comparar_Fecha(struct Cumpleanios *P_Amigos, int *P_N_Amigos){
	int Busqueda_D=0, *P_Busqueda_D=&Busqueda_D,
		Busqueda_M=0, *P_Busqueda_M=&Busqueda_M,
		Busqueda_A=0, *P_Busqueda_A=&Busqueda_A,
		Control=(*P_N_Amigos);
	printf("Indique el dia de Cumpleanios a busacar: ");
	scanf("%d",&Busqueda_D);
	printf("Indique el mes de Cumpleanios a busacar: ");
	scanf("%d",&Busqueda_M);
	printf("Indique el anio de Cumpleanios a busacar: ");
	scanf("%d",&Busqueda_A);
	for(int ii=0 ; ii<Tam_Struct ; ii++){
		if(P_Amigos[ii].DMA.Dia == (*P_Busqueda_D) && P_Amigos[ii].DMA.Mes == (*P_Busqueda_M) && P_Amigos[ii].DMA.Anio == (*P_Busqueda_A)){
			printf("Tu amigo llamado %s cumple el %d/%d/%d \n", P_Amigos[ii].Nombre, P_Amigos[ii].DMA.Dia, P_Amigos[ii].DMA.Mes, P_Amigos[ii].DMA.Anio);
			Control++;
		}
		else{
			if(Control==0 && ii==(Tam_Struct-1)){
				printf("Fechas no coinicdentes con ningun amigo\n");
			}
		}
		
	}
}
