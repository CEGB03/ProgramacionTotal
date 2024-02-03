package ModeloParcial_1;

import tests.testInterpolacionPolinial;
import utils.*;
import utils.ajusteCurva.interpolacion.*;

import java.io.FileNotFoundException;

public class Ejercicio1 {
    public Ejercicio1(String s) throws FileNotFoundException {
        System.out.println("Polinomial:");
        interpolacionPolinomial interpolacionPolinomial=new interpolacionPolinomial(s);
    }
}
