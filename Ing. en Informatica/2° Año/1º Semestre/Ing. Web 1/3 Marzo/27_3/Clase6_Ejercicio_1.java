import java.util.Scanner;

public class Clase6_Ejercicio_1 {
    public static void main(String[] args) {
        char anio=241;
        int mes=0;
        Scanner sc=new Scanner(System.in);
        String estacion[]={"Verano","Otonio","Invierno","Primavera"};
        System.out.println("Ingrese un mes del a"+anio+"o saber que estacion es:");
        mes=sc.nextInt();
        if ((mes>0)&&(mes<13)){
            if ((mes==12) || (mes==1) || (mes==2)){
                System.out.println("en el mes "+mes+" es la estacion " + estacion[0]);
            }
            if ((mes==3) || (mes==4) || (mes==5)){
                System.out.println("en el mes "+mes+" es la estacion " + estacion[1]);
            }
            if ((mes==6) || (mes==7) || (mes==8)){
                System.out.println("en el mes "+mes+" es la estacion " + estacion[2]);
            }
            if ((mes==9) || (mes==10) || (mes==11)){
                System.out.println("en el mes "+mes+" es la estacion " + estacion[3]);
            }
        }
        else{
            System.out.println("Vuelva a intentar e ingrear un mes del 1 al 12");
        }
        System.exit(0);
    }
}
