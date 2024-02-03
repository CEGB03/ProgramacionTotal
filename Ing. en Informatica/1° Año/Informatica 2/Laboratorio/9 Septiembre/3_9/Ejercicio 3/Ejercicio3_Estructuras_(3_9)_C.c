/*
	3. Crear un programa que gestione el listado de los empleados de la empresa.
Para ello crear una estructura Empleado, en la cual contenga los siguientes
datos: legajo, puesto de trabajo, sueldo y anios_antiguedad. Luego, crear un
vector de estructuras del tipo empleado de tamaño 3. Crear un menú que permita
las opciones: 
	a. agregar un empleado
	b. mostrar todos los empleados
	c. buscar un empleado por legajo para ver si existe o no.
	d. actualizar Sueldo(float porcentaje)
	e. ordenar por sueldo
	f. ordenar por anios_antiguedad
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Tam_Struct 2

struct Empleado{
	int Legajo;
	char Puesto[30];
	float Sueldo;
	int Antiguedad;
	int N_Empleado;
};

void Ingreso_Empleado(struct Empleado *);
void Muestra_Empleado(struct Empleado *);
void Busqueda_Empleado(struct Empleado *);
void Actualizar_Sueldo_Empleado(struct Empleado *);
void Ordenar_Sueldos_Empleado(struct Empleado *);
void Ordenar_Anios_Empleado(struct Empleado *);

int main(){
	struct Empleado Emp[Tam_Struct];
	struct Empleado *P_Emp;
	char Opcion=' ', Salida=' ';
	do{
		printf("Seleccione segun desee\n");
		printf("a. agregar un empleado\n");
		printf("b. mostrar todos los empleados\n");
		printf("c. buscar un empleado por legajo para ver si existe o no.\n");
		printf("d. actualizar Sueldo.\n");
		printf("e. ordenar por sueldo.\n");
		printf("f. ordenar por anios de antiguedad.\n");
		scanf(" %c",&Opcion);
		switch(Opcion){
		case 'a':
		case 'A':
			P_Emp=Emp;
			Ingreso_Empleado(P_Emp);
			break;
		case 'b':
		case 'B':
			P_Emp=Emp;
			Muestra_Empleado(P_Emp);
			break;
		case 'c':
		case 'C':
			P_Emp=Emp;
			Busqueda_Empleado(P_Emp);
			break;
		case 'd':
		case 'D':
			P_Emp=Emp;
			Actualizar_Sueldo_Empleado(P_Emp);
			break;
		case 'e':
		case 'E':
			P_Emp=Emp;
			Ordenar_Sueldos_Empleado(P_Emp);
			break;
		case 'f':
		case 'F':
			P_Emp=Emp;
			Ordenar_Anios_Empleado(P_Emp);
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
	
void Ingreso_Empleado(struct Empleado *P_Emp){
	for(int ii=0 ; ii<Tam_Struct ; ii++){
		printf("Usted esta apunto de ingresar los datos del Empleado N°%d\n",ii+1);
		P_Emp[ii].N_Empleado=ii+1;
		printf("Ingrese el numero de legajo del Empleado: ");
		scanf("%d",&P_Emp[ii].Legajo);
		printf("Ingrese el puesto del Empleado: ");
		scanf("%s",&P_Emp[ii].Puesto);
		printf("Ingrese el sueldo del Empleado: ");
		scanf("%f",&P_Emp[ii].Sueldo);
		printf("Ingrese la cantidad de anios del Empleado: ");
		scanf("%d",&P_Emp[ii].Antiguedad);
		printf("\n");
	}
}
void Muestra_Empleado(struct Empleado *P_Emp){
	for(int ii=0 ; ii<Tam_Struct ; ii++){
		printf("Datos del Empleado N°%d\n",P_Emp[ii].N_Empleado);
		printf("El numero de legajo es: %d\n",P_Emp[ii].Legajo);
		printf("El puesto es: %s\n",P_Emp[ii].Puesto);
		printf("El sueldo es: %0.2f\n",P_Emp[ii].Sueldo);
		printf("Los anios de antiguedad que posee son de: %d\n",P_Emp[ii].Antiguedad);
	}
}
void Busqueda_Empleado(struct Empleado *P_Emp){
	int Busqueda=0, *P_Busqueda=&Busqueda,
		Reemplazo=0, Control=0;
	printf("Indique el numero de legajo a busacar: ");
	scanf("%d",&Busqueda);
	for(int ii=0 ; ii<Tam_Struct ; ii++){
		if(P_Emp[ii].Legajo == (*P_Busqueda)){
			Reemplazo=ii;
			printf("Datos del Empleado N°%d",P_Emp[Reemplazo].N_Empleado);
			printf("El numero de legajo es: %d\n",P_Emp[Reemplazo].Legajo);
			printf("El puesto es: %s\n",P_Emp[Reemplazo].Puesto);
			printf("El sueldo es: %0.2f\n",P_Emp[Reemplazo].Sueldo);
			printf("Los anios de antiguedad que posee son de: %d\n",P_Emp[Reemplazo].Antiguedad);
			Control++;
		}
		else{
			if(Control==0){
				printf("Legajo no coinicdente\n");
			}
		}
	}
}
void Actualizar_Sueldo_Empleado(struct Empleado *P_Emp){
	int Busqueda=0, *P_Busqueda=&Busqueda,
		Reemplazo=0, Control=0;
	printf("Indique el numero de legajo del Empleado al que le desa cambiar el sueldo: ");
	scanf("%d",&Busqueda);
	for(int ii=0 ; ii<Tam_Struct ; ii++){
		if(P_Emp[ii].Legajo == (*P_Busqueda)){
			Reemplazo=ii;
			printf("Legajo coinicdente\n");
			printf("Indique el nuevo sueldo: ");
			scanf("%f",&P_Emp[ii].Sueldo);
			printf("Felicitaciones, el nuevo sueldo del Empleado con numero de legajo %d es de: %0.2f\n",P_Emp[Reemplazo].Legajo,P_Emp[Reemplazo].Sueldo);
			Control++;
		}
		else{
			if(Control==0){
				printf("Legajo no coinicdente\n");
			}
		}
	}
}
void Ordenar_Sueldos_Empleado(struct Empleado *P_Emp){
	int jj=0;
	struct Empleado Aux;
	for(int ii=1 ; ii<Tam_Struct ; ii++){
		Aux=P_Emp[ii];//Guardado el 1° elemento en la variable auxiliar
		jj=ii-1;//Utilizando una 2° variable para hacer las comparaciones
		while((P_Emp[jj].Sueldo>Aux.Sueldo)&&(jj>=0)){//Comparo el valor de la posicion jj con Aux
			P_Emp[jj+1]=P_Emp[jj];//Realiza el intercambio
			jj--;//Recorre todos los valores mayores a la derecha
			P_Emp[jj+1]=Aux;
		}
	}
	printf("Ordenaminedo finalizado\n");
}
void Ordenar_Anios_Empleado(struct Empleado *P_Emp){
	int jj=0;
	struct Empleado Aux;
	for(int ii=1 ; ii<Tam_Struct ; ii++){
		Aux=P_Emp[ii];//Guardado el 1° elemento en la variable auxiliar
		jj=ii-1;//Utilizando una 2° variable para hacer las comparaciones
		while((P_Emp[jj].Antiguedad>Aux.Antiguedad)&&(jj>=0)){//Comparo el valor de la posicion jj con Aux
			P_Emp[jj+1]=P_Emp[jj];//Realiza el intercambio
			jj--;//Recorre todos los valores mayores a la derecha
			P_Emp[jj+1]=Aux;
		}
	}
	printf("Ordenaminedo finalizado\n");
}
