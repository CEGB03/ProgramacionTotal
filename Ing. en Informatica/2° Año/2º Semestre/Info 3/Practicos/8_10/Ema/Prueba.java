import java.util.Scanner;
class Prueba{
    public static void main(String[] args) {
        Float x,y, resultado;
        Scanner sc= new Scanner(System.in);
        System.out.println("Ingrese un primer numero.\n");
        x=sc.nextFloat();
        System.out.println("Ingrese un segundo numero.\n");
        y=sc.nextFloat();
        Calculadora cal=new Calculadora(x,y);
        cal.ElegirOperacion();
        resultado=cal.EjecutarOperacion();
    }
}
