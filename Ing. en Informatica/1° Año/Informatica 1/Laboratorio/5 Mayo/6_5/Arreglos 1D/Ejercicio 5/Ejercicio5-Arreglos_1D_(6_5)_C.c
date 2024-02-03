/*
	5. Se desea cargar en un vector una cantidad de saldos de proveedores,
	   50 como máximo. La carga finaliza con un saldo menor o igual a cero.
	Además, se pide:
		a. Cantidad de saldos cargados.
		b. Promedio de saldos.
		c. Cantidad de saldos menores al promedio.
		d. Cantidad de saldos mayores al promedio.
		e. Calcular cuánto fue lo recaudado en el mes.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int Saldo=1,ii=0, AAA[50], Suma_T=0, Vueltas=1, Saldos_M_Prom=0,
		Saldos_m_Prom=0, Respuesta=0;
	float prom=0;
	char Salida=' ';
	do
	{
		printf("Ingrese el primer Saldo: \n");
		scanf("%d",&Saldo);
		
		if(Saldo>=1)
		{
			Suma_T+=Saldo;
			AAA[Vueltas]=Saldo;
			Vueltas++;
		}
		else
		{
			Saldo= -1;
			Vueltas--;
		}
		if(Vueltas==51)
		{
			Saldo= -1;
			Vueltas--;
		}
	}while(Saldo>=1);
	if(Vueltas>0)
	{
		for(ii=1 ; ii<=Vueltas ; ii++)
		{
			printf("El elemeto %d del arreglo es: %d\n",ii,AAA[ii]);
		}
		prom=Suma_T/Vueltas;
		for(ii=1 ; ii<=Vueltas ; ii++)
		{
			if(AAA[ii]<prom)
				Saldos_m_Prom++;
			if(AAA[ii]>prom)
				Saldos_M_Prom++;
		}
		printf("\n");
		
		
		do{//	muestra de menu
			printf("\n\nMenu de seleccion:\n");
			printf("1 Cantidad de saldos cargados.\n");
			printf("2 EL promedio de Saldos.\n");
			printf("3 Cantidad de saldos menores al promedio.\n");
			printf("4 Cantidad de saldos mayores al promedio.\n");
			printf("5 Calcular cuánto fue lo recaudado en el mes.\n");
			printf("Ingrese la letra segun lo que quiera ver: ");
			scanf("%d",&Respuesta);
			switch(Respuesta)
			{
			case 1:
				// inciso a
				printf("\nLa cantidad de Saldos cargados son: %d\n",Vueltas);
				break;
			case 2:
				// inciso b
				printf("\nEL promedio de Saldos es de: %f\n",prom);
				break;
			case 3:
				// inciso c
				printf("\nCantidad de saldos menores al promedio es de: %d\n",Saldos_m_Prom);
				break;
			case 4:
				// inciso d
				printf("\nCantidad de saldos mayores al promedio es de: %d\n",Saldos_M_Prom);
				break;
			case 5:
				// inciso e
				printf("\nLo recaudado en el mes fue: %d\n",Suma_T);
				break;
			}
			printf("\n¿Desa volver al menu? S/N  \n");
			scanf(" %c",&Salida);
		} while(Salida=='s'||Salida=='S');
		if(Salida=='N' || Salida=='n')
			printf("\nAdios\n");
	}
	else
	{
		if(Vueltas==0)
			printf("No se han cargado datos");
	}
	system("pause");
	return 0;
}

