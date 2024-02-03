package Parcial1;

import utils.abiertos.NewtonRapson;

public class Ejercicio1 {
    public Ejercicio1() {
        System.out.println("Newton Rapson:");
        NewtonRapson newtonRapson = new NewtonRapson(1, 0.000001);
        newtonRapson.calcularRaiz();
        System.out.println();
    }
}
