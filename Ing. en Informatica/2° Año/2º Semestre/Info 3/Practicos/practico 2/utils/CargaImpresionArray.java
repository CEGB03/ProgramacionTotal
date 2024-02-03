package utils;

import java.util.Random;
import java.util.Scanner;
// Usado en Ejercicio 3
public class CargaImpresionArray {
        static int arraySize; // Tamaño del array
        static int[] array; // Arreglo de enteros
        Scanner sc = new Scanner(System.in);

        /**
         * Constructor de la clase
         * @param tam Tamanio de Arreglo a generar
         */
        public CargaImpresionArray(int tam) {
            String respuesta;
            char repartir, siMayuscula='S', siMiniscula='s';
            arraySize = tam;
            array = new int[arraySize]; // Inicializa el arreglo
            CargaArrayRandom();
        }
        private static void CargaArrayRandom() {
            Random random = new Random();
            for (int i = 0; i <arraySize; i++) {
                array[i] = random.nextInt(1000); // Genera un número aleatorio entre 0 (inclusive) y 1000 (exclusive)
            }
        }
        /**
         * Retorna el Arreglo
         */
        public int[] getArray(){
            return array;
        }

}
