import java.util.Scanner;

public class Clase9_Tema7 {
    public static void main(String[] args) {
        System.out.print("Ingrese un numero: ");
        var num= new Scanner(System.in).nextInt();
        var numAbs=Math.abs(num);
        System.out.println("El valor Abs de " + num+ " es: "+numAbs);
        System.exit(0);
    }
}
