package Parcial1;

import utils.ajusteCurva.regresion.regresionLineal;
import utils.ajusteCurva.regresion.regresionPolinomial;
import utils.eliminacionGaussiana.Eliminacion;

import java.io.FileNotFoundException;

public class Ejercicio4 {
    public Ejercicio4() throws FileNotFoundException {
        System.out.println("Polinomial:");
        regresionPolinomial regresionPolinomial=new regresionPolinomial("Parcial1_Eje4_RP");
        regresionPolinomial.hacerRegresion();
        regresionPolinomial.imprimir();
        regresionPolinomial.imprimirResultados();
        System.out.println("Lineal:");
        regresionLineal regresionLineal=new regresionLineal("Parcial1_Eje4_RP");
        regresionLineal.calcularSumas ();
        regresionLineal.imprimir ();
        regresionLineal.calcularM_B ();
        regresionLineal.imprimirMB ();
        regresionLineal.recta ();
        regresionLineal.calcularMSE();
        Eliminacion eliminacion=new Eliminacion("Parcial1_Eje4_EGJ");
        eliminacion.eliminar();
    }
}
