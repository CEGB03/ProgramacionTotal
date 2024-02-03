import utils.CargaImpresionArray;

import java.util.Scanner;
public class Ejecicio3 {
    /**
     * Implementar que reciba la longitud de array y retorne un array cargado de números
     * aleatorios.
     */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println ("Ingrese un numero entero positivo para que sea el numero de elementos del arreglo que se cargara aleatoriamente: ");
        int arraySize=Integer.parseInt(sc.nextLine());
        CargaImpresionArray cargaImpresionArray=new CargaImpresionArray(arraySize);
        int []array=cargaImpresionArray.getArray();
        for (int elemento :
                array) {
            System.out.print(elemento+" ");
        }
    }
}
