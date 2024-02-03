package tests;

import utils.ajusteCurva.regresion.regresionPolinomial;

public class testRegresionPolinomial {
    public testRegresionPolinomial(String s){
        regresionPolinomial O_Minimos=new regresionPolinomial(s);
        O_Minimos.hacerRegresion();
    }
}
