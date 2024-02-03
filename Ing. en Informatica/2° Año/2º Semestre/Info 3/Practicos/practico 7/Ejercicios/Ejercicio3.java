package Ejercicios;

import utils.ArbolBinario_AVL;

public class Ejercicio3 {
    private ArbolBinario_AVL<Integer> integerArbolBinario;

    private Integer[] arrayStandar={5, 10, 20, 30, 40, 50, 60};
    public Ejercicio3() throws Exception {
        cargaArbol();
        System.out.println("PosOrder:");
        integerArbolBinario.imprimirPostOrder();
        System.out.println("\nprint(stackoverflow1)");
        integerArbolBinario.StackOverflow1();
    }
    private void cargaArbol() throws Exception {
        int numeroAgregado;
        // Generar 10 números aleatorios entre 0 y 25
        for (int i = 0; i < arrayStandar.length; i++) {
            numeroAgregado = arrayStandar[i];
            if(i==0)
                integerArbolBinario = new ArbolBinario_AVL<>(numeroAgregado);
            else
                integerArbolBinario.addNoRep(numeroAgregado);

            integerArbolBinario.StackOverflow1();
        }
    }
    public ArbolBinario_AVL<Integer> getIntegerArbolBinario() {
        return integerArbolBinario;
    }
}
