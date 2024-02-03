package tests;

import utils.iterativos.GaussSeidel;
import utils.iterativos.Jacobi;

import java.io.FileNotFoundException;

public class testGaussSeidel {
    private Double A[][];
    private Double b[];
    private Double Xn[];
    private Double Xv[];
    private int filas=0;
    private int columnas=0;
    public testGaussSeidel(String s) throws FileNotFoundException {
        GaussSeidel gaussSeidel = new GaussSeidel(s);
        filas = gaussSeidel.getFilas();
        columnas = gaussSeidel.getColumnas();
        A = new Double[filas][columnas];
        b = new Double[filas];
        Xn = new Double[filas];
        A = gaussSeidel.getA().clone();
        b = gaussSeidel.getB().clone();
        Xn = gaussSeidel.getXn().clone();
        //gaussSeidel.imprimir();
    }
}
