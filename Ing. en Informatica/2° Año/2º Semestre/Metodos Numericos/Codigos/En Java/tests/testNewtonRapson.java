package tests;

import utils.abiertos.NewtonRapson;

public class testNewtonRapson {

    private double x0=0;
    private double tolerancia=0;
    public void ejercicioN(int x0, double tol){
        this.x0=x0;
        this.tolerancia=tol;
        NewtonRapson newtonRapson =new NewtonRapson(this.x0,this.tolerancia);
        newtonRapson.calcularRaiz();
    }
    public void ejercicio1(){
        System.out.println("Ejercicio 1");
        this.x0=1;
        this.tolerancia=1e-11;
        NewtonRapson newtonRapson =new NewtonRapson(this.x0,this.tolerancia);
        newtonRapson.calcularRaiz();
        System.out.println();
    }
    public double getX0() {return x0;}
    public double getTolerancia() {return tolerancia;}
}
