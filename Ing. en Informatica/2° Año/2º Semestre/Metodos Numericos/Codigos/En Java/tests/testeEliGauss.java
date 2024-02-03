package tests;

import utils.eliminacionGaussiana.Eliminacion;

import java.io.FileNotFoundException;

public class testeEliGauss {

    private int filas=0;
    private int columnas=0;
    Double[][] A;
    Double[]b;
    Double x[];
    public testeEliGauss(String s) throws FileNotFoundException {
        Eliminacion eliminacion=new Eliminacion(s);
        filas= eliminacion.getFilas();
        columnas= eliminacion.getColumnas();
        A=new Double[filas][columnas];
        b=new Double[filas];
        x=new Double[filas];
        A= eliminacion.getA().clone();
        b= eliminacion.getB().clone();
        x= eliminacion.getX().clone();
        eliminacion.eliminar();
        eliminacion.imprimir();
        eliminacion.imprimirSolucion();
    }
}
