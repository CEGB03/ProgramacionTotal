package Fechas;

import java.util.Scanner;

public class TestFecha {
    public static void main(String[] args) {
        Scanner console = new Scanner(System.in);
        
        System.out.println("Ingrese fecha (dd/mm/aaaa)");
        String sFecha = console.nextLine();
        Fecha fecha1 = new Fecha(sFecha);
        System.out.println("Fecha Actual:");
        System.out.println(fecha1);
        
        System.out.println("Ingrese cuantos dias quiere sumarle a la fecha actual(puede ser negativo)");
        int dias = Integer.parseInt(console.nextLine());
        fecha1.addDays(dias);
        System.out.println("Fecha sumada:");
        System.out.println(fecha1);
    }
}
