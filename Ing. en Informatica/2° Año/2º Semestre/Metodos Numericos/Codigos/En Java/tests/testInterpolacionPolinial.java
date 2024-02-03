package tests;

import utils.ajusteCurva.interpolacion.Lagrange;
import utils.ajusteCurva.interpolacion.interpolacionPolinomial;

import java.io.FileNotFoundException;

public class testInterpolacionPolinial {
    public testInterpolacionPolinial(String s) throws FileNotFoundException {
        interpolacionPolinomial interpolacionPolinomial= new interpolacionPolinomial(s);
        interpolacionPolinomial.evaluarX(-3);
    }
}
