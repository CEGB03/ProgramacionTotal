public class Clase9_Tema1 {
    public static void main(String[] args) {
        var cadena="Hola Mundo";
        System.out.println("largo de la cadena = " + cadena.length());

        //      Recorrer cadena
        for (int ii = 0; ii < cadena.length(); ii++)
            System.out.println(ii+" - \""+cadena.charAt(ii)+"\"");
    }
}
