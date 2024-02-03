package utils.ajusteCurva.regresion;

import utils.Pibot;
import utils.lecturaArchivos.LecturaArchivoTablas;

import java.io.FileNotFoundException;
import java.util.Scanner;

public class regresionPolinomial {
    private int filas=0;
    private int banderas=1;
    private int grado=0;
    private Double A[][];
    private Double b[];
    private Double x[];
    private Double y[];
    private Double xy[];
    private double suma;

    //Resultados:
    double syx;	//desviacion estandar-(error estandar estimado)
    double sr;	//error, residuo - (suma de los cuadrados de los residuos)
    double st;	//error medio- (suma total de los cuadrados)
    double r2;	//coeficiente de determinacion
    double r;	//coeficiente de correlacion
    double ymedia;	//media de y

    Scanner scanner = new Scanner(System.in);

    public regresionPolinomial(String s) {
        try {
            LecturaArchivoTablas lecturaArchivoTablas = new LecturaArchivoTablas(s);
            filas = lecturaArchivoTablas.getFilas();
            this.grado=filas-1; // Define el grado del polinomio
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
    public void hacerRegresion(){
        int n=filas;
        int bandera=1; //bandera para validar los puntos
        if(n < grado+1){
            System.err.println("La regresion no es posible para el polinomio deseado");
            bandera=1;
        }
        while(bandera == 1){
            if( (n < grado+1) ){
                System.err.println("La regresion no es posible para el polinomio deseado");
                bandera = 1;
            }
            else {
                bandera = 0;
                break;
            }
            //Si es lineal ponemos 1 . Si no, ponemos mas.
            System.out.println("Ingrese el grado del polinomio deseado: " );
            grado=scanner.nextInt();
        }
        A=new Double[grado+1][grado+1];
        b=new Double[grado+1];

        for(int i=0 ; i<=grado ; i++){
            for(int j=0 ; j<=grado ; j++){
                suma=0;
                for(int k=0 ; k<n ; k++)
                    suma = suma + Math.pow( x[k] , j+i );
                A[i][j]=suma;
            }
            suma=0;
            for(int k=0; k<n ; k++)
                suma = suma + ( Math.pow( x[k] , i )*y[k] );
            b[i]=suma;
        }
        System.out.println();
        imprimir();
        //Piboteo inicio
        Pibot pibot =new Pibot(A, b,filas);
        A= pibot.getA();
        b= pibot.getB();
        //factor=pibot.getFactor();
        //swap= pibot.getSwap();
        //p= pibot.getP();
        //Piboteo fin
        //imprimo matriz
        System.out.println("\nMatriz Piboteada");
        imprimir();
        //sustitucion regresiva
        suma=0;
        double a[]=new double[grado+1]; //vector de soluciones

        //valor de la ultima variable
        a[grado] = b[grado] / A[grado][grado];

        for (int i=grado-1; i>=0; i--)
        {
            suma = b[i];
            for(int j=i+1; j<=grado; j++)
                suma-=A[i][j]*a[j];
            a[i]=(suma)/A[i][i];
        }
        System.out.println();
        for(int i=0; i<=grado; i++)
            System.out.println("a["+ i + "]= " + a[i]);
        System.out.println();
        //imprimo el polinomio
        System.out.println("POLINOMIO");
        int exponente=0;
        for(int i=0; i<=grado; i++)
        {
            if(exponente==0)
                System.out.print(a[i]);
            else{
                if(a[i]>=0)
                    System.out.print(" + " + a[i] + " " + "X^" + exponente + " ");
                else
                    System.out.print(a[i] + " " + "X^" + exponente + " ");
            }
            exponente++;
        }
        System.out.println();

        //Validaciones!! =)
        syx=0;	//desviacion estandar-(error estandar estimado)
        sr=0;	//error, residuo - (suma de los cuadrados de los residuos)
        st=0;	//error medio- (suma total de los cuadrados)
        r2=0;	//coeficiente de determinacion
        r=0;	//coeficiente de correlacion
        ymedia=0;	//media de y

        //calculo de media de y
        ymedia=0;
        for(int i=0; i<n; i++)
            ymedia = ymedia + y[i];
        ymedia = ymedia / n;

        //calculo del error medio
        st=0;
        for(int i=0; i<n; i++)
            st=st + Math.pow( x[i]-ymedia ,2);

        //calculo del error-residuo
        sr=0;
        for(int i=0; i<n; i++){
            suma=0;
            for(int j=0; j<=grado; j++){
                suma = suma + ( a[j] * Math.pow( x[i] ,j) );
            }
            sr=sr + Math.pow((y[i]-suma),2);
        }

        //calculo del error estandar estimado (desviacion estandar)
        syx = Math.sqrt( sr / ( (double)n-(grado+1) ) );


        //calculo del coeficiente de determinacion
        r2=(st-sr)/st;


        //calculo del coeficiente de correlacion
        r=Math.sqrt(r2);

        //Resultados:
        System.out.println("\nResultados:");
        imprimirResultados();
    }
    public void imprimir(){
        //imprimo matriz
        System.out.println("Matriz de Vandermonde");
        for(int i = 0; i<= grado; i++){
            for(int j = 0; j <= grado; j++)
                System.out.print(A[i][j] + " ");
            System.out.println(" ---> " + b[i] );
        }
    }
    public void imprimirResultados(){
        //Impresion de los resultados!!!
        System.out.println("Error/Residuo (suma de cuadrados de los residuos): " + sr );
        System.out.println("Desviacion estandar (Error estandar estimado): " + syx);
        System.out.println("Error medio (suma total de cuadrados): " + st);
        System.out.println("Coeficiente de determinacion: " + r2);
        System.out.println("Coeficiente de correlacion: " + r);
    }
}