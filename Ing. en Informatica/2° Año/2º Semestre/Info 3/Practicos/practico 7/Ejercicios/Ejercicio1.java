package Ejercicios;

import utils.ArbolBinario_AVL;

import java.util.Random;
import java.util.Scanner;

public class Ejercicio1 {
    private ArbolBinario_AVL<Integer> integerArbolBinario;
    Scanner sc=new Scanner(System.in);
    private Integer nodo;
    private Integer[] arrayStandar={3, 15, 22, 19, 6, 12, 1, 24, 5, 8 };
    public Ejercicio1() throws Exception {
        cargaArbol();
        System.out.println("\nPosOrder:");
        integerArbolBinario.imprimirPostOrder();
        System.out.println("\nprint(stackoverflow1)");
        integerArbolBinario.StackOverflow1();
        System.out.println("Ingrese el valor del nodo a borrar");
        nodo=Integer.parseInt(sc.nextLine());
        integerArbolBinario.dtree1(integerArbolBinario.getRoot(), nodo);
        System.out.println("Luego de la eliminacion:");
        integerArbolBinario.StackOverflow1();
    }
    private void cargaArbol() throws Exception {
        Random random = new Random();
        int numeroAleatorio;
        // Generar 10 números aleatorios entre 0 y 25
        for (int i = 0; i < 10; i++) {
            numeroAleatorio = random.nextInt(26); // Genera un número entre 0 (inclusive) y 26 (exclusive)
            //numeroAleatorio = arrayStandar[i];
            System.out.println("\nnumeroAleatorio = "+numeroAleatorio);
            if(i==0)
                integerArbolBinario = new ArbolBinario_AVL<>(numeroAleatorio);
            else
                integerArbolBinario.addNoRep(numeroAleatorio);

            System.out.println("InOrder N°"+(i+1));
            integerArbolBinario.imprimirInOrder();
        }
    }
    public ArbolBinario_AVL<Integer> getIntegerArbolBinario() {
        return integerArbolBinario;
    }
}
