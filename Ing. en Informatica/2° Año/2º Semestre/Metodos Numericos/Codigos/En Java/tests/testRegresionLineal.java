package tests;

import utils.ajusteCurva.regresion.regresionLineal;

public class testRegresionLineal {
    public testRegresionLineal(String s){
        regresionLineal O_Minimos=new regresionLineal(s);
        O_Minimos.calcularSumas ();
        O_Minimos.imprimir ();
        O_Minimos.calcularM_B ();
        O_Minimos.imprimirMB ();
        O_Minimos.recta ();
        O_Minimos.calcularMSE();
    }
}
