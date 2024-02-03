#include <stdio.h>
#include <math.h>
#define MAX_ITER 1000000

// Declaraciones de funciones
double cuadrado(double x, double epsilon, double *error, int *iter, int precision);
double cubico(double x, double epsilon, double *error, int *iter, int precision);

int main() {
    double x, root, epsilon, error;
    int iter = 0;

    // Solicitar al usuario el valor inicial y la tolerancia
    printf("Ingrese el número para calcular la raíz cuadrada: ");
    scanf("%lf", &x);
    printf("Ingrese la tolerancia (epsilon): ");
    scanf("%lf", &epsilon);

    // Calcular la cantidad de decimales según la tolerancia
    int precision = -log10(epsilon) + 1;

    // Llamar al método sqrt_method para calcular la raíz cuadrada
    root = cuadrado(x, epsilon, &error, &iter, precision);

    printf("\nLa raíz cuadrada aproximada es: %.*lf, con un error de: %.*lf\nLa cantidad de Iteraciones fueron: %d.\n",
           precision, root, precision, error, iter);
    printf("\n%.*lf %c %.*lf\n", precision, root, 241, precision, error);

    // Llamar al método cbrt_method para calcular la raíz cúbica
    root = cubico(x, epsilon, &error, &iter, precision);

    printf("\nLa raíz cúbica aproximada es: %.*lf, con un error de: %.*lf\nLa cantidad de Iteraciones fueron: %d.\n",
           precision, root, precision, error, iter);
    printf("\n%.*lf %c %.*lf\n", precision, root, 241, precision, error);

    return 0;
}
// Implementación del método de la raíz cuadrada
double cuadrado(double x, double epsilon, double *error, int *iter, int precision) {
    double xn = x; // Estimación inicial
    double xn1 = 0; // Variable para almacenar la nueva estimación

    *iter = 0; // Inicializar el contador de iteraciones

    do {
        xn1 = 0.5 * (xn + x / xn); // Fórmula iterativa para la raíz cuadrada
        *error = fabs(xn1 - xn); // Calcular el error absoluto
        xn = xn1; // Actualizar la estimación
        (*iter)++; // Incrementar el contador de iteraciones

    } while ((*error) > epsilon && (*iter) < MAX_ITER);

    if (*iter == MAX_ITER)
        printf("Hubo una salida por el máximo de iteraciones establecido.\n");

    return xn; // Devolver la raíz cuadrada aproximada
}

// Implementación del método de la raíz cúbica
double cubico(double x, double epsilon, double *error, int *iter, int precision) {
    double xn = x; // Estimación inicial
    double xn1 = 0; // Variable para almacenar la nueva estimación

    *iter = 0; // Inicializar el contador de iteraciones

    do {
        xn1 = (2.0 * xn + x / (xn * xn)) / 3.0; // Fórmula iterativa para la raíz cúbica
        *error = fabs(xn1 - xn); // Calcular el error absoluto
        xn = xn1; // Actualizar la estimación
        (*iter)++; // Incrementar el contador de iteraciones

    } while ((*error) > epsilon && (*iter) < MAX_ITER);

    if (*iter == MAX_ITER)
        printf("Hubo una salida por el máximo de iteraciones establecido.\n");

    return xn; // Devolver la raíz cúbica aproximada
}
