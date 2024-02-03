import tests.*;
import utils.abiertos.PuntoFijo;

import java.io.FileNotFoundException;
import java.util.Scanner;

public class Main {
    static Scanner sc=new Scanner(System.in);
    public static void main(String[] args) throws FileNotFoundException {
        System.out.println("Main class");
/*

        System.out.println("Bisection Test.");
        testBiseccion testBiseccion=new testBiseccion();
        testBiseccion.ejercicio1();

        System.out.println("Regula Falsi Test.");
        testRegulaFalsi testRegulaFalsi=new testRegulaFalsi();
        testRegulaFalsi.ejercicio1();

        System.out.println("Punto Fijo Test.");
        testPuntoFijo testPuntoFijo =new testPuntoFijo();
        testPuntoFijo.ejercicio1();

        System.out.println("Newton Rapson Test.");
        testNewtonRapson testNewtonRapson =new testNewtonRapson();
        testNewtonRapson.ejercicio1();

        System.out.println("Secante Test.");
        testSecante testSecante =new testSecante();
        testSecante.ejercicio1();
        System.out.println("Eliminacion Gaussiana Test");
        testeEliGauss testeEliGauss=new testeEliGauss("problema4_EGJ");
        System.out.println("Jacobi Test");
        testJacobi testJacobiGauss=new testJacobi("problema2_EGJ");

        System.out.println("Gauss-Seidel Test");
        testGaussSeidel testGaussSeidel=new testGaussSeidel("problema2_EGJ");
/*/
        System.out.println("Interpolaicon de Lagrange test");
        testInterpolacionLagrange testInterpolacionLagrange=new testInterpolacionLagrange("problemaAgos_IL",-3);
/*
        System.out.println("Regresion Polinial test");
        testRegresionPolinomial testRegresionPolinomial=new testRegresionPolinomial("problemaAgos_IL");
*/
        System.out.println("Interpolaicon Polinomial test");
        testInterpolacionPolinial testInterpolacionPolinial=new testInterpolacionPolinial("problemaAgos_IL");
//*/

    }
}