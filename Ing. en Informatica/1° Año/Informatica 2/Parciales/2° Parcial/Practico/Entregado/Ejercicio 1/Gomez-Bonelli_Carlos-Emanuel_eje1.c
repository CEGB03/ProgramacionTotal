
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Peso_Ladrillo 0.350
struct Remito{
	int Numero;
	int Cant_Ladrillos;
	float Peso_Total;
	char Apellido[20];
	struct Remito *Next;
};
int Menu();
void Cargar(struct Remito **Front,struct Remito **Back);
void Peso(struct Remito **Front,struct Remito **Back);
void Numero_Remito(struct Remito **Front,struct Remito **Back, int Numero_Remito);
void Mostrar_Cola(struct Remito *Front,struct Remito *Back);
void Mostrar_Remito_M_Pesado(struct Remito *Front,struct Remito *Back);
void Buscar_Remito(struct Remito *Front,struct Remito *Back);
void Guardar(struct Remito *Front,struct Remito *Back, int Remitos_Carga);
void Chequeo_Archivo(FILE *P_Archivo_Eje1_Parcial_2);
int main(){
	int Op=0, Remitos_Carga=0;
	struct Remito *Front=NULL;
	struct Remito *Back= NULL;
	printf("¿Cuantos Remitos se van a Cargar? ");
	scanf("%d",&Remitos_Carga);
	for(int ii=0 ; ii<Remitos_Carga ; ii++)
		Cargar(&Front,&Back);
	for(int ii=0 ; ii<Remitos_Carga ; ii++)
		Peso(&Front,&Back);
	Numero_Remito(&Front,&Back,Remitos_Carga);
	do{
		Op=Menu();
		switch(Op){
		case 1:
			Mostrar_Cola(Front,Back);
			break;
		case 2:
			printf("El remito mas pesado fue:\n");
			Mostrar_Remito_M_Pesado(Front,Back);
			break;
		case 3:
			Buscar_Remito(Front,Back);
			break;
		case 4:
			Guardar(Front,Back, Remitos_Carga);
			break;
		}
	}while(Op!=5);
	system("pause");
	return 0;
}
int Menu(){
	int Seleccion=0;
	printf("Bienvenido al menu de opciones\n");
	printf("1. Mostrar el listado de remitos.\n");
	printf("2. Mostrar el remito con mayor carga.\n");
	printf("3. Buscar un remito y mostat todos los datos del mismo.\n");
	printf("4. Grabar los datos en un archivo.\n");
	printf("5. Salir.\n");
	scanf("%d",&Seleccion);
	return Seleccion;
}
	
