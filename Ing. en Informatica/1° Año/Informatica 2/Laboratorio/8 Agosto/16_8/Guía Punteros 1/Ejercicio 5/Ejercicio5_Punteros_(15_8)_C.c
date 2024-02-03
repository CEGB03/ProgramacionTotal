/*
	5. Escribir un programa que solicite dos numeros y luego una de las
operaciones del menu de opciones: 
		a. sumar
		b. restar
		c. multiplicar
		d. dividir dos numeros
		e. elevar a una potencia
		f. calcular la raiz de numero
	Luego mostrar el resultado y preguntar si desea realizar otra operacion o
terminar el programa. Utilizar punteros para el calculo de las operaciones.
Libreria: #include <math.h>
*/
/*
	Para hcaer raiz distinta de la cuadrad se usa pow de la siguiente manera:
		Resultado=pow(n,(1/m));
	Donde n es el numero radicando y m es el indice de la raiz
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Calculadora(float , float , int);
float Carga_Nums(char *);

int main(){
	char Salida=' ', Entrada=' ', *Puntero_S=NULL, *Puntero_E=NULL;
	float *Puntero_Resultado=NULL, Resultado=0;
	Puntero_S=&Salida;
	Puntero_E=&Entrada;
	Puntero_Resultado=&Resultado;
	do{
		printf("Bienvenido al menu de Seleccion:\n ¿Que desea hacer con dos numero a su eleccion?\n");
		printf("a. sumar\n");
		printf("b. restar\n");
		printf("c. multiplicar\n");
		printf("d. dividir dos numeros\n");
		printf("e. elevar a una potencia\n");
		printf("f. calcular la raiz de numero\n");
		scanf(" %c",&Entrada);
		switch(*Puntero_E){
		case 'a':
		case 'A':
			printf("Opcion a\n");
			*Puntero_Resultado=Carga_Nums(Puntero_E);
			printf("El Resultado de tu operacion elegida es: %0.2f\n", *Puntero_Resultado);
			break;
		case 'b':
		case 'B':
			printf("Opcion b\n");
			*Puntero_Resultado=Carga_Nums(Puntero_E);
			printf("El Resultado de tu operacion elegida es: %0.2f\n", *Puntero_Resultado);
			break;
		case 'c':
		case 'C':
			printf("Opcion c\n");
			*Puntero_Resultado=Carga_Nums(Puntero_E);
			printf("El Resultado de tu operacion elegida es: %0.2f\n", *Puntero_Resultado);
			break;
		case 'd':
		case 'D':
			printf("Opcion d\n");
			printf("Tenga en cuenta que el primer numero que ingrese sera al que se le lo divida con el segundo (Numero1 / Numero2\n");
			*Puntero_Resultado=Carga_Nums(Puntero_E);
			printf("El Resultado de tu operacion elegida es: %0.2f\n", *Puntero_Resultado);
			break;
		case 'e':
		case 'E':
			printf("Opcion e\n");
			printf("Tenga en cuenta que el primer numero que ingrese sera el que se elevara y el segundo la potencia\n");
			*Puntero_Resultado=Carga_Nums(Puntero_E);
			printf("El Resultado de tu operacion elegida es: %0.2f\n", *Puntero_Resultado);
			break;
		case 'f':
		case 'F':
			printf("Opcion f\n");
			printf("Tenga en cuenta que el primer numero que ingrese sera al que se le saque la raiz y el segundo la raiz\n");
			*Puntero_Resultado=Carga_Nums(Puntero_E);
			printf("El Resultado de tu operacion elegida es: %0.2f\n", *Puntero_Resultado);
			break;
		}
		printf("¿Desea volver al menu de inicio? S/N \n");
		scanf(" %c",&Salida);
	} while(*Puntero_S=='s'||*Puntero_S=='S');
	printf("Saliste del menu de Seleccion\n");
	system("pause");
	return 0;
}
float Carga_Nums(char *Operador){
	float Num1=0, Num2=0, Total=0;
	int Operacion=0;
	for(int ii=1 ; ii<=2 ; ii++){
		if(ii==1){
			printf("Ingrese el primer numero a operar\n");
			scanf("%f",&Num1);
		}
		else{
			if(ii==2){
				printf("Ingrese el segundo numero a operar\n");
				scanf("%f",&Num2);
			}
		}
	}
	if(*Operador=='a' || *Operador=='A')
		Operacion=1;
	if(*Operador=='b' || *Operador=='B')
		Operacion=2;
	if(*Operador=='c' || *Operador=='C')
		Operacion=3;
	if(*Operador=='d' || *Operador=='D')
		Operacion=4;
	if(*Operador=='e' || *Operador=='E')
		Operacion=5;
	if(*Operador=='f' || *Operador=='F')
		Operacion=6;
	Total=Calculadora(Num1, Num2, Operacion);
	return Total;
}
float Calculadora(float x, float y, int Operacion){
	float Resultado_F=0;	
	switch(Operacion){
	case 1:
		Resultado_F=x+y;
		break;
	case 2:
		Resultado_F=x-y;
		break;
	case 3:
		Resultado_F=x*y;
		break;
	case 4:
		Resultado_F=x/y;
		break;
	case 5:
		Resultado_F=pow(x,y);
		break;
	case 6:
		Resultado_F=pow(x,(1/y));
		break;
	}
	return Resultado_F;
	printf("\n");
}
