import java.util.Scanner;

public class Clase10_Ejemplo1 {
    public static void main(String[] args) {
        Ejemplo e,f;
        e=new Ejemplo();
        f=new Ejemplo();
        e.a=7;
        e.hacerAlgo();
        f.x=e.suma();
        f.a=f.x+e.a;
        e.a=f.suma();
        e.imprimir();
        f.imprimir();
    }
    public static void Ema() {
        Ejemplo ej= new Ejemplo();
        Scanner sc= new Scanner(System.in);
        System.out.print("Ingrese un numero para a: ");
        ej.a= sc.nextInt();
        System.out.print("Ingrese un numero para x: ");
        ej.x=sc.nextInt();
        ej.hacerAlgo();
        System.out.println(ej.suma());
        ej.imprimir();
    }
}

