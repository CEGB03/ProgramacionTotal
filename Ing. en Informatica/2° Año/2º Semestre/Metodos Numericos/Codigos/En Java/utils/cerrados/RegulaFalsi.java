package utils.cerrados;
import java.util.Scanner;
import java.text.DecimalFormat;


public class RegulaFalsi {
    private double a=0;
    private double b=0;
    private double cn=0;
    private double cv=0;
    private double error=0;
    private double tolerancia=0;
    private int cont=0;
    private Scanner sc=new Scanner(System.in);
    public RegulaFalsi(double a, double b, double tol) {
        this.a=a;
        this.b=b;
        this.tolerancia=tol;
    }
    public void calcularRaiz(){
        if(fun(a)*fun(b)>0){
            System.out.printf("No cumple condicion para operar.\n"+fun(a)*fun(b)+"<0");
            System.exit(30);
        }
        cont=0;
        cv=a;
        do
        {
            cn=( ((a*fun(b)-b*fun(a)))/((fun(b)-fun(a))) );
            if(fun(a)*fun(cn)>0)
                a=cn;
            else if(fun(a)*fun(cn)<0)
                b=cn;
            else {
                System.out.println("la raiz es \"c\".");
                break;
            }
            error=Math.abs(cn-cv);
            cv=cn;
            cont++;
            //System.out.println("itersacion="+cont);
        } while (error>tolerancia);
        DecimalFormat df = new DecimalFormat("0.0000000000"); // Define el formato con 10 decimales
        String formattedError = df.format(getError());// Calcular la cantidad de decimales según la tolerancia
        System.out.println("a="+getA() + ", c=" +getCn() + ", b=" + getB() + ", error=" + formattedError + ", tolerancia=" + getTolerancia() + "\nLa cantidad de Iteraciones fueron: "+getCont());
        System.out.println("\n"+getCn()+ "+-" + formattedError);
    }
    double fun(double d){//n se define primero la funcion y luego se puede ejecutar el programa.
        //return log(d) + exp( sin( d ) ) - d ;//Modelo para probar los metodos
        //return -2. + 7. * d - 5. * Math.pow(d, 2) + 6. * Math.pow(d, 3);//Guia 1 - Ejercicio 1
        return Math.pow(d, 10) - 1;//Guia 1 - Ejercicio 2
        //return 9.81*d/14 * (1-Math.exp(-14/d * 7)) -35; //Guia 1 - Ejercicio 3
    }
    public void setA(double a) {this.a = a;}
    public void setB(double b) {this.b = b;}

    public double getCn() {return cn;}

    public double getA() {return a;}

    public int getCont() {return cont;}

    public double getB() {return b;}

    public double getError() {return error;}

    public double getTolerancia() {return tolerancia;}


}
/*


 */
