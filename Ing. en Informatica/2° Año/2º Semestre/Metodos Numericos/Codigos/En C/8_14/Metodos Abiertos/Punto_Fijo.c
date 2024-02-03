// Punto fijo:
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_ITER 1000000
#define E 0.01
double fun_F(double d);
double fun_G(double d);
int main()
{
    double x0=0, xv=0, xn=0, error=0, tolerancia=0;
  int cont=0;

    printf("Ingrese el parametro \"X0\": ");
    scanf("%lf",&x0);

    printf("Ingrese el parametro \"tolerancia\": ");
    scanf("%lf",&tolerancia);
    int precision = -log10(tolerancia) + 1; // Calcular la cantidad de decimales según la tolerancia
  cont=0;
    xv=x0;
    do
    {

        //if (fabs((fun_G(xv+E)-fun_G(xv))/E)<=1){//    if Agus
        if( (fabs( (fun_G(x0+E) - (fun_G(x0)))/E )) <=1 ){
            printf("No se cumple el criterio.\n");
            //printf("fabs((fun_G(xv+E)-fun_G(xv))/E=%lf\n",fabs((fun_G(xv+E)-fun_G(xv))/E;//   Corresponde al if Agus
            printf(" (fabs( (fun_G(x0+E) - (fun_G(x0)))/E ))=%lf\n",(fabs( (fun_G(x0+E) - (fun_G(x0)))/E )));
            exit(20);
        }
            xn= fun_G(xv);
            error= fabs((xn-xv)/xn);
            xv=xn;
        cont++;
        //printf("itersacion=%d\n",cont);
        printf("\naprox: %.*lf %c %.*lf", precision, xn, 241, precision, error);
    } while ( (error > tolerancia) && (cont < (MAX_ITER/5)) ) ;

    if(cont==MAX_ITER)
        printf("Hubo una salida por el maximo de salidas establecido.\n");

    printf("\nEl punto fijo Xn=%.*lf,con un de error=%.*lf\nLa cantidad de Iteraciones fueron: %d.\n", precision,
           xn, precision, error, cont);
    printf("\n%.*lf %c %.*lf", precision, xn, 241, precision, error);

    return 0;
}
double fun_F(double d){//n se define primero la funcion y luego se puede ejecutar el programa.
    //return log(d) + exp( sin( d ) ) - d ;//Modelo para probar los metodos
    //return 4-pow(d,2) ;//Ejercicio 1 Guia 2
    //return pow (d,5)- 3 * pow(d, 3) - 2 * pow(d, 2) + 2;//Ejercicio 2)a Guia 2
    //  Las 2 siguientes son constante, por eso quedan igual.
    //return cos(sin(d));//Ejercicio 2)b Guia 2
    //return pow(d,d-cos(d));//Ejercicio 2)c Guia 2
    return 0;
}
double fun_G(double d){//n se define primero la funcion y luego se puede ejecutar el programa.
    //return log(d) + exp( sin( d ) ) ;//Modelo para probar los metodos
    //return (-(sin(d)+1));//Funcion random del Agus.
    //return 4-pow(d,2) ;//Ejercicio 1 Guia 2
    //return pow( (3 * pow(d, 3) + 2 * pow(d, 2) - 2), 1.0/5);//Ejercicio 2)a Guia 2
    //  Las 2 siguientes son constante, por eso quedan igual.
    //return cos(sin(d));//Ejercicio 2)b Guia 2
    //return pow(d,d-cos(d));//Ejercicio 2)c Guia 2

    //Parcial Ejercicio 2
    return sqrt((d+5)/2);
}