package tests;
import utils.cerrados.Biseccion;

public class testBiseccion {
    private int a;
    private int b;
    private double tolerancia;
    public void ejercicioN(int a, int b, double tol){
        this.a=a;
        this.b=b;
        this.tolerancia=tol;
        Biseccion biseccion=new Biseccion(a,b,tolerancia);
        biseccion.calcularRaiz();
    }
    public void ejercicio1(){
        System.out.println("Ejercicio 1");
        this.a=0;
        this.b=1;
        this.tolerancia=1e-4;
        Biseccion biseccion=new Biseccion(a,b,tolerancia);
        biseccion.calcularRaiz();
    }
}