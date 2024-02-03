package utils;

public class ExpresionesMatemáticas {
    private static String cadena;
    public ExpresionesMatemáticas(String string){
        this.cadena=string;
    }
    public boolean esEquilibrada() throws Exception {
        // Eliminar espacios en blanco y convertir a minúsculas
        cadena = cadena.replaceAll("\\s", "").toLowerCase();
        // Crear una pila para almacenar la primera mitad de los caracteres
        Stack<String> pila = new Stack<String>(getCadena().length());
        for (int i = 0; i < getCadena().length(); i++) {
            pila.push(String.valueOf(cadena.charAt(i)));
        }
        char parentesisA=40;
        char parentesisC=41;
        int contA = 0;
        int contC=0;
        for (int i = 0; i < getCadena().length(); i++) {
            //char caracter = cadena.charAt(i);
            if (!pila.isEmpty() && pila.pop().contains(String.valueOf(parentesisA)) ) {
                contA++;
            }
            if (!pila.isEmpty() && pila.pop().contains(String.valueOf(parentesisC)) ) {
                contC++;
            }
        }
        if (contA==contC)
            return true;
        else
            return false;
    }

    public static String getCadena() {
        return cadena;
    }
}
