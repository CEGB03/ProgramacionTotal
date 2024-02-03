package ModeloParcial_1;

import utils.abiertos.NewtonRapson;

public class Ejercicio2 {
    public Ejercicio2(){
        NewtonRapson newtonRapson = new NewtonRapson(0.5, 1e-6);
        newtonRapson.calcularRaiz();
    }
}
