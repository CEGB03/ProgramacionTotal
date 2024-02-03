package Ejercicios;

import utils.ArbolBinario;

public class Ejercicio4 {
    private Ejercicio3 ejercicio3;
    private ArbolBinario<Integer> integerArbolBinario;

    public Ejercicio4() throws Exception {
        ejercicio3=new Ejercicio3();
        integerArbolBinario=ejercicio3.getIntegerArbolBinario();
        integerArbolBinario.imprimirInOrder();
        System.out.println("integerArbolBinario.height() = " + integerArbolBinario.height());
    }
}
