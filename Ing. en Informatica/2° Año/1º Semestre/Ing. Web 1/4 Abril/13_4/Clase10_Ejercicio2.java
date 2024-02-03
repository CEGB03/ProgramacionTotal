import java.util.Scanner;

public class Clase10_Ejercicio2 {
    public static void main(String[] args) {
        String nombre, tipo;
        int numero;
        //Scanner sc=new Scanner(System.in);
        Cuenta cuentaCredito=new Cuenta();
        Cuenta cuentaDebito=new Cuenta();
        cuentaCredito.nombre="Pedro Sanchez";
        //cuentaCredito.saldo=1500;
        //cuentaCredito.numero=244513;
        cuentaCredito.setSaldo(1500);
        cuentaCredito.setNumero(244513);
        cuentaCredito.tipo="Credito";
        cuentaDebito.nombre="Pablo Garcia";
        //cuentaDebito.saldo=7800;
        //cuentaDebito.numero=273516;
        cuentaDebito.setSaldo(7800);
        cuentaDebito.setNumero(273516);
        cuentaDebito.tipo="Debito";
        System.out.println("Cuenta de Credito:");
        cuentaCredito.imprimir();
        System.out.println("Cuenta de Debito:");
        cuentaDebito.imprimir();
    }
}
