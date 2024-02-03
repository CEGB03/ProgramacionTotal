#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <math.h>
#include <iostream>
using namespace std;
double fun(double d);
double calc_c_B(double a, double b);
int main()
{
    double a=0, b=0, c=0, error=0, tolerancia=0;
	int cont=0;

    printf("Ingrese el parametro \"a\": ");
    scanf("%lf",&a);

    printf("Ingrese el parametro \"b\": ");
    scanf("%lf",&b);

    printf("Ingrese el parametro \"tolerancia\": ");
    scanf("%lf",&tolerancia);
	
	if(fun(a)*fun(b)>0){
		printf("No cumple condicion para operar.\n%lf<0",fun(a)*fun(b));
		exit(30);
	}
    c=calc_c_B(a,b);
	cont=0;
    do
    {
        if(fun(a)*fun(c)>0)
            a=c;
        else if(fun(a)*fun(c)<0)
            b=c;
        else
            printf("la raiz es \"c\".\n");
        error=(b-a)/2;
		c=calc_c_B(a,b);
		cont++;
		//printf("itersacion=%d\n",cont);
    } while (error>tolerancia);

	int precision = -log10(tolerancia) + 1; // Calcular la cantidad de decimales según la tolerancia
	printf("\n\na=%.*lf, c=%.*lf, b=%.*lf, error=%.*lf, tolerancia=%.*lf\nLa cantidad de Iteraciones fueron: %d.\n", precision, a, precision, c, precision, b, precision, error, precision, tolerancia, cont);
    printf("%.*lf %c %.*lf",precision, c, 241, precision, error);
    return 0;
}

double fun(double d){//n se define primero la funcion y luego se puede ejecutar el programa.
    //return log(d) + exp( sin( d ) ) - d ;//Modelo para probar los metodos
    return -2 + 7 * d - 5 * pow(d, 2) + 6 * pow(d, 3);//Guia 1 - Ejercicio 1
}
double calc_c_B(double a, double b){
    return ( (a+b)/2 );
}
