/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author emita
 *//*
    Explique brevemente que es una Matriz  en Java. Haga un ejemplo en código fuente Java donde genere una Matriz de 2
    filas por 3 columnas de valores enteros, los valores de la matriz  los defina usando la sintaxis simplificada y
    luego imprima todos los valores de la Matriz iterando la misma es decir  usando sentencias for.
*/
import java.util.Scanner;
public class Ejercicio_3 {
    final static int COLUMNAS=3;
    final static int FILAS=2;
    public static void main(String[] args) {
        int arreglo[][] = new int[FILAS][COLUMNAS];
        int ii, jj;
        Scanner sc = new Scanner(System.in);
        System.out.println("A continuación se pasará a solicitar los valores para el arreglo (ingresara 6 valores)");
        for ( ii= 0; ii < FILAS; ii++) {
            for ( jj = 0; jj < COLUMNAS; jj++) {
                System.out.print("ingrese el valor para la posición (" + ii + ", " + jj + ") del arreglo: ");
                arreglo[ii][jj] = Integer.parseInt(sc.nextLine());
            }
        }
        System.out.println("A continuación se pasará a mostrar los valores ingresados con for anidado...");
        for ( ii = 0; ii < arreglo.length; ii++) {//      Imprime según número de filas
            for ( jj = 0; jj < arreglo[ii].length; jj++) {//      Imprime según número de columnas
                System.out.print("matriz["+ii+"]["+jj+"] = " + arreglo[ii][jj]+"\t");
            }
            System.out.println("\n");
        }
    }
}
