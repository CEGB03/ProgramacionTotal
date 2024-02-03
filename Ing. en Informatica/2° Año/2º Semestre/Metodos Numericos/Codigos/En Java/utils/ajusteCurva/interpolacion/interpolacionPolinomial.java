package utils.ajusteCurva.interpolacion;

import utils.Pibot;
import utils.lecturaArchivos.LecturaArchivoTablas;

import java.io.FileNotFoundException;

public class interpolacionPolinomial {
    private int n;
    private Double[] x;
    private Double[] y;

    public interpolacionPolinomial(String s) throws FileNotFoundException {
        try {
            LecturaArchivoTablas lecturaArchivoTablas = new LecturaArchivoTablas(s);
            n = lecturaArchivoTablas.getFilas(); // Cantidad de puntos de datos
            x = lecturaArchivoTablas.getX().clone();
            y = lecturaArchivoTablas.getY().clone();

            // Calcula los coeficientes del polinomio interpolante
            double[] coeficientes = calcularCoeficientes();

            // Imprime el polinomio interpolante
            imprimirPolinomio(coeficientes);

        } catch (FileNotFoundException e) {
            System.err.println("Error: Archivo no encontrado.");
            e.printStackTrace();
        }
    }

    private double[] calcularCoeficientes() {
        double[] coeficientes = new double[n];

        for (int i = 0; i < n; i++) {
            coeficientes[i] = y[i];
        }

        for (int j = 1; j < n; j++) {
            for (int i = n - 1; i >= j; i--) {
                coeficientes[i] = (coeficientes[i] - coeficientes[i - 1]) / (x[i] - x[i - j]);
            }
        }

        return coeficientes;
    }

    private void imprimirPolinomio(double[] coeficientes) {
        System.out.print("Polinomio interpolante: ");
        for (int i = 0; i < n; i++) {
            System.out.print(coeficientes[i]);
            if (i > 0) {
                System.out.print("x");
                for (int j = 0; j < i; j++) {
                    System.out.print("(x - " + x[j] + ")");
                }
                System.out.print(" ");
            }
            if (i < n - 1) {
                System.out.print("+ ");
            }
        }
        System.out.println();

        System.out.print("Polinomio con notación de exponentes: ");
        for (int i = 0; i < n; i++) {
            System.out.print(coeficientes[i]);
            if (i > 0) {
                System.out.print("x^" + i);
            }
            if (i < n - 1) {
                System.out.print(" + ");
            }
        }
        System.out.println();
    }
    public void evaluarX(int valorX){

        Double A[][] = new Double[n][n];
        Double b[] = new Double[n];
        for(int i=0;i<=n-1;i++) //Guardo la matriz 'virtualmente'
        {
            //A[i][0] = 1.;
            for(int j=0;j<=n-1;j++)
            {
                A[i][j] = Math.pow(x[i],j);
            }
            b[i] = y[i];
        }

        Pibot pibot=new Pibot(A,b,n);
        pibot.pibotear();
        A= pibot.getA().clone();
        b= pibot.getB().clone();

        //sustitucion regresiva
        Double suma= (double) 0;
        Double a[]=new Double[n]; //vector de soluciones
        a[n-1] = b[n-1] / A[n-1][n-1];

        for (int i=n-2; i>=0; i--)
        {
            suma = b[i];
            for(int j=i+1; j<=n-1; j++)
            {
                suma+= A[i][j]*a[j];
            }
            a[i]=(suma)/A[i][i];
        }


        double prod=0;
        suma= 0.;
        for(int i=0;i<n;i++)
        {
            prod=1.;
            for (int j=0; j<n; j++)
                if(i!=j)
                    prod *= (valorX-x[j])/ (x[i]-x[j]);
            suma +=y[i]*prod;
        }

        System.out.println("El resultado es : " + suma);
    }

}

