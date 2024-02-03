import java.util.Scanner;

public class Clase8_Tema3 {
    static int Sumar(int a, int b) {
        //int resultadoSuma=a+b;
        return a+b;//resultadoSuma;
    }
    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        System.out.print("Ingrese el primer numero: ");
        var arguA=Integer.parseInt(sc.nextLine());
        System.out.print("Ingrese el segundo numero: ");
        var arguB=Integer.parseInt(sc.nextLine());
        int result=Sumar(arguA,arguB);
        System.out.println("result = " + result);
        System.out.println("result = " + Sumar(arguA,arguB));
    }
}
