/*
    Explique brevemente que es una Matriz  en Java. Haga un ejemplo en código fuente Java donde genere una Matriz de 2
    filas por 3 columnas de valores enteros, los valores de la matriz  los defina usando la sintaxis simplificada y
    luego imprima todos los valores de la Matriz iterando la misma es decir  usando sentencias for.
*/


import java.util.Scanner;
public class Ejercicio_3_Ema {
    final static int COLUMNAS=3;
    final static int FILAS=2;
    public static void main(String[] args) {
        int arrglo[][] = new int[FILAS][COLUMNAS];
        int ii, jj;
        Scanner sc = new Scanner(System.in);
        System.out.println("A continuacion se pasara a solicitar los valores para el arreglo (ingresara 6 valores)");
        for ( ii= 0; ii < FILAS; ii++) {
            for ( jj = 0; jj < COLUMNAS; jj++) {
                System.out.print("ingrese el valor para la posicion (" + ii + ", " + jj + ") del arreglo: ");
                arrglo[ii][jj] = Integer.parseInt(sc.nextLine());
            }
        }
        System.out.println("A continuacion se pasara a mostar los valores ingresados con for anidado...");
        for ( ii = 0; ii < arrglo.length; ii++) {//      Imprime segun numero de finlas
            for ( jj = 0; jj < arrglo[ii].length; jj++) {//      Imprime segun numero de columnas
                System.out.print("matriz["+ii+"]["+jj+"] = " + arrglo[ii][jj]+"\t");
            }
            System.out.println("\n");
        }
    }
}