void Cargar(struct Remito **Front,struct Remito **Back){
	struct Remito *New_Remito=NULL;
	New_Remito=(struct Remito *)malloc(sizeof(struct Remito));
	if(New_Remito==NULL){
		printf("No hay memoria disponible\n");
		exit(1);
	}
	else{
		printf("Ingrese el Apellido del Remitente: ");
		scanf("%s",&New_Remito->Apellido);
		printf("Ingrese la cantidad de ladrillos a mandar: ");
		scanf("%d",&New_Remito->Cant_Ladrillos);
		New_Remito->Next=NULL;
		if(*Back == NULL){
			(*Back) = New_Remito;
			(*Front) = (*Back);
		}
		else{
			(*Back) -> Next = New_Remito;
			(*Back) = New_Remito;
		}
	}
}
void Mostrar_Cola(struct Remito *Front,struct Remito *Back){
	struct Remito *Temp=NULL;
	Temp= Front;
	while(Temp!=NULL){
		printf("Estos son los datos del Remito de %s\n",Temp->Apellido);
		printf("\tEl numero de Remito es: %d\n",Temp->Numero);
		printf("\tLa cantidad de ladrillos pedidios son: %d\n",Temp->Cant_Ladrillos);
		printf("\tEl peso total del cargamento es de: %0.2f\n",Temp->Peso_Total);
		printf("\n");
		Temp=Temp->Next;
	}
}
void Peso(struct Remito **Front,struct Remito **Back){
	struct Remito *Temp= *Front;
	if(Front==NULL){
		printf("Lista vacia\n");
	}
	else{
		while(Temp!=NULL){
			Temp->Peso_Total=Peso_Ladrillo*Temp->Cant_Ladrillos;
			Temp=Temp->Next;
		}
	}
}
void Numero_Remito(struct Remito **Front,struct Remito **Back, int Remitos_Carga){
	struct Remito *Temp= *Front;
	int ii=1;
	if(Front==NULL){
		printf("Lista vacia\n");
	}
	else{
		while(Temp!=NULL){
			if(Remitos_Carga>=ii)
				Temp->Numero=ii;
			ii++;
			Temp=Temp->Next;
		}
	}
}
void Mostrar_Remito_M_Pesado(struct Remito *Front,struct Remito *Back){
	struct Remito *Temp = Front;
	float Mayor=0;
	int ii=0;
	char N_Mayor[15];
	while(Temp!=NULL){
		if(ii==0){
			Mayor=Temp->Peso_Total;
			strcpy(N_Mayor,Temp->Apellido);
		
			ii++;
		}
		else{
			if(ii>0){
				if(Mayor<Temp->Peso_Total){
					Mayor=Temp->Peso_Total;
					strcpy(N_Mayor,Temp->Apellido);
				}
			}
		}
		Temp=Temp->Next;
	}
	Temp=Front;
	while(Temp!=NULL){
		if(strcmp(N_Mayor,Temp->Apellido)==0){
			printf("Estos son los datos del Remito de %s\n",Temp->Apellido);
			printf("\tEl numero de Remito es: %d\n",Temp->Numero);
			printf("\tLa cantidad de ladrillos pedidios son: %d\n",Temp->Cant_Ladrillos);
			printf("\tEl peso total del cargamento es de: %.2f\n",Temp->Peso_Total);
			printf("\n");
		}
		Temp=Temp->Next;
	}
}
void Buscar_Remito(struct Remito *Front,struct Remito *Back){
	struct Remito *Temp= Front;
	char Busqueda[20];
	printf("Ingrese el apellido al que fue realizado el Remito\n");
	scanf("%s",&Busqueda);
	while(Temp!=NULL){
		if(strcmp(Busqueda,Temp->Apellido)==0){
			printf("Estos son los datos del Remito de %s\n",Temp->Apellido);
			printf("\tEl numero de Remito es: %d\n",Temp->Numero);
			printf("\tLa cantidad de ladrillos pedidios son: %d\n",Temp->Cant_Ladrillos);
			printf("\tEl peso total del cargamento es de: %.2f\n",Temp->Peso_Total);
			printf("\n");
		}
		Temp=Temp->Next;
	}
}
void Chequeo_Archivo(FILE *P_Archivo_Eje1_Parcial_2){
	if(P_Archivo_Eje1_Parcial_2==NULL){
		printf("No se pudo utilizar el archivo\n");
		exit (10);
	}
}
void Guardar(struct Remito *Front,struct Remito *Back, int Remitos_Carga){
	FILE *P_Archivo_Eje1_Parcial_2;
	int Archivo=0, ii=0, Num_Remito_Recuperado=0, Cant_Ladrillos_Recuperado=0;
	float Peso_Recuperado=0;
	char Cadena1[9], Cadena2[16], Cadena3[15];
	struct Remito *Aux;
	printf("Seleccione:\n1.Cargar los datos.\n2. Abrir y leer.\n");
	scanf("%d",&Archivo);
	switch(Archivo){
	case 1:
		P_Archivo_Eje1_Parcial_2=fopen("Remito.txt","w");
		Chequeo_Archivo(P_Archivo_Eje1_Parcial_2);
		Aux=Front;
		fputs("Remito\tCant_Ladrillos\tPeso_Total\n",P_Archivo_Eje1_Parcial_2);
		while(Aux!=NULL){
			fprintf(P_Archivo_Eje1_Parcial_2,"%d\t%d\t\t%f\n", Aux->Numero, Aux->Cant_Ladrillos,  Aux->Peso_Total);
			Aux=Aux->Next;
		}
		if(fclose(P_Archivo_Eje1_Parcial_2)==0)
			  printf("Se cargo con exito");
		break;
	case 2:
		P_Archivo_Eje1_Parcial_2=fopen("Remito.txt","r");
		Chequeo_Archivo(P_Archivo_Eje1_Parcial_2);
		while(!feof(P_Archivo_Eje1_Parcial_2)&&(Remitos_Carga>=ii)){
			if(ii==0){
				fscanf(P_Archivo_Eje1_Parcial_2,"%s %s %s", &Cadena1, &Cadena2, &Cadena3);
				printf("%s\t%s\t\t%s\n", Cadena1, Cadena2, Cadena3);
				ii++;
			}
			if((ii>0)){
				fscanf(P_Archivo_Eje1_Parcial_2,"%d %d %f",&Num_Remito_Recuperado , &Cant_Ladrillos_Recuperado, &Peso_Recuperado);
				printf("%d\t%d\t\t%.2f\n",Num_Remito_Recuperado, Cant_Ladrillos_Recuperado, Peso_Recuperado);
				ii++;
			}
		}
		fclose(P_Archivo_Eje1_Parcial_2);
		break;
	}
}
