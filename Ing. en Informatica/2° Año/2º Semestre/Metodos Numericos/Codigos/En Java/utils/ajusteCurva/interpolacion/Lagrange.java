package utils.ajusteCurva.interpolacion;

import utils.Pibot;
import utils.lecturaArchivos.LecturaArchivoMatrices;
import utils.lecturaArchivos.LecturaArchivoTablas;

import java.io.FileNotFoundException;
import java.util.Scanner;

public class Lagrange {
    double resultado = 0;
    private Double A[][];
    private Double b[];
    Double[] x;
    Double[] y;
    int filas=0;
    int columnas=0;
    double valorX=0;
    Scanner scanner=new Scanner(System.in);
    //                              puntos hace referencia al x que me piden
    public Lagrange(String s, double puntos) throws FileNotFoundException {
        this.valorX=puntos;
        try {
            LecturaArchivoTablas lecturaArchivoTablas = new LecturaArchivoTablas(s);
            filas = lecturaArchivoTablas.getFilas();
            columnas = lecturaArchivoTablas.getColumnas();
            A = new Double[filas][filas];
            b = new Double[filas];
            x = new Double[filas];
            y = new Double[filas];
            x= lecturaArchivoTablas.getX().clone();
            y= lecturaArchivoTablas.getY().clone();
            /*for (int ii=0; ii<filas; ii++) {
                for (int jj = 0; jj < columnas; jj++)
                    A[ii][jj] = 0.;
                b[ii] = 0.;
            }*/
            for(int i=0;i<=filas-1;i++) //Guardo la matriz 'virtualmente'
            {
                A[i][0] = 1.;
                for(int j=1;j<=filas-1;j++)
                {
                    A[i][j] = Math.pow(x[i],j);
                }
                b[i] = y[i];
            }

            //Piboteo inicio
            Pibot pibot = new Pibot(A, b, filas);
            A = pibot.getA();
            b = pibot.getB();
            pibot.pibotear();
            /*
            factor=pibot.getFactor();
            swap= pibot.getSwap();
            p= pibot.getP();*/
            //Piboteo fin
            //imprime la matriz como quedo!!
            System.out.println("La Matriz triangular superior quedo: ");

            for(int i = 0; i<filas; i++){
                for(int j = 0; j < filas; j++){
                    System.out.print(A[i][j]+ " ");
                }
                System.out.println (" ---> "+b[i] );
            }
            //sustitucion regresiva
            Double suma= (double) 0;
            Double a[]=new Double[filas]; //vector de soluciones

            //valor de la ultima variable
            a[filas-1] = b[filas-1] / A[filas-1][filas-1];
            System.out.println( "----- Soluciones -----");
            System.out.println("a["+ (filas-1) +"]= " + a[filas-1]);

            for (int i=filas-2; i>=0; i--)
            {
                suma = b[i];
                for(int j=i+1; j<=filas-1; j++)
                {
                    suma-= A[i][j]*a[j];
                }
                a[i]=(suma)/A[i][i];
                System.out.println("a["+ i + "]= " + a[i]);
            }
            System.out.println("\n");

            //Imprimo el polinomio final:
            System.out.println("P = " );
            for(int i=0,j=0;i<filas;i++,j++)
            {
                if(j==0)
                    System.out.print( a[i] +" + ");
                else
                    System.out.println(a[i] + " " + "x^" + j + "+");

            }

            System.out.println();
            double prod=0;
            suma= 0.;
            for(int i=0;i<filas;i++)
            {
                prod=1.;
                for (int j=0; j<filas; j++)
                    if(i!=j)
                        prod *= (valorX-x[j])/ (x[i]-x[j]);
                suma +=y[i]*prod;
            }

            System.out.println("El resultado es : " + suma);

        } catch (FileNotFoundException e) {
            // Manejo de la excepción de archivo no encontrado
            System.err.println("Error: Archivo no encontrado.");
            e.printStackTrace(); // Esto imprime información detallada sobre el error
        }
    }
}
