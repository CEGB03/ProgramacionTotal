
package tests;

import utils.ajusteCurva.interpolacion.Lagrange;

import java.io.FileNotFoundException;

public class testInterpolacionLagrange {
    private Double A[][];
    private Double b[];
    private int filas = 0;
    private int columnas = 0;

    public testInterpolacionLagrange(String s, double x) throws FileNotFoundException {
        Lagrange lagrange = new Lagrange(s,x);
    }
}

