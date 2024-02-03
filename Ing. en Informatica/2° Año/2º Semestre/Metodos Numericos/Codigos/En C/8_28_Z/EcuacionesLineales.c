#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "LecturaMatrizArchivo.h"

#define FILAS 5


int main() {
    double m[FILAS][100], b[FILAS],
			*pm=&m[0][0], *pb=b;
    int filas = 0, columnas = 0;
    int factor = 0, p = 0, swap = 0, correccionM=0;
	for(int i=0;i<filas;i++)
	{
		for(int j=0;j<columnas;j++)
		{
			printf("%lf | ",m[i][j]);
		}
		printf(": %lf \n",b[i] );
	}
    // Leer la matriz y el vector desde el archivo
    LeermYVector("datos.dat", &filas, &columnas, pm, pb, &correccionM);
	printf("Vuelta al main.\n");
	
    if (filas != columnas) {
        printf("%dx%d\nLa matriz no es cuadrada, no se puede resolver usando eliminacion gaussiana.\n",filas,columnas);
        return 20;
    }
	
	for(int i=0;i<filas;i++)
	{
		for(int j=0;j<columnas;j++)
			m[i][j]=*(pm+i*columnas+j);
	}

    // Eliminación Gaussiana con pivoteo parcial
    for (int jj = 0; jj < filas - 1; jj++) {
        // Encontrar el elemento máximo en la columna actual
        p = jj;
        for (int ll = jj + 1; ll < filas; ll++) {
            if (fabs(m[ll][jj]) > fabs(m[p][jj]))
                p = ll;
        }

        // Intercambiar filas
        if (p != jj) {
            for (int mm = 0; mm < filas; mm++) {
                swap = m[p][mm];
                m[p][mm] = m[jj][mm];
                m[jj][mm] = swap;
            }
            swap = b[p];
            b[p] = b[jj];
            b[jj] = swap;
        }

        for (int ii = jj + 1; ii < filas; ii++) {
            factor = -m[ii][jj] / m[jj][jj];
            for (int kk = jj; kk < filas; kk++)
                m[ii][kk] += factor * m[jj][kk];
            b[ii] += factor * b[jj];
        }
    }

    // Verificar si la matriz es singular
    int det = 1;
    for (int ii = 0; ii < filas; ii++)
        det *= m[ii][ii];
    if (det == 0) {
        printf("Matriz singular, no se puede resolver.\n");
        return 30;
    }

    // Retro-sustitución
    double x[FILAS];
    for (int ii = filas - 1; ii >= 0; ii--) {
        double suma = b[ii];
        for (int kk = ii + 1; kk < filas; kk++) {
            suma -= m[ii][kk] * x[kk];
        }
        x[ii] = suma / m[ii][ii];
    }

    // Imprimir la solución x
    printf("Solucion x:\n");
    for (int ii = 0; ii < filas; ii++) {
        printf("x[%d] = %lf\n", ii + 1, x[ii]);
    }
    system("pause");
    return 0;
}

