package Ejercicios;

import utils.Stack;
import utils.StackList;

public class Ejercicio3 {
    private static String cadena;
    private String parentesisA="(";
    private String parentesisC=")";
    private int contA = 0;
    private int contC=0;
    public void esEquilibrada(String string) throws Exception {
        cadena=string;

        for (int ii = 0; ii < getCadena().length(); ii++) {
            if (cadena.charAt(ii)!=parentesisA.charAt(0) && cadena.charAt(ii)!=parentesisC.charAt(0))
                cadena = cadena.replace(String.valueOf(cadena.charAt(ii))," ");
        }
        cadena = cadena.replaceAll("\\s", "").toLowerCase();
        // Crear una pila para almacenar la primera mitad de los caracteres
        StackList<String> stackList = new StackList<String>();
        for (int i = 0; i < getCadena().length(); i++) {
            stackList.push(String.valueOf(cadena.charAt(i)));
        }
        while (!stackList.isEmpty()){
            if (stackList.top().compareTo(parentesisA) ==0) {
                contA++;
            }
            if (stackList.top().compareTo(parentesisC) ==0) {
                contC++;
            }
            stackList.pop();
        }
        if (contA==contC)
            System.out.println("Paréntesis balanceados.");
        else
            System.out.println("Paréntesis desbalanceados.");
    }
    public static String getCadena() {
        return cadena;
    }
}
