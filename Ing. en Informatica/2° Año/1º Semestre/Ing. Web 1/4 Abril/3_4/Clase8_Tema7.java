import java.util.Scanner;

public class Clase8_Tema7 {
    static void funRecur(int num){
        //  Base
        if (num == 1 ) {
            System.out.println(num);
        }
        else {
            //  Recursiva
            funRecur(num-1);
            System.out.println(num);
        }
    }

    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.print("Ingrese un numero para imprimir hasta llegar al mismo: ");
        int num= sc.nextInt();
        funRecur(num);
    }
}
