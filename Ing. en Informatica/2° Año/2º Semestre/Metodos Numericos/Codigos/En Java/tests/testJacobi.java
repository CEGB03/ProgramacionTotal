package tests;

import utils.eliminacionGaussiana.Eliminacion;
import utils.iterativos.Jacobi;

import java.io.FileNotFoundException;

public class testJacobi {
    private Double A[][];
    private Double b[];
    private Double Xn[];
    private Double Xv[];
    private int filas=0;
    private int columnas=0;
    public testJacobi(String s) throws FileNotFoundException {
        Jacobi jacobi = new Jacobi(s);
        filas = jacobi.getFilas();
        columnas = jacobi.getColumnas();
        A = new Double[filas][columnas];
        b = new Double[filas];
        Xn = new Double[filas];
        A = jacobi.getA().clone();
        b = jacobi.getB().clone();
        Xn = jacobi.getXn().clone();
        //jacobi.imprimir();
    }
}
