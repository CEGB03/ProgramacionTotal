/*
	6. Elavorar un codigo que calcule el valor del perimetro de figuras
geometricas y su area. Y despues mostrar los valores con punteros.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float Perimetro_F(float *);
float Area_F(float *);
int main(){
	int Eleccion=0;
	float *Valor_Perimetro=NULL, *Valor_Area=NULL, Perimetro=0, Area=0;
	Valor_Perimetro=&Perimetro;
	Valor_Area=&Area;
	printf("Ingrese segun lo que quiera hacer: \n");
	printf("(Por ahora solo se pueden calcular Cuadrado, Rectangulo y Circulo.)\n");
	printf("Ingrese 1 para realizar calculos de Perimetro.\n");
	printf("Ingrese 2 para realizar calculos de Area.\n");
	scanf("%d",&Eleccion);
	switch(Eleccion)
	{
	case 1:
		Perimetro=Perimetro_F(Valor_Perimetro);
		break;
	case 2:
		Area=Area_F(Valor_Area);
		break;
	}
	system("pause");
	return 0;
}
//	Funcion para el Perimetro
float Perimetro_F(float *Perimetro){
	//	hay que agregar #include <math.h> ya que usa funciones matematicas
	float x=0, y=0;
	int Operacion=0;
	printf("Ingrese segun lo que quiera hacer: \n");
	printf("Ingrese 1 para realizar el Perimetro del Cuadrado.\n");
	printf("Ingrese 2 para realizar el Perimetro del Rectangulo.\n");
	printf("Ingrese 3 para realizar el Perimetro del Circulo.\n");
	scanf("%d",&Operacion);
	switch(Operacion){
	case 1:
		printf("ingrese el valor del lado\n");
		scanf("%f",&x);
		printf("Ingrese el valor de la altura\n");
		scanf("%f",&y);
		*Perimetro=x*2+y*2;
		printf("El Perimetro del Cuadrado es: %f\n",*Perimetro);
		break;
	case 2:
		printf("ingrese el valor del lado\n");
		scanf("%f",&x);
		printf("Ingrese el valor de la altura\n");
		scanf("%f",&y);
		*Perimetro=x*2+y*2;
		printf("El Perimetro del Rectangulo es: %f\n",*Perimetro);
		break;
	case 3:
		printf("ingrese el valor del radio\n");
		scanf("%f",&x);
		*Perimetro=2*M_PI*x;
		printf("El Perimetro del Circulo es: %f\n",*Perimetro);
		break;
	}
	return *Perimetro;
}
//	Funcion para el Area
float Area_F(float *Area){
	//	hay que agregar #include <math.h> ya que usa funciones matematicas
	float x=0, y=0;
	int Operacion=0;
	printf("Ingrese segun lo que quiera hacer: \n");
	printf("Ingrese 1 para realizar el Area del cuadrado.\n");
	printf("Ingrese 2 para realizar el Area del rectangulo.\n");
	printf("Ingrese 3 para realizar el Area del circulo.\n");
	scanf("%d",&Operacion);
	switch(Operacion){
	case 1:
		printf("ingrese el valor del lado\n");
		scanf("%f",&x);
		printf("Ingrese el valor de la altura\n");
		scanf("%f",&y);
		*Area=x*y;
		printf("El Area del Cuadrado es: %f\n",*Area);
		break;
	case 2:
		printf("ingrese el valor del lado\n");
		scanf("%f",&x);
		printf("Ingrese el valor de la altura\n");
		scanf("%f",&y);
		*Area=x*y;
		printf("El Area del Rectangulo es: %f\n",*Area);
		break;
	case 3:
		printf("ingrese el valor del radio\n");
		scanf("%f",&x);
		*Area=M_PI*pow(x,2);
		printf("El Area del Cuadrado es: %f\n",*Area);
		break;
	}
	return *Area;
}

