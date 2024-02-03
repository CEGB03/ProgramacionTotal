package Ejercicios;

import utils.QueueList;

public class Ejercicio8 {
    private String cadena;
    private String original;
    public Ejercicio8(String string) throws Exception {
        this.cadena=string;
        this.original=string;
        if (esPalindromo())
            System.out.println("La "+getOriginal()+" es un palíndromo.");
        else
            System.err.println("La " + getOriginal() + " no es un palíndromo.");
    }
    public boolean esPalindromo() throws Exception {
        // Eliminar espacios en blanco y convertir a minúsculas
        cadena = cadena.replaceAll("\\s", "").toLowerCase();

        int longitud = cadena.length();

        // Llenar la cola con la primera mitad de los caracteres
        int mitad = longitud / 2;
        // Crear una cola para almacenar la primera mitad de los caracteres
        QueueList<Character> charQueueList1M = new QueueList<>();
        for (int i = 0; i < mitad; i++) {
            charQueueList1M.enqueue(cadena.charAt(i));
        }
        // Crear una cola para almacenar la segunda mitad de los caracteres
        QueueList<Character> charQueueList2M = new QueueList<>();
        for (int i = longitud-1; i > mitad; i--) {
            charQueueList2M.enqueue(cadena.charAt(i));
        }
        // Comparar los caracteres de la segunda mitad con la cola desencolada
       while ( ! (charQueueList1M.isEmpty()&&charQueueList2M.isEmpty() ) ){
            if (charQueueList1M.dequeue() != charQueueList2M.dequeue()) {
                return false;
            }
        }

        // Si la cola está vacía al final, la cadena es un palíndromo
        return charQueueList1M.isEmpty()&&charQueueList2M.isEmpty();
    }

    public String getCadena() {
        return cadena;
    }

    public String getOriginal() {
        return original;
    }
}
