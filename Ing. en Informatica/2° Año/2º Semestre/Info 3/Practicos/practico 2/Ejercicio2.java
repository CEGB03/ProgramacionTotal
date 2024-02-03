import utils.ImpresionArreglo1D;

import java.util.Random;
import java.util.Scanner;

public class Ejercicio2 {
    static Scanner sc = new Scanner(System.in);
    static int []array;
    public static void main(String[] args) {
        int n=CrearArray();
        ImpresionArreglo1D impresionArreglo1D_I = new ImpresionArreglo1D(array,n);
        impresionArreglo1D_I.ImprimirArreglo();
    }
    public static int CrearArray() {
        String respuesta;
        char repartir, siMayuscula='S', siMiniscula='s';
        System.out.println ("Ingrese un numero entero positivo para que sea el numero de elementos del arreglo que se cargara aleatoriamente: ");
        int tamArray=Integer.parseInt(sc.nextLine());
        array= new int[tamArray]; // Inicializa el arreglo
        System.out.println("Cargar aleatoreamente el arreglo con numeros enteros? Si/No");
        respuesta = sc.nextLine();
        repartir = respuesta.charAt(0);
        if (repartir == siMayuscula || repartir == siMiniscula)
            CargaArrayRandom(tamArray);
        else
            CargarArray(tamArray);
        return tamArray;
    }
    public static void CargarArray(int arraySize){
        for (int ii=0; ii<arraySize; ii++)
            array[ii]=sc.nextInt();
    }
    public static void CargaArrayRandom(int arraySize) {
        Random random = new Random();
        int j=arraySize-1;
        for (int i = 0; i <arraySize; i++) {
            array[i] = random.nextInt(1000); // Genera un número aleatorio entre 0 (inclusive) y 1000 (exclusive)
        }
    }
}
