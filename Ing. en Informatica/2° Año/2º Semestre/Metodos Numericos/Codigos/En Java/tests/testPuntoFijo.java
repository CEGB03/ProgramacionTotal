package tests;
import utils.abiertos.PuntoFijo;

public class testPuntoFijo{
        private double x0=0;
        private double tolerancia=0;
    public void ejercicioN(int x0, double tol){
        this.x0=x0;
        this.tolerancia=tol;
        PuntoFijo puntoFijo =new PuntoFijo(this.x0,this.tolerancia);
        puntoFijo.calcularRaiz();
        System.out.println();
    }
    public void ejercicio2a(){
        System.out.println("Ejercicio 1");
        this.x0=1;
        this.tolerancia=1e-11;
        PuntoFijo puntoFijo =new PuntoFijo(x0,tolerancia);
        puntoFijo.calcularRaiz();
        System.out.println();
    }
    public double getX0() {return x0;}
    public double getTolerancia() {return tolerancia;}
}
