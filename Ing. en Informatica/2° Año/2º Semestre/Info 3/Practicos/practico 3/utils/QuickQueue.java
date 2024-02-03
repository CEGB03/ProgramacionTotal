package utils;

import java.util.Random;

public class QuickQueue<AnyType> {
    private static Integer arraySize=0;
    private static Integer[]  array;
    private static Integer[]  tempArray;
    public void quickQueueInteger(int size){
        arraySize=size;
        array=new Integer[arraySize];
        cargaArrayEnteros();
        Queue<Integer> queueInteger = new Queue<>(arraySize);

        try {
            for (int ii=0; ii<arraySize; ii++)
                queueInteger.enqueue(array[ii]);
            System.out.println("Se agregaron correctamente.");
            tempArray= array.clone();
            System.out.println("Se Copio correctamente correctamente.");
            Ordenamientos<Integer> ordenamientosInteger = new Ordenamientos<Integer>();
            tempArray=ordenamientosInteger.quicksort(tempArray, 0, arraySize-1);
            System.out.println("Arreglo de Cola Ordenada");
            System.out.println("Vaciando cola Desordenada");
            for (int ii=0; ii<arraySize; ii++) {
                System.out.println("Frente=" + queueInteger.getFront());
                queueInteger.dequeue();
            }
            System.out.println("Cargando Cola Ordenada");
            for (int ii=0; ii<arraySize; ii++)
                queueInteger.enqueue(tempArray[ii]);
            System.out.println("Cola Ordenada");
            for (int ii=0; ii<arraySize; ii++) {
                System.out.println("Frente=" + queueInteger.getFront());
                queueInteger.dequeue();
            }

        } catch (Exception e) {
            System.err.println(e.getMessage());
        }
    }
    public static void cargaArrayEnteros() {
        Random random = new Random();
        int j=arraySize-1;
        for (int i = 0; i <arraySize; i++) {
            array[i] = random.nextInt(1000); // Genera un número aleatorio entre 0 (inclusive) y 1000 (exclusive)
        }
    }
}
