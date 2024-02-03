import java.util.Random;

public class Clase7_Tema1 {
    public static void main(String[] args) {
        int [] arreglo_de_enteros = new int[5];
        Random random=new Random(9);
        arreglo_de_enteros[0]=1;
        arreglo_de_enteros[1]=2;
        arreglo_de_enteros[2]=3;
        arreglo_de_enteros[3]=4;
        arreglo_de_enteros[4]=5;

        for (int ii = 0; ii < 5; ii++)
            System.out.println("arreglo_de_enteros "+ii+" = " + arreglo_de_enteros[ii]);
        //      Posicion de memoria del Arreglo
        System.out.println("arreglo_de_enteros = " + arreglo_de_enteros);

        //  Para saber el tam de un arreglo:
        System.out.println("Largo de arreglo_de_enteros = " + arreglo_de_enteros.length);
        for (int ii = 0; ii < arreglo_de_enteros.length; ii++)
            System.out.println("arreglo_de_enteros "+ii+" = " + arreglo_de_enteros[ii]);
        //      Forma de imprimir con for, pero sin acceso a los indices (forinch)
        for (var numero:arreglo_de_enteros)
            System.out.println("numero = " + numero);


        System.exit(0);
    }
}
