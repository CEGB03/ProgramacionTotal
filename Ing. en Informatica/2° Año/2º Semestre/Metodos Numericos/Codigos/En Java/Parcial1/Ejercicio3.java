package Parcial1;

import utils.iterativos.GaussSeidel;
import utils.iterativos.Jacobi;

import java.io.FileNotFoundException;

public class Ejercicio3 {
    public Ejercicio3() throws FileNotFoundException {
        String archivo="Parcial1_Eje3_J-GS";
        System.out.println("Jacobi:");
        Jacobi jacobi=new Jacobi(archivo);
        System.out.println();
       System.out.println("Gauss-Seidel:");
        GaussSeidel gaussSeidel =new GaussSeidel(archivo);
        System.out.println();
    }
}
