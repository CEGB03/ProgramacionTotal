#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double fun(double d);// se define primero la funcion y luego se puede ejecutar el programa.
//      Utilizo d en vez de x por comodidad
double calc_c_B(double a, double b);
int main()
{
    double a=0, b=0, cv=0, cn=0, error=0, tolerancia=0;
	int cont=0, tip_Metodo=0;

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
    printf("Seleccione el Metodo a Implementar:\n1) Metodo de Biseccion.\n2) Metodo de Falsa Posicion (Regula Falsi).\n");
    scanf("%d",&tip_Metodo);
	
	if (tip_Metodo==1)
        cn=calc_c_B(a,b);
    else if(tip_Metodo==2)
		cn=( ((a*fun(b)-b*fun(a)))/((fun(b)-fun(a))) );
    else{
        printf("Error.\nMetodo desconocido...");
        exit(10);
    }
	cont=0;
    cv=a;
    do
    {
        if(fun(a)*fun(cn)>0)
            a=cn;
        else if(fun(a)*fun(cn)<0)
            b=cn;
        else
            printf("la raiz es \"c\".\n");
        error=fabs(cn-cv);
        cv=cn;
		cont++;
		//printf("itersacion=%d\n",cont);
    } while (error>tolerancia);

	int precision = -log10(tolerancia) + 1; // Calcular la cantidad de decimales según la tolerancia
	printf("\n\na=%.*lf, c=%.*lf, b=%.*lf, error=%.*lf, tolerancia=%.*lf\nLa cantidad de Iteraciones fueron: %d.\n", precision, a, precision, cn, precision, b, precision, error, precision, tolerancia, cont);
	printf("%.*lf %c %.*lf\n",precision, cn, 241, precision, error);
	return 0;
}

double fun(double d){// se define primero la funcion y luego se puede ejecutar el programa.
    //return ( log(d) + exp( sin( d ) ) - d );
	//return ( -2+7*d-5*pow(d,2)+6*pow(d,3) );
	return ( pow(d,10) -1 );
}
double calc_c_B(double a, double b){
    return ( (a+b)/2 );
}
