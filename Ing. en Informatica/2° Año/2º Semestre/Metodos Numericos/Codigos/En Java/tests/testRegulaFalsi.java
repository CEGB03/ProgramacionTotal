package tests;
import utils.cerrados.RegulaFalsi;

public class testRegulaFalsi {
    private int a;
    private int b;
    private double tolerancia;
    public void ejercicioN(int a, int b, double tol){
        this.a=a;
        this.b=b;
        this.tolerancia=tol;
        RegulaFalsi regulaFalsi =new RegulaFalsi(a,b,tolerancia);
        regulaFalsi.calcularRaiz();
    }
    public void ejercicio1(){
        System.out.println("Ejercicio 1");
        this.a=0;
        this.b=1;
        this.tolerancia=1e-4;
        RegulaFalsi regulaFalsi=new RegulaFalsi(a,b,tolerancia);
        regulaFalsi.calcularRaiz();
        System.out.println();
    }
}