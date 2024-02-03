/*
    Explique brevemente que es una Matriz  en Java. Haga un ejemplo en código fuente Java donde genere una Matriz de 2
    filas por 3 columnas de valores enteros, los valores de la matriz  los defina usando la sintaxis simplificada y
    luego imprima todos los valores de la Matriz iterando la misma es decir  usando sentencias for.
*/


import java.util.Random;
public class Ejercicio_4_Ema {
    public static void main(String[] args) {
        Random rand = new Random();
        int numeroRand = rand.nextInt(85-0+1);// ya que para el 0 al 85 es (MAX – MIN + 1)
        System.out.println("Número aleatorio: " + numeroRand);
    }
}
