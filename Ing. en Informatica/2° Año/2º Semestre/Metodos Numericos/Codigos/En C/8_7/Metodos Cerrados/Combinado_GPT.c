#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Declaración de la función 'fun'.
double fun(double d);

// Declaración de la función 'calc_c_B'.
double calc_c_B(double a, double b);

int main() {
    // Declaración e inicialización de variables.
    double a = 0, b = 0, cv = 0, cn = 0, error = 0, tolerancia = 0;
    int cont = 0, tip_Metodo = 0;

    // Solicitar al usuario que ingrese el valor de 'a'.
    printf("Ingrese el parametro \"a\": ");
    scanf("%lf", &a);

    // Solicitar al usuario que ingrese el valor de 'b'.
    printf("Ingrese el parametro \"b\": ");
    scanf("%lf", &b);

    // Solicitar al usuario que ingrese el valor de 'tolerancia'.
    printf("Ingrese el parametro \"tolerancia\": ");
    scanf("%lf", &tolerancia);

    // Comprobar si la multiplicación de 'fun(a)' y 'fun(b)' es mayor que 0.
    if (fun(a) * fun(b) > 0) {
        printf("No cumple condicion para operar.\n%lf<0", fun(a) * fun(b));
        exit(30); // Salir del programa con código de error 30.
    }

    // Solicitar al usuario que seleccione el método a implementar.
    printf("Seleccione el Metodo a Implementar:\n1) Metodo de Biseccion.\n2) Metodo de Falsa Posicion (Regula Falsi).\n");
    scanf("%d", &tip_Metodo);

    // Calcular 'cn' dependiendo del método seleccionado.
    if (tip_Metodo == 1)
        cn = calc_c_B(a, b); // Llamada a la función 'calc_c_B' para el método de bisección.
    else if (tip_Metodo == 2)
        cn = ((a * fun(b) - b * fun(a)) / (fun(b) - fun(a))); // Cálculo para el método de falsa posición.
    else {
        printf("Error.\nMetodo desconocido...");
        exit(10); // Salir del programa con código de error 10.
    }

    cont = 0;
    cv = a;

    // Inicio del bucle principal.
    do {
        // Calcular 'fun(a)' una vez para evitar cálculos duplicados.
        double fun_a = fun(a);

        // Calcular 'fun(cn)' una vez para evitar cálculos duplicados.
        double fun_cn = fun(cn);

        // Comprobar la condición para actualizar 'a' y 'b'.
        if (fun_a * fun_cn > 0)
            a = cn;
        else if (fun_a * fun_cn < 0)
            b = cn;
        else
            printf("la raiz es \"c\".\n");

        // Calcular el error absoluto entre 'cn' y 'cv'.
        error = fabs(cn - cv);
        cv = cn;
        cont++;
        //printf("itersacion=%d\n", cont); // Comentado para desactivar esta línea.

    } while (error > tolerancia);

    // Calcular la cantidad de decimales según la tolerancia.
    int precision = -log10(tolerancia) + 1;

    // Imprimir resultados finales.
    printf("\n\na=%.*lf, c=%.*lf, b=%.*lf, error=%.*lf, tolerancia=%.*lf\nLa cantidad de Iteraciones fueron: %d.\n", precision, a, precision, cn, precision, b, precision, error, precision, tolerancia, cont);
    printf("%.*lf %c %.*lf\n", precision, cn, 241, precision, error);

    return 0; // Finalizar el programa con éxito.
}

// Definición de la función 'fun' que calcula el valor de la función 'fun'.
double fun(double d) {
    // Aquí puedes definir la función 'fun(d)' según tus necesidades.
    // Por ejemplo, puedes descomentar una de las siguientes líneas o definir tu propia función.
    return ( log(d) + exp( sin( d ) ) - d );
    //return ( -2+7*d-5*pow(d,2)+6*pow(d,3) );
    //return (pow(d, 10) - 1);
}

// Definición de la función 'calc_c_B' que calcula 'c' en el método de bisección.
double calc_c_B(double a, double b) {
    return ((a + b) / 2);
}
