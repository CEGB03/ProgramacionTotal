#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	int  AdNyC=30, AdS=20, Euro=70, AyO=100, Pais=0;
	float PesoG=0, PesoKG=0, Envio=0;
	printf("Indique el peso en gramos de su paquete:\n");
	scanf("%f", &PesoG);
	//PesoKG=PesoG/1000;
	printf("\nPor favor seleccione la opcion que mas se adecue al envio que deae hacer con su pauete:");
	printf("\nMarque 1 para America del Norte");
	printf("\nMarque 2 para America Central");
	printf("\nMarque 3 para America del Sur");
	printf("\nMarque 4 para Europa");
	printf("\nMarque 5 para Asia");
	printf("\nMarque 6 para Oceania\n");
	scanf("%d",&Pais);
	switch(Pais)
	{
	case 1:
		Envio=AdNyC*PesoG;
		printf("\nSu envio saldra: %f para poder ser enviado a America del Norte", Envio);
		break;
	case 2:
		Envio=AdNyC*PesoG;
		printf("\nSu envio saldra: %f para poder ser enviado a America Central", Envio);
		break;
	case 3:
		Envio=AdS*PesoG;
		printf("\nSu envio saldra: %f para poder ser enviado a America del Sur", Envio);
		break;
	case 4:
		Envio=Euro*PesoG;
		printf("\nSu envio saldra: %f para poder ser enviado a Europa", Envio);
		break;
	case 5:
		Envio=AyO*PesoG;
		printf("\nSu envio saldra: %f para poder ser enviado a Asia", Envio);
		break;
	case 6:
		Envio=AyO*PesoG;
		printf("\nSu envio saldra: %f para poder ser enviado a Oceania", Envio);
		break;
	default:
		printf("El destino selecionado no se encur¿entra disponible para realizar envios.");
		break;
	}
	printf("\n\n Muy bien Adios");
	
	return 0;
}

