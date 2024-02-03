package Parcial1;

import utils.abiertos.PuntoFijo;

public class Ejercicio2 {
    public Ejercicio2(){
        System.out.println("Punto Fijo:");
        PuntoFijo puntoFijo=new PuntoFijo(0, 1e-5);
        puntoFijo.calcularRaiz();
        System.out.println();
    }
}
