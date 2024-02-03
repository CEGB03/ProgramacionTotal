public class Clase9_Tema2 {
    public static void main(String[] args) {
        var cadena="Hola Mundo";
        System.out.println("cadena = " + cadena);
        //      SubCadena
        // substring(inicio, fin-1)
        var subCadena1=cadena.substring(0,4);
        System.out.println("subCadena1 = " + subCadena1);
        var subCadena2=cadena.substring(5,10);
        System.out.println("subCadena2 = " + subCadena2);
        var subCadena3=cadena.substring(0);
        System.out.println("subCadena3 = " + subCadena3);


    }
}
