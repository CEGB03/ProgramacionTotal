package Ejercicios;

import utils.ArbolBinario_AVL;

import java.util.Scanner;

public class Ejercicio4 {
    private ArbolBinario_AVL<Integer> integerArbolBinario;

    private Integer[] arrayStandar={4, 2, 30, 1, 5, 10, 50, 20, 40, 60};
    Scanner sc=new Scanner(System.in);
    private Integer nodo;
    public Ejercicio4() throws Exception {
        cargaArbol();
        System.out.println("PosOrder:");
        integerArbolBinario.imprimirPostOrder();
        System.out.println("\nprint(stackoverflow1)");
        integerArbolBinario.StackOverflow1();
        for (int ii=0; ii<2; ii++) {
            System.out.println("Ingrese el valor del nodo a borrar");
            nodo = Integer.parseInt(sc.nextLine());
            integerArbolBinario.dtree2(nodo);
            System.out.println("Luego de la eliminacion:");
            integerArbolBinario.StackOverflow1();
        }
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
