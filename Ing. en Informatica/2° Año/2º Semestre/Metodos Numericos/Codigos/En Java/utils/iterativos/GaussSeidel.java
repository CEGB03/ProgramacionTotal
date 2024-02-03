package utils.iterativos;

import utils.Pibot;
import utils.lecturaArchivos.LecturaArchivoMatrices;

import java.io.FileNotFoundException;

public class GaussSeidel {
    private final int MAX_ITER = 1000000;
    private Double A[][];
    private Double b[];
    private Double Xn[];
    private Double Xv[];
    private int filas = 0;
    private int columnas = 0;
    private int correccionM = 0;

    public GaussSeidel(String s) throws FileNotFoundException {
        try {
            LecturaArchivoMatrices lecturaArchivoMatrices = new LecturaArchivoMatrices(s);
            filas = lecturaArchivoMatrices.getFilas();
            columnas = lecturaArchivoMatrices.getColumnas();
            A = new Double[filas][columnas];
            b = new Double[filas];
            Xv = new Double[filas];
            Xn = new Double[filas];
            A = lecturaArchivoMatrices.getmFinal();
            b = lecturaArchivoMatrices.getB();
            //Piboteo inicio
            Pibot pibot =new Pibot(A, b,filas);
            pibot.pivoteo_GPT();
            A= pibot.getA();
            b= pibot.getB();
            //Piboteo fin
            verifierDiagonalDominante();

            for (int i = 0; i < filas; i++) {
                Xn[i] = 0.0;
                Xv[i] = 0.0;
            }

            double e = 1e-5; // Inicializar el error
            double tol = 1e-120; // Tolerancia
            int iter = 0;

            while (e > tol && iter < MAX_ITER) {
                for (int i = 0; i < filas; i++) {
                    double suma = 0;
                    for (int j = 0; j < filas; j++) {
                        if (j != i) {
                            suma += A[i][j] * ((i < j) ? Xn[j] : Xv[j]);
                        }
                    }
                    Xn[i] = (b[i] - suma) / A[i][i];
                }

                double sumaError = 0;
                double sumaXn = 0;

                for (int i = 0; i < filas; i++) {
                    sumaError += Math.pow(Xn[i] - Xv[i], 2);
                    sumaXn += Math.pow(Xn[i], 2);
                    Xv[i] = Xn[i];
                }

                e = Math.sqrt(sumaError / sumaXn);
                iter++;
            }

            System.out.println("Resultados después de " + iter + " iteraciones:");
            for (int i = 0; i < filas; i++) {
                System.out.println("Xn[" + i + "] = " + Xn[i]);
            }
            System.out.println("Error: " + e);
        } catch (FileNotFoundException e) {
            System.err.println("Error: Archivo no encontrado.");
            e.printStackTrace();
        }
    }

    void verifierDiagonalDominante() {
        for (int i = 0; i < filas; i++) {
            double suma = 0;
            for (int j = 0; j < filas; j++) {
                if (j != i) {
                    suma += Math.abs(A[i][j]);
                }
            }
            if (Math.abs(A[i][i]) == 0) {
                throw new RuntimeException("Ceros en la diagonal.");
            }
            if (Math.abs(A[i][i]) <= suma) {
                throw new RuntimeException("La matriz no es diagonalmente dominante.");
            }
        }
    }

    public void imprimir() {
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++)
                System.out.print(A[i][j] + " ");
            System.out.println("| " + b[i]);
        }
        System.out.println();
    }

    public void imprimirSolucion() {
        System.out.println("Solucion Xn:");
        for (int ii = 0; ii < filas; ii++) {
            System.out.println("Xn[" + (ii + 1) + "] = " + Xn[ii]);
        }
        System.out.println();
    }

    public int getFilas() {
        return filas;
    }

    public int getColumnas() {
        return columnas;
    }

    public Double[] getB() {
        return b;
    }

    public Double[][] getA() {
        return A;
    }

    public Double[] getXn() {
        return Xn;
    }

    public Double[] getXv() {
        return Xv;
    }
}
