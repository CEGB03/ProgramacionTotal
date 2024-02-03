#include <stdio.h>
#include <math.h>
#define MAX_ITER 1000000

// Declaraciones de funciones
double fun_f(double x);
double secante(double x0, double x1, double epsilon, double *error, int *iter, int presicion);

int main() {
    double x0=0, x1=0, root=0, epsilon=0, error=0;
    int iter=0;

    // Solicitar al usuario los valores iniciales y la tolerancia
    printf("Ingrese el valor inicial x0: ");
    scanf("%lf", &x0);
    printf("Ingrese el valor inicial x1: ");
    scanf("%lf", &x1);
    printf("Ingrese la tolerancia (epsilon): ");
    scanf("%lf", &epsilon);


    // Calcular la cantidad de decimales según la tolerancia
    int precision = -log10(epsilon) + 1;

    // Llamar a la función secant_method para encontrar la raíz
    root = secante(x0, x1, epsilon, &error, &iter, precision);

    // Mostrar el resultado
    printf("\nEl punto fijo Xn=%.*lf, con un error de=%.*lf\nLa cantidad de Iteraciones fueron: %d.\n", precision,
           root, precision, error, iter);
    printf("\n%.*lf %c %.*lf\n", precision, root, 241, precision, error);

    return 0;
}

// Implementación de la función secant_method
double secante(double x0, double x1, double epsilon, double *error, int *iter, int presicion){
    double x2=0;

    *iter = 0; // Inicializar el contador de iteraciones

    // Realizar iteraciones hasta que se cumple el criterio de parada
    do {
        x2 = x1 - (fun_f(x1) * (x1 - x0)) / (fun_f(x1) - fun_f(x0)); // Calcular el siguiente punto
        *error = fabs(x2 - x1); // Calcular el error absoluto
        x0 = x1; // Actualizar x0 con x1
        x1 = x2; // Actualizar x1 con x2
        (*iter)++; // Incrementar el contador de iteraciones

        // Imprimir información sobre la iteración (comentada para desactivar)
        // printf("Iteración %d: x = %.*lf, error = %.*lf\n", *iter, presicion, x1, presicion, *error);

    } while ((*error) > epsilon && (*iter) < MAX_ITER); // Condición de parada

    if (*iter == MAX_ITER)
        printf("Hubo una salida por el máximo de iteraciones establecido.\n");

    return x2; // Devolver la raíz aproximada
}

double fun_F(double d){//n se define primero la funcion y luego se puede ejecutar el programa.
    //return log(d) + exp( sin( d ) ) - d ;//Modelo para probar los metodos
    //return 4-pow(d,2) ;//Ejercicio 1 Guia 2
    return pow (d,5)- 3 * pow(d, 3) - 2 * pow(d, 2) + 2;//Ejercicio 2)a Guia 2
    //  Las 2 siguientes son constante, por eso quedan igual.
    //return cos(sin(d));//Ejercicio 2)b Guia 2
    //return pow(d,d-cos(d));//Ejercicio 2)c Guia 2
}
double fun_G(double d){//n se define primero la funcion y luego se puede ejecutar el programa.
    //return log(d) + exp( sin( d ) ) ;//Modelo para probar los metodos
    //return (-(sin(d)+1));//Funcion random del Agus.
    //return 4-pow(d,2) ;//Ejercicio 1 Guia 2
    return pow( (3 * pow(d, 3) + 2 * pow(d, 2) - 2), 1.0/5);//Ejercicio 2)a Guia 2
    //  Las 2 siguientes son constante, por eso quedan igual.
    //return cos(sin(d));//Ejercicio 2)b Guia 2
    //return pow(d,d-cos(d));//Ejercicio 2)c Guia 2
}