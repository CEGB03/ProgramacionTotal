package utils.eliminacionGaussiana;

import utils.Pibot;
import utils.lecturaArchivos.LecturaArchivoMatrices;
import java.io.FileNotFoundException;

public class Eliminacion {
    private int filas=0;
    private int columnas=0;
    Double[][] A;
    Double[]b;
    Double x[];
    double factor = 0;
    int p = 0;
    Double swap = (double) 0;
    public Eliminacion(String s) throws FileNotFoundException {
        LecturaArchivoMatrices lecturaArchivoMatrices =new LecturaArchivoMatrices(s);
        filas= lecturaArchivoMatrices.getFilas();
        columnas= lecturaArchivoMatrices.getColumnas();
        A=new Double[filas][columnas];
        b=new Double[filas];
        x=new Double[filas];
        A= lecturaArchivoMatrices.getmFinal();
        b= lecturaArchivoMatrices.getB();
    }
    public void eliminar(){
        System.out.println("Vuelta al main.\n");

        if (filas != columnas) {
            System.out.println(filas+"x"+columnas+"\nLa matriz no es cuadrada, no se puede resolver usando eliminacion gaussiana.");
            System.exit(20);
        }

//      Descomentar para ver la matriz
        System.out.println("Imprimir antes de pibot");
        imprimir();
        //Piboteo inicio
        Pibot pibot =new Pibot(A, b,filas);
        A= pibot.getA();
        b= pibot.getB();
        factor=pibot.getFactor();
        swap= pibot.getSwap();
        p= pibot.getP();
        //pibot.pivoteo_GPT();
        pibot.pibotear();
        //Piboteo fin

//      Descomentar para ver la matriz
        System.out.println("Imprimir despues de pibot y triangulacion");
        pibot.triangulacionConPivot();
        imprimir();




        // Verificar si la matriz es singular
        int det = 1;
        for (int ii = 0; ii < filas; ii++)
            det *= A[ii][ii];
        if (det == 0) {
            System.err.println("Matriz singular, no se puede resolver.\n");
            System.exit(30);
        }
        System.out.println("det(A)= "+det);
        // Retro-sustitución  EMA
        for (int i = filas - 1; i >= 0; i--) {
            double suma = b[i];
            for (int j = i + 1; j < filas; j++) {
                suma -= A[i][j] * x[j];
            }
            x[i] = suma / A[i][i];
        }
        //sustitucion regresiva ANGELO-PARISI
        /*double suma=0;
        x[filas-1] = b[filas-1] / A[filas-1][filas-1];

        for (int i=filas-2; i>=0; i--)
        {
            suma = b[i];
            for(int j=i+1; j<=filas-1; j++)
            {
                suma-=A[i][j]*x[j];
            }
            x[i]=(suma)/A[i][i];
        }*/

    }
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
        System.out.println("Solucion x:");
        for (int ii = 0; ii < filas; ii++) {
            System.out.println("x["+(ii + 1)+"] = "+x[ii]);
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

    public Double[] getX() {
        return x;
    }
}
