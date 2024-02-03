package utils.cerrados;
import java.util.Scanner;
import java.text.DecimalFormat;


public class Biseccion {
    private double a=0;
    private double b=0;
    private double c=0;
    private double error=0;
    private double tolerancia=0;
    private int cont=0;
    public Biseccion(double a, double b, double tol) {
        this.a=a;
        this.b=b;
        this.tolerancia=tol;
    }
    public void calcularRaiz(){
        if(fun(a)*fun(b)>0){
            System.out.println("No cumple condicion para operar.\n"+fun(a)*fun(b)+"<0");
            System.exit(30);
        }
        c=calc_c_B(a,b);
        cont=0;
        do
        {
            if(fun(a)*fun(c)>0)
                a=c;
            else if(fun(a)*fun(c)<0)
                b=c;
            else{
                System.out.printf("la raiz es \"c\".\n");
                break;
            }
            error=(b-a)/2;
            c=calc_c_B(a,b);
            cont++;
            //System.out.println("itersacion="+cont);
        } while (error>tolerancia);
        DecimalFormat df = new DecimalFormat("0.0000000000"); // Define el formato con 10 decimales
        String formattedError = df.format(getError());// Calcular la cantidad de decimales según la tolerancia
        System.out.println("a="+getA() + ", c=" +getC() + ", b=" + getB() + ", error=" + formattedError + ", tolerancia=" + getTolerancia() + "\nLa cantidad de Iteraciones fueron: "+getCont());
        System.out.println("\n"+getC()+ "+-" + formattedError);
    }
    double fun(double d){//n se define primero la funcion y luego se puede ejecutar el programa.
        //return log(d) + exp( sin( d ) ) - d ;//Modelo para probar los metodos
        //return -2 + 7 * d - 5 * Math.pow(d, 2) + 6 * Math.pow(d, 3);//Guia 1 - Ejercicio 1
        return Math.pow(d, 10) - 1;//Guia 1 - Ejercicio 2
        //return 9.81*d/14 * (1-Math.exp(-14/d * 7)) -35; //Guia 1 - Ejercicio 3
    }
    public void setA(double a) {this.a = a;}
    public void setB(double b) {this.b = b;}

    public double getC() {return c;}

    public double getA() {return a;}

    public int getCont() {return cont;}

    public double getB() {return b;}

    public double getError() {return error;}

    public double getTolerancia() {return tolerancia;}


    double calc_c_B(double a, double b){
        return ( (a+b)/2 );
    }
}