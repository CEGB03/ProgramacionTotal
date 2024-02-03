import java.util.Scanner;

public class Clase_4__Tema4 {
    public static void main(String[] args) {
        var edad = Integer.parseInt("20");
        System.out.println("edad = " + edad);
        var valorPi= Double.parseDouble("3.1415");
        System.out.println("valorPi = " + valorPi);
        var consola = new Scanner(System.in);
        //System.out.println("Ingrese una edad: ");
        //edad = Integer.parseInt(consola.nextLine());//      Integer.parseInt==convierte de string a int
        //System.out.println("edad consola = " + edad);

        var edadTexto = String.valueOf(10);
        System.out.println("edadTexto = " + edadTexto);

        var caracter="hola".charAt(1);
        System.out.println("caracter = " + caracter);

        System.out.println("Ingrese un caracter: ");
        caracter=consola.nextLine().charAt(0);
        System.out.println("caracter = " + caracter);
    }
}
