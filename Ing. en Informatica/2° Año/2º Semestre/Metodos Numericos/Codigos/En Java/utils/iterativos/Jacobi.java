package utils.iterativos;

import utils.Pibot;
import utils.lecturaArchivos.LecturaArchivoMatrices;
import java.io.FileNotFoundException;

public class Jacobi {

    private final int MAX_ITER = 1000000;
    private Double A[][];
    private Double b[];
    private Double Xn[];
    private Double Xv[];
    private int filas=0;
    private int columnas=0;
    private int correccionM=0;
    public Jacobi(String s) throws FileNotFoundException {
        try {
        LecturaArchivoMatrices lecturaArchivoMatrices =new LecturaArchivoMatrices(s);
        filas= lecturaArchivoMatrices.getFilas();
        columnas= lecturaArchivoMatrices.getColumnas();
        A=new Double[filas][columnas];
        b=new Double[filas];
        Xv=new Double[filas];
        Xn=new Double[filas];
        A= lecturaArchivoMatrices.getmFinal();
        b= lecturaArchivoMatrices.getB();
        //Piboteo inicio
        Pibot pibot =new Pibot(A, b,filas);
        pibot.pivoteo_GPT();
        A= pibot.getA();
        b= pibot.getB();
        /*
        factor=pibot.getFactor();
        swap= pibot.getSwap();
        p= pibot.getP();*/
        //Piboteo fin
        verifierDiagonalDominante();
        double e = 1e-5; // Inicializar el error
        double tol = 1e-120; // Tolerancia
        int iter = 0;
        for (int i = 0; i < filas; i++) {
            Xn[i] = 0.0;
            Xv[i] = 0.0;
        }
        while (e > tol && iter < MAX_ITER) {
            iter++;

            for (int i = 0; i < filas; i++) {
                double suma = 0;
                for (int j = 0; j < filas; j++) {
                    if (j != i) {
                        suma += A[i][j] * Xv[j];
                    }
                }
                Xn[i] = (b[i] - suma) / A[i][i];
            }

            double sumaError = 0;
            for (int i = 0; i < filas; i++) {
                sumaError += Math.pow(Xn[i] - Xv[i], 2);
                Xv[i] = Xn[i];
            }

            e = Math.sqrt(sumaError);
        }

        System.out.println("Resultados despues de "+iter+" iteraciones:");
        for (int i = 0; i < filas; i++) {
            System.out.println("Xn["+i+"] = "+ Xn[i]);
        }
        System.out.println("Error: "+ e);
        } catch (FileNotFoundException e) {
            // Manejo de la excepción de archivo no encontrado
            System.err.println("Error: Archivo no encontrado.");
            e.printStackTrace(); // Esto imprime información detallada sobre el error
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
            if ((Math.abs(A[i][i]) <= suma)) {
                throw new RuntimeException("La matriz no es diagonalmente dominante.");
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
    /*
    public void eliminar(){
        System.out.println("Vuelta al main.\n");

        if (filas != columnas) {
            System.out.println(filas+"x"+columnas+"\nLa matriz no es cuadrada, no se puede resolver usando eliminacion gaussiana.");
            System.exit(20);
        }

        Pibot pibot =new Pibot(A, b,filas);
        A= pibot.getA();
        b= pibot.getB();
        factor=pibot.getFactor();
        swap= pibot.getSwap();
        p= pibot.getP();


        // Verificar si la matriz es singular
        int det = 1;
        for (int ii = 0; ii < filas; ii++)
            det *= A[ii][ii];
        if (det == 0) {
            System.err.println("Matriz singular, no se puede resolver.\n");
            System.exit(30);
        }
        retroSustitucion();

    }
    public void retroSustitucion(){
        // Retro-sustitución
        for (int ii = filas - 1; ii >= 0; ii--) {
            double suma = b[ii];
            for (int kk = ii + 1; kk < filas; kk++) {
                suma -= A[ii][kk] * x[kk];
            }
            x[ii] = suma / A[ii][ii];
        }
    }*/
    public void imprimir(){
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++)
                System.out.print(A[i][j]+" ");
            System.out.println("| "+b[i]);
        }
        System.out.println();
    }
    public void imprimirSolucion(){
        // Imprimir la solución x
        System.out.println("Solucion Xn:");
        for (int ii = 0; ii < filas; ii++) {
            System.out.println("Xn["+(ii + 1)+"] = "+Xn[ii]);
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

    public Double[] getXv() {return Xv;}

}

