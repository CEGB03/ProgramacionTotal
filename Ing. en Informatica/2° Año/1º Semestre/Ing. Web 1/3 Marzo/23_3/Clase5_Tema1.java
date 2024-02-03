public class Clase5_Tema1 {
    public static void main(String[] args) {
        var condicion = true;
        if (condicion) {
            System.out.println("La variable es Verdadera");
        } else {
            System.out.println("La variable es Falsa");
        }
        
        var num = 3;
        var numTexto = "Numero Desconocido";
        if (num == 1) {
            numTexto = "Numero Uno";
        } else if (num == 2) {
            numTexto = "Numero Dos";
        } else if (num == 3) {
            numTexto = "Numero Tres";
        } else {
            numTexto = "Fuera de Rango";
        }
        System.out.println("numTexto = " + numTexto);

    }
}
