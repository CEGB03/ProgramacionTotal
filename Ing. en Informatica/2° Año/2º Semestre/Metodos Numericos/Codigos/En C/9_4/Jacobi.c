#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "LecturaMatrizArchivo.h"
#include "LecturaMatrizArchivo.c"

#define MAX_ITER 10000
#define FILAS 50


void verifierDiagonalDominante(double *pA, int n);

int main() {

    int n;/*
    printf("Ingrese el tamaño de la matriz cuadrada (n): ");
    scanf("%d", &n);
    */
    double A[FILAS][FILAS]={0}, *pA=&A[0][0];
    double b[FILAS]={0}, *pB=b;
    double Xn[FILAS]={0};
    double Xv[FILAS]={0};
    int filas=0, columnas=0, correccionM=0;
    /*          Para ingreso de matriz manualmente
    printf("Ingrese la matriz A (%dx%d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf", &A[i][j]);
        }
    }

    printf("Ingrese el vector b (%d elementos):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &b[i]);
    }
    */
    printf("Pre lectura\n");
    LeermYVector("dates2.dat", &filas, &columnas, pA, pB, &correccionM);
    // copia del puntero a la matriz principal para corregir cualquier error
    for(int i=0;i<filas;i++)
    {
        for(int j=0;j<columnas;j++)
            A[i][j]= *(pA+i*columnas+j);
        b[i]=(*(pB+i));
    }
    verifierDiagonalDominante(pA, filas);
    n=filas;
    double e = 1.0; // Inicializar el error
    double tol = 1e-6; // Tolerancia
    int iter = 0;

    while (e > tol && iter < MAX_ITER) {
        iter++;

        for (int i = 0; i < n; i++) {
            double suma = 0;
            for (int j = 0; j < n; j++) {
                if (j != i) {
                    suma += A[i][j] * Xv[j];
                }
            }
            Xn[i] = (b[i] - suma) / A[i][i];
        }

        double sumaError = 0;
        for (int i = 0; i < n; i++) {
            sumaError += pow(Xn[i] - Xv[i], 2);
            Xv[i] = Xn[i];
        }

        e = sqrt(sumaError);
    }

    printf("\nResultados después de %d iteraciones:\n", iter);
    for (int i = 0; i < n; i++) {
        printf("Xn[%d] = %.6lf\n", i, Xn[i]);
    }
    printf("Error: %.6lf\n", e);

    return 0;
}

void verifierDiagonalDominante(double *pA, int n) {

    for (int i = 0; i < n; i++) {
        double suma = 0;
        for (int j = 0; j < n; j++) {
            if (j != i) {
                suma += fabs( *(pA+i*n+j) );
            }
        }
        printf("fabs(*(pA+i*n+i))%lf <= suma%lf\n",fabs(*(pA+i*n+i)), suma);
        if (fabs(*(pA+i*n+i)) <= suma) {
            printf("La matriz no es diagonalmente dominante.\n");
            exit(1);
        }
        if (fabs(*(pA+i*n+i)) == 0) {
            printf("Ceros en la diagonal.\n");
            exit(1);
        }
    }
    /*
    for (int i  = 0; i < n; i++){
    double suma = 0;
    for(int j = i+1; j < n; j++)
    suma += *(pA+i*n+j);
    printf(" m[i][i]=%lf suma=%lf\n",fabs(*(pA+i*n+i)), suma) ;
    if(abs( *(pA+i*n+i) ) < abs(suma)){
    printf("la matriz no se puede resolver por este metodo\n");
    exit(10);
    }
    }
    */
}
