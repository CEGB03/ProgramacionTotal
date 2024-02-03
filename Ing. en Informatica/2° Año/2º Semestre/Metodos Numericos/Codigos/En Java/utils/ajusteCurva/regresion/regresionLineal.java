package utils.ajusteCurva.regresion;

import utils.lecturaArchivos.LecturaArchivoMatrices;
import utils.lecturaArchivos.LecturaArchivoTablas;

import java.io.FileNotFoundException;
import java.util.Scanner;

public class regresionLineal {
    private int filas=0;
    private int columnas=0;
    private Double x[];
    private Double y[];
    private Double xy[];
    private int i;
    private double sumaX;
    private double sumaY;
    private double sumaXX;
    private double sumaXY;
    private double m;
    private double b;

    Scanner scanner = new Scanner(System.in);

    public regresionLineal(String s){
        int grado = 2; // Define el grado del polinomio
        try {
            LecturaArchivoTablas lecturaArchivoTablas = new LecturaArchivoTablas(s);
            filas = lecturaArchivoTablas.getFilas();
            x = new Double[filas];
            y = new Double[filas];
            xy=new Double[filas];
            x = lecturaArchivoTablas.getX().clone();
            y = lecturaArchivoTablas.getY().clone();
        } catch (FileNotFoundException e) {
            System.err.println("Error: Archivo no encontrado.");
            e.printStackTrace();
        }
    }
    public void calcularSumas(){
        sumaX = 0;
        sumaY = 0;
        sumaXX = 0;
        sumaXY = 0;

        for (i = 0; i < filas; i++) {
            sumaX += x[i]; /*Aquí sumamos los elementos de x */
            sumaXX += x[i] * x[i]; /*Aquí sumamos los elementos de x^2 */
        }
        for (i = 0; i < filas; i++) {
            sumaY += y[i];
            /*Aquí sumamos los elementos de y */

            /*Aquí se hace el producto de los
            elementos de "x" y "y", y también declaramos la
            variable XY[20] como arreglo porque vamos a mostrar
            en pantalla los resultados del producto de "x" y "y" */
            xy[i] = x[i] * y[i];
        }
        for (i = 0; i < filas; i++)
            sumaXY += xy[i];
            /*Aquí sumamos el producto de los
            elementos de "x" y "y" */

    }
    public void imprimir(){
        System.out.println(" Valores obtenidos");
        /*Este "for" solo es para dibujar la línea punteada */
        for (int k = 3; k < 42; k++)
        {
            System.out.print("-");
        }
        System.out.println();
        System.out.printf("%3s", "x");
        System.out.printf("%7s", "y");
        System.out.printf("%10s", "x*y");
        System.out.printf("%17s", "x^2");
        System.out.println();
        /*Este "for" solo es para dibujar la línea punteada */
        for (int k = 3; k < 42; k++)
        {
            System.out.print("-");
        }
        /*Hacemos este "for" para mostrar cada elemento guardado en los arreglos */
        for (i = 0; i < filas; i++)
        {
            System.out.println();
            System.out.printf("%3s",x[i]);
            System.out.printf("%7s",y[i]);
            System.out.printf("%10s",xy[i]);
            System.out.printf("%17s",x[i] * x[i]);
            System.out.println();
            /*Este "for" solo es para dibujar la línea punteada */
            for (int k = 3; k < 42; k++)
                System.out.print("-");
        }
        System.out.println("\n\n\n");
        System.out.println("---------------");
        System.out.println("Suma de x:" + sumaX);
        System.out.println("---------------");
        System.out.println("Suma de y:" + sumaY );
        System.out.println("---------------");
        System.out.println("Suma de x*y:" + sumaXY );
        System.out.println("---------------");
        System.out.println("Suma de x^2:" + sumaXX );
        System.out.println("---------------");
    }
    /*En esta función hacemos los cálculos para obtener los valores de la ecuación de la recta
     */
    public void calcularM_B()
    {
        m = ((filas * sumaXY) - (sumaX * sumaY)) / ((filas * sumaXX) - Math.pow (sumaX, 2));
        b =
                ((sumaY * sumaXX) - (sumaX * sumaXY)) / ((filas * sumaXX) - Math.pow (sumaX, 2));
    }
    //Aquí imprimimos los valores de m y b.
    public void imprimirMB()
    {
        System.out.println( "el valor de m es:" + m);
        System.out.println("----------------------");
        System.out.println("el valor de b es:" + b);
        System.out.println("----------------------\n\n");
    }
    /*Aquí imprimimos la ecuacion de la recta obtenida.*/
    public void recta()
    {
        System.out.println("Ecuacion de la recta.");
        System.out.println( "y=" + m + "x" + "+" + b);
    }
    public void calcularMSE() {
        double sumSquaredError = 0.0;
        for (int i = 0; i < filas; i++) {
            double prediction = m * x[i] + b;
            double error = y[i] - prediction;
            sumSquaredError += error * error;
        }
        double mse = (sumSquaredError); // Calcula la raíz cuadrada del promedio de errores cuadráticos
        System.out.println("Error cuadrático medio (MSE): " +mse);
    }
}
