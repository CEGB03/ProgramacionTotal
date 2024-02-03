package Ejercicios;

import utils.ArbolBinario;

public class Ejercicio5 {
    private Ejercicio3 ejercicio3;
    private ArbolBinario<Integer> integerArbolBinario;

    public Ejercicio5() throws Exception {
        ejercicio3 = new Ejercicio3();
        integerArbolBinario = ejercicio3.getIntegerArbolBinario();
        System.out.println("\nimprimirInOrder");
        integerArbolBinario.imprimirInOrder();
        System.out.println("\nimprimirPreOrder");
        integerArbolBinario.imprimirPreOrder();
        System.out.println("\nimprimirPostOrder");
        integerArbolBinario.imprimirPostOrder();
        System.out.println("\n\nPreBorrado");

        integerArbolBinario.dtree(integerArbolBinario.getRoot(),3);

        System.out.println("\n\nPostBorrado");
        System.out.println("imprimirInOrder");
        integerArbolBinario.imprimirInOrder();
        System.out.println("\nimprimirPreOrder");
        integerArbolBinario.imprimirPreOrder();
        System.out.println("\nimprimirPostOrder");
        integerArbolBinario.imprimirPostOrder();
    }
}
