package tests;

import utils.abiertos.Secante;

public class testSecante {

    private double x0=0;
    private double xv=0;
    private double tolerancia=0;
    public void ejercicioN(double x0, double xv, double tol){
        this.x0=x0;
        this.xv=xv;
        this.tolerancia=tol;
        Secante secante =new Secante(this.x0, this.xv ,this.tolerancia);
        secante.calcularRaiz();
    }
    public void ejercicio1(){
        System.out.println("Ejercicio 1");
        this.x0=0;
        this.xv=1;
        this.tolerancia=1e-12;
        Secante secante =new Secante(this.x0, this.xv ,this.tolerancia);
        secante.calcularRaiz();
        System.out.println();
    }
    public double getX0() {return x0;}
    public double getTolerancia() {return tolerancia;}
}
