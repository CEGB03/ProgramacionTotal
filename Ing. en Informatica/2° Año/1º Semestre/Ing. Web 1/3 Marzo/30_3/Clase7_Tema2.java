import java.util.Scanner;
import java.util.Arrays;

public class Clase7_Tema2 {
    public static void main(String[] args) {
        var consol=new Scanner(System.in);
        System.out.print("Ingrese el largo del arreglo: ");
        var largoArreglo =consol.nextInt();
        // Crear Arreglo
        int [] arregloEnteros=new int[largoArreglo];
        //  Definir Elementos
        for (int ii = 0; ii < largoArreglo; ii++) {
            System.out.print("Ingresar entero ["+ii+"] = ");
            arregloEnteros[ii]=consol.nextInt();
        }
        Arrays.sort(arregloEnteros); // de menor a mayor
        int ii=1;
        for (var imprimir : arregloEnteros) {
            System.out.println("arregloEnteros "+ii+" = " + + imprimir);
            ii++;
        }
    }
}
