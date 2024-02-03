package Ejercicios;

import utils.ArbolBinario;

import java.util.ArrayList;
import java.util.Random;

public class Ejercicio1_2 {
    private Integer[] arrayStandar={3, 15, 22, 19, 6, 12, 1, 24, 1, 8 };
    private ArbolBinario<Integer> integerArbolBinario;
    public Ejercicio1_2() {
        Random random = new Random();
        ArrayList<Integer> arrayList=new ArrayList<>();
        int numeroAleatorio;
        // Generar 10 números aleatorios entre 0 y 25
        for (int i = 0; i < 10; i++) {
            numeroAleatorio = random.nextInt(26); // Genera un número entre 0 (inclusive) y 26 (exclusive)
            //numeroAleatorio = arrayStandar[i];
            System.out.println("numeroAleatorio = "+numeroAleatorio);
            arrayList.add(numeroAleatorio);
            if(i==0)
                integerArbolBinario = new ArbolBinario<>(numeroAleatorio);
            else
                integerArbolBinario.add(numeroAleatorio);

        }
        System.out.println("InOrder");
        integerArbolBinario.imprimirInOrder();
        for (Integer i : arrayList) {
            System.out.print(i+" ");
        }
    }
}
