import java.util.Scanner;

public class Ingreso_String {
    public static void main(String[] args) {
        System.out.println("Ingrese su nombre");
        Scanner consola = new Scanner(System.in);
        var nombre=consola.nextLine();
        System.out.println("nombre = " + nombre);
        var titulo=consola.nextLine();
        System.out.println("Resultado = " + nombre + titulo);
        
    }
}