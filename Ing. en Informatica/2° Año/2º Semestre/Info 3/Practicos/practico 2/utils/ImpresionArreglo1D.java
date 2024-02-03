package utils;

import java.util.Random;
import java.util.Scanner;

// Usado en Ejercicio 2
public class ImpresionArreglo1D {

    static int arraySize; // Tamaño del array
    static int[] array; // Arreglo de enteros
    Scanner sc = new Scanner(System.in);
    public ImpresionArreglo1D(int []array, int arraySize){
        this.array=array;
        this.arraySize=arraySize;
    }
    /**
     * Imprime el Arreglo
     *
     */
    public void ImprimirArreglo(){
        for (int ii=0; ii<array.length; ii++){
            if ( (array.length-1) ==ii)
                System.out.println(array[ii]+".");
            else
                System.out.print(array[ii]+", ");
        }
    }
}
