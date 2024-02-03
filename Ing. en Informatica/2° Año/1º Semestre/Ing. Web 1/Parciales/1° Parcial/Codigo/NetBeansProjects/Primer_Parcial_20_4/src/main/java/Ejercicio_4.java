/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author emita
 */
import java.util.Random;
public class Ejercicio_4 {
    public static void main(String[] args) {
        Random rand = new Random();
        int numeroRand = rand.nextInt(85-0+1);// ya que para el 0 al 85 es (MAX – MIN + 1)
        System.out.println("Número aleatorio: " + numeroRand);
    }
}
