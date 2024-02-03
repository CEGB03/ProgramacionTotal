#include "LecturaMatrizArchivo.h"
#include <stdio.h>
#include <stdlib.h>

void LeermYVector(const char *archivo, int *fil, int *col, double *m, double *b, int *correccionM) {
    printf("Entrada a LecturaMatrizArchivo.c\n");
    FILE *fp = fopen(archivo, "r");
    printf("%x\n%p\n",fp,fp,*fp);
    if (fp == NULL) {
        puts("No se puede abrir el archivo .dat");
        exit(10);
    }

    //contador de filas
    int filas = 0;
    char c;
    int columnas;

    while ((c = fgetc(fp)) != EOF) {
        if (c == '\n') {
            filas++;
        }
    }

    printf("numero de filas=%d\n", filas);

    //cerramos y reabrimos el archivo para resetear el puntero
    fclose(fp);
    fp = fopen(archivo, "r");
    double mCarga[filas][100];

    //Cargo los datos leidos en el array
    int i, j;
    for (i = 0; i < filas; i++) {
        j = 0;
        do {
            fscanf(fp, "%lf", &(mCarga[i][j]));
            j++;
        } while ((c = fgetc(fp)) != '\n');
    }
    //cerramos y asignamos el valor de las columnas
    fclose(fp);

    columnas = j;
    if ((columnas - filas) == 1) {
        *correccionM = 2;
        printf("numero de columnas de matriz irregular= %d\n", columnas);
        //imprimo la matriz para verificar que lo leyo correctamente

        columnas--;
        for (i = 0; i < filas; i++) {
            for (j = 0; j < columnas; j++)
                *(m + i * columnas + j) = mCarga[i][j];
            *(b + i) = mCarga[i][columnas];
        }

        //Impresion de la matriz completa luego de la copia.
        for (i = 0; i < filas; i++) {
            for (j = 0; j < columnas; j++)
                printf("%.1lf ", *(m + i * columnas + j));
            printf("| %.1lf\n", *(b + i));
        }
    } else {
        *correccionM = 1;
        printf("No hay matriz b\n");
        printf("numero de columnas de matriz regular= %d\n", columnas);

        for (i = 0; i < filas; i++) {
            for (j = 0; j < columnas; j++)
                *(m + i * columnas + j) = mCarga[i][j];
        }
        for (i = 0; i < filas; i++) {
            for (j = 0; j < columnas; j++)
                printf("%lf ", *(m + i * columnas + j));
            printf("\n");
        }
    }
    //Asignamos los valores para volver al main
    *fil = filas;
    *col = columnas;
}
