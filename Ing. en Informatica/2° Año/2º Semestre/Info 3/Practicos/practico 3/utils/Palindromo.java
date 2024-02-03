package utils;

public class Palindromo {
    private static String cadena;
    public Palindromo(String string){
        this.cadena=string;
    }
    public boolean esPalindromo() throws Exception {
        // Eliminar espacios en blanco y convertir a minúsculas
        cadena = cadena.replaceAll("\\s", "").toLowerCase();

        int longitud = cadena.length();

        // Llenar la pila con la primera mitad de los caracteres
        int mitad = longitud / 2;
        // Crear una pila para almacenar la primera mitad de los caracteres
        Stack<String> pila = new Stack<String>(mitad);
        for (int i = 0; i < mitad; i++) {
            pila.push(String.valueOf(cadena.charAt(i)));
        }

        // Comparar los caracteres de la segunda mitad con la pila desapilada
        int inicioSegundaMitad = (longitud % 2 == 0) ? mitad : mitad + 1;
        for (int i = inicioSegundaMitad; i < longitud; i++) {
            char caracter = cadena.charAt(i);
            if (!pila.isEmpty() && !pila.pop().contains(String.valueOf(caracter))) {
                return false;
            }
        }

        // Si la pila está vacía al final, la cadena es un palíndromo
        return pila.isEmpty();
    }

    public static String getCadena() {
        return cadena;
    }
}
