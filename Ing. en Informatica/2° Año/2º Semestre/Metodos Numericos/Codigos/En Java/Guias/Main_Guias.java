package Guias;
import tests.testPuntoFijo;
import utils.abiertos.PuntoFijo;
import utils.abiertos.Secante;
import utils.cerrados.Biseccion;
import utils.cerrados.RegulaFalsi;

public class Main_Guias {
    public static void main(String[] args) {
/*
        System.out.println("Ejercicio 2 - Guia 1");
        System.out.println("Biseccion");
        Biseccion biseccion =new Biseccion( 0.25, 1.5,1e-5 );
        biseccion.calcularRaiz();
        System.out.println("Regula Falsi");
        RegulaFalsi regulaFalsi=new RegulaFalsi(0.1, 1.5, 1e-5);
        regulaFalsi.calcularRaiz();

        System.out.println("Ejercicio 3 - Gui 1");
        System.out.println("Biseccion");
        Biseccion biseccion =new Biseccion( 0.25, 1.5,1e-5 );
        biseccion.calcularRaiz();
        System.out.println("Regula Falsi");
        RegulaFalsi regulaFalsi=new RegulaFalsi(0.3, 1.3, 1e-5);
        regulaFalsi.calcularRaiz();

        System.out.println("Secante:");
        Secante secante=new Secante(0, 1, 0.00001);
        secante.calcularRaiz();

 */
        System.out.println("\nPunto Fijo");
        PuntoFijo puntoFijo=new PuntoFijo(1, 1e-11);
        puntoFijo.calcularRaiz();
    }
}
