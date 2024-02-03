package Ejercicios;

import utils.ArbolBinario;

import java.util.ArrayList;
import java.util.Random;

public class Ejercicio3 {
    private Integer[] arrayStandar={3, 15, 22, 19, 6, 12, 1, 24, 5, 8 };
    private ArbolBinario<Integer> integerArbolBinario;
    public Ejercicio3() throws Exception {
        Random random = new Random();
        ArrayList<Integer> arrayList=new ArrayList<>();
        int numeroAleatorio;
        // Generar 10 números aleatorios entre 0 y 25
        for (int i = 0; i < 10; i++) {
            //numeroAleatorio = random.nextInt(9); // Genera un número entre 0 (inclusive) y 26 (exclusive)
            numeroAleatorio = arrayStandar[i];
            System.out.println("numeroAleatorio = "+numeroAleatorio);
            arrayList.add(numeroAleatorio);
            if(i==0)
                integerArbolBinario = new ArbolBinario<>(numeroAleatorio);
            else
                integerArbolBinario.addNoRep(numeroAleatorio);

            System.out.println("InOrder N°"+(i+1));
            integerArbolBinario.imprimirInOrder();
        }
        for (Integer i : arrayList) {
            System.out.print(i+" ");
        }
        System.out.println();
    }

    public ArbolBinario<Integer> getIntegerArbolBinario() {
        return integerArbolBinario;
    }
}
