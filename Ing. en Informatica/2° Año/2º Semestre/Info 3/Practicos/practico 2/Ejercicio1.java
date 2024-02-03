import utils.Ordenamientos;

import java.util.Scanner;
import java.util.Random;

/**
 * 1. Implemente los métodos de ordenación de inserción, Shellsort y quicksort usando
 * las implementaciones del teórico. Ejecútelos con los siguientes objetos:
 *      a. enteros.
 *      b. números reales de tipo double.
 *      c. cadena de caracteres.
 */
public class Ejercicio1<AnyType> {
    static Scanner sc = new Scanner(System.in);
    static final int arraySize = 10; // Tamaño del array
    static final Integer[] arrayI = new Integer[arraySize];
    static final Double[] arrayD = new Double[arraySize];
    static final String[] arrayC = new String[arraySize];
    public static void main(String[] args) {
        String respuesta;
        int ejercicio;
        char repartir, siMayuscula='S', siMiniscula='s';

        do {
            System.out.println ("Ingrese la opccion correspondiente");
            System.out.println ("1. enteros.");
            System.out.println ("2. números reales de tipo double.");
            System.out.println ("3. cadena de caracteres.");
            ejercicio=Integer.parseInt(sc.nextLine());
            switch (ejercicio){
                case 1-> {
                    Ordenamientos<Integer> ordenamientosInteger = new Ordenamientos<Integer>();
                    System.out.println("Opcion " + ejercicio);
                    do {
                        CargaArrayEnteros();
                        ordenamientosInteger.ImprimirArreglo(arrayI);
                        System.out.println("Ingrese la opccion correspondiente");
                        System.out.println("1. Inserccion.");
                        System.out.println("2. Shell.");
                        System.out.println("3. QuickShort.");
                        ejercicio = Integer.parseInt(sc.nextLine());
                        switch (ejercicio) {
                            case 1:
                                System.out.println("Opcion " + ejercicio);
                                ordenamientosInteger.insertionShort_T(arrayI);
                                break;
                            case 2:
                                System.out.println("Opcion " + ejercicio);
                                ordenamientosInteger.shell(arrayI);
                                break;
                            case 3:
                                System.out.println("Opcion " + ejercicio);
                                ordenamientosInteger.quicksort(arrayI, 0, arraySize-1);
                                break;

                        }
                        ordenamientosInteger.ImprimirArreglo(arrayI);
                        System.out.println("Realizar otro Ordenamiento?(Se usara un nuevo arreglo) Si/No");
                        respuesta = sc.nextLine();
                        repartir = respuesta.charAt(0);
                    } while (repartir == siMayuscula || repartir == siMiniscula);
                }
                case 2-> {
                    Ordenamientos<Double> ordenamientosDouble = new Ordenamientos<Double>();
                    System.out.println("Opcion " + ejercicio);
                    do {
                        CargaArrayDoble();
                        ordenamientosDouble.ImprimirArreglo(arrayD);
                        System.out.println("Ingrese la opccion correspondiente");
                        System.out.println("1. Inserccion.");
                        System.out.println("2. Shell.");
                        System.out.println("3. QuickShort.");
                        ejercicio = Integer.parseInt(sc.nextLine());
                        switch (ejercicio) {
                            case 1:
                                System.out.println("Opcion " + ejercicio);
                                CargaArrayEnteros();
                                ordenamientosDouble.insertionShort_T(arrayD);
                                break;
                            case 2:
                                System.out.println("Opcion " + ejercicio);
                                CargaArrayDoble();
                                ordenamientosDouble.shell(arrayD);
                                break;
                            case 3:
                                System.out.println("Opcion " + ejercicio);
                                CargaArrayChar();
                                ordenamientosDouble.quicksort(arrayD, 0, arraySize-1);
                                break;

                        }
                        ordenamientosDouble.ImprimirArreglo(arrayD);
                        System.out.println("Realizar otro Ordenamiento?(Se usara un nuevo arreglo) Si/No");
                        respuesta = sc.nextLine();
                        repartir = respuesta.charAt(0);
                    } while (repartir == siMayuscula || repartir == siMiniscula);
                }
                case 3-> {
                    Ordenamientos<String> ordenamientosString = new Ordenamientos<String>();
                    System.out.println("Opcion " + ejercicio);
                    do {
                        CargaArrayChar();
                        ordenamientosString.ImprimirArreglo(arrayC);
                        System.out.println("Ingrese la opccion correspondiente");
                        System.out.println("1. Inserccion.");
                        System.out.println("2. Shell.");
                        System.out.println("3. QuickShort.");
                        ejercicio = Integer.parseInt(sc.nextLine());
                        switch (ejercicio) {
                            case 1:
                                System.out.println("Opcion " + ejercicio);
                                CargaArrayEnteros();
                                ordenamientosString.insertionShort_T(arrayC);
                                break;
                            case 2:
                                System.out.println("Opcion " + ejercicio);
                                CargaArrayDoble();
                                ordenamientosString.shell(arrayC);
                                break;
                            case 3:
                                System.out.println("Opcion " + ejercicio);
                                CargaArrayChar();
                                ordenamientosString.quicksort(arrayC, 0, arraySize-1);
                                break;
                        }
                        ordenamientosString.ImprimirArreglo(arrayC);
                        System.out.println("Realizar otro Ordenamiento?(Se usara un nuevo arreglo) Si/No");
                        respuesta = sc.nextLine();
                        repartir = respuesta.charAt(0);
                    } while (repartir == siMayuscula || repartir == siMiniscula);
                }
            }
            System.out.println("Realizar otro ejercicio? Si/No");
            respuesta = sc.nextLine();
            repartir = respuesta.charAt(0);
        } while (repartir == siMayuscula || repartir == siMiniscula);
    }
    public static void CargaArrayEnteros() {
        Random random = new Random();
        int j=arraySize-1;
        for (int i = 0; i <arraySize; i++) {
            arrayI[i] = random.nextInt(1000); // Genera un número aleatorio entre 0 (inclusive) y 1000 (exclusive)
        }
    }
    public static void CargaArrayDoble() {
        Random random = new Random();
        for (int i = 0; i < arraySize; i++)
            arrayD[i] = random.nextDouble(10); // Genera un número aleatorio entre 0 (inclusive) y 1000 (exclusive)
    }
    public static void CargaArrayChar() {
        Random random = new Random();
        for (int i = 0; i < arraySize; i++)
            arrayC[i] = String.valueOf((char) (random.nextInt(26) + 65)); // Genera un número aleatorio entre 0 (inclusive) y 1000 (exclusive)
    }
}
