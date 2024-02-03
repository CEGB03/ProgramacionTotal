package utils.abiertos;

import java.text.DecimalFormat;
import java.util.Scanner;

public class Secante {

    private double x0=0;
    private double xv=0;
    private double xn=0;
    private double error=0;
    private int cont=0;
    private double tolerancia=0;
    private final int MAX_ITER = 1000000;
    public Secante(double x0, double xv, double tol) {
        this.x0=x0;
        this.xv=xv;
        this.tolerancia=tol;
    }
    public void calcularRaiz(){
        cont=0;
        do
        {
            xn = xv - (fun_F(xv) * (xv - x0)) / (fun_F(xv) - fun_F(x0)); // Calcular el siguiente punto
            error = Math.abs(xn - xv); // Calcular el error
            x0 = xv; // Actualizar x0 con xv
            xv = xn; // Actualizar xv con xn
            cont++; // Incrementar el contador de iteraciones
            //System.out.println("itersacion="+cont);
        } while ( (error > tolerancia) && (cont < (MAX_ITER/5)) ) ;

        if(cont==MAX_ITER)
            System.out.println("Hubo una salida por el maximo de salidas establecido.\n");

        DecimalFormat df = new DecimalFormat("0.000000000000000"); // Define el formato con 10 decimales
        String formattedError = df.format(getError());// Calcular la cantidad de decimales según la tolerancia
        System.out.println("El punto fijo mediante Secante Xn="+getXn()+",con un de error="+getError()+"\nLa cantidad de Iteraciones fueron: "+getCont()+".");
        System.out.printf(getXn()+ "+-" + formattedError);

    }
    public double getError() {return error;}
    public int getCont() {return cont;}
    public double getX0() {return x0;}

    public double getXn() {return xn;}

    public double getXv() {return xv;}

    double fun_F(double d){//n se define primero la funcion y luego se puede ejecutar el programa.
        //return Math.log(d) + Math.exp( Math.sin( d ) ) - d ;//Modelo para probar los metodos
        //return 4-Math.pow(d,2) ;//Ejercicio 1 Guia 2
        //return Math.pow (d,5)- 3 * Math.pow(d, 3) - 2 * Math.pow(d, 2) + 2;//Ejercicio 2)a Guia 2
        //  Las 2 siguientes son constante, por eso quedan igual.
        //return Math.cos(Math.sin(d));//Ejercicio 2)b Guia 2
        //return Math.pow(d,d-Math.cos(d));//Ejercicio 2)c Guia 2


        return Math.cos(3+d+4*d);
    }
    double fun_G(double d){//n se define primero la funcion y luego se puede ejecutar el programa.
        //return Math.log(d) + Math.exp( Math.sin( d ) ) ;//Modelo para probar los metodos
        //return (-(Math.sin(d)+1));//Funcion random del Agus.
        //return 4-Math.pow(d,2) ;//Ejercicio 1 Guia 2
        //return Math.pow( (3 * Math.pow(d, 3) + 2 * Math.pow(d, 2) - 2), 1.0/5);//Ejercicio 2)a Guia 2
        //  Las 2 siguientes son constante, por eso quedan igual.
        //return Math.cos(Math.sin(d));//Ejercicio 2)b Guia 2
        //return Math.pow(d,d-Math.cos(d));//Ejercicio 2)c Guia 2


        //PRUEBA:
        double h = 0.000001;
        return ((fun_F(d + h) - fun_F(d)) / h);
    }
}
