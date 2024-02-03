import java.util.Scanner;

public class Clase6_Tema2 {
    public static void main(String[] args) {
        //el swich se piede poner asi:
        // case 1,2,3 --> (porcion especial);
        char anio=241;
        int mes=0;
        Scanner sc=new Scanner(System.in);
        String estacion[]={"Verano","Otonio","Invierno","Primavera"};
        System.out.println("Ingrese un mes del a"+anio+"o saber que estacion es:");
        mes=sc.nextInt();
        switch (mes) {
            case 1, 2, 12 -> System.out.println("en el mes "+mes+" es la estacion " + estacion[0]);
            case 3, 4, 5 -> System.out.println("en el mes "+mes+" es la estacion " + estacion[1]);
            case 6, 7, 8 -> System.out.println("en el mes "+mes+" es la estacion " + estacion[2]);
            case 9, 10, 11 -> System.out.println("en el mes "+mes+" es la estacion " + estacion[3]);
            default -> System.out.println("Vuelva a intentar e ingrear un mes del 1 al 12");
        }
        System.exit(0);
    }
}
