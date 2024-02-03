import java.util.Scanner;

public class Clase8_Tema2 {
    public static void Saludar(String mensaje) {
        System.out.println("El mensaje cargado fue: "+ mensaje);
    }
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        String mensaje;
        System.out.println("Ingrese un mensaje...");
        mensaje=sc.nextLine();
        Saludar(mensaje);
    }
}
