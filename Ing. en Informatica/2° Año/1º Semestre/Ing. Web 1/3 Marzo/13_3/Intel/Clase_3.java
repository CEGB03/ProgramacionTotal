import java.util.Scanner;

public class Clase_3 {
    public static void main(String[] args) {
        System.out.println("Ingrese su nombre");
        Scanner consola = new Scanner(System.in);
        var nombre=consola.nextLine();
        System.out.println("El nombre ingresado es: "+nombre);
        System.out.println("nombre = " + nombre);
    }
}
