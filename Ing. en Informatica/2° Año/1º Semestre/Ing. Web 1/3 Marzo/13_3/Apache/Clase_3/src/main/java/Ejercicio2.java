import java.util.Scanner;
public class Ejercicio2 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String titulo=" ", autor=" ";
        System.out.print("Ingrese el nombre del titulo del libro:");
        titulo= sc.nextLine();
        System.out.print("Ingrese el nombre del autor del libro:");
        autor= sc.nextLine();
        System.out.println("El libro "+titulo+" fue escrito por "+autor+".");
    }
}
