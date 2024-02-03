/*
	11. Un negocio de paquetería con entregas a domicilio nos ha solicitado un
programa para almacenar datos sobre las calles y las viviendas de su Ciudad.
Cada calle se identificará por dos elementos: Nombre y viviendas que tiene.
Además, cada vivienda estará identificada por el número que ocupa en la calle y
la planta. Admitiendo que la ciudad tiene 5 calles y cada calle tiene cinco
viviendas, desarrollar un programa que permita al usuario: 

	a.  Almacenar los datos sobre las calles y las viviendas de la ciudad.
	b. Ver toda la información sobre una calle: número y viviendas que tiene

	Nota: Por simplicidad se admitirá que los nombres de las calles no
contienen espacios.
*/
#include <stdio.h>
#include <stdlib.h>
#define Tam_Struct 5
struct Vivienda{
	int Altura;
	int Planta;
};
struct Calle{
	char Nombre[10];
	struct Vivienda Vivien;
};
struct Entrega{
	struct Calle Casa;
};
void Cargar_Casa(struct Entrega *P_House);
void Mostrar_Entrega(struct Entrega *P_House);
int main(){
	struct Entrega House[Tam_Struct];
	struct Entrega *P_House=House;
	Cargar_Casa(P_House);
	Mostrar_Entrega(P_House);
	printf("\n");
	system ("pause");
	return 0;
}
void Cargar_Casa(struct Entrega *P_House){
	for(int ii=0 ; ii<Tam_Struct ; ii++){
		printf("Ingrese el nombre de la calle: ");
		scanf("%s",&P_House[ii].Casa.Nombre);
		printf("Ingrese la altura de la casa: ");
		scanf("%d",&P_House[ii].Casa.Vivien.Altura);
		printf("Ingrese la planta de la casa: ");
		scanf("%d",&P_House[ii].Casa.Vivien.Planta);
		printf("\n");
	}
}
void Mostrar_Entrega(struct Entrega *P_House){
	for(int ii=0 ; ii<Tam_Struct ; ii++){
		printf("La calle de la casa N°%d se llama %s, y esta en la altura %d y la planta es la N°%d\n\n", ii+1, P_House[ii].Casa.Nombre, P_House[ii].Casa.Vivien.Altura, P_House[ii].Casa.Vivien.Planta);
	}
}
