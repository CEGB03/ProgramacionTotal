package pruebas;
import utils.PalindromoEma;

import java.util.Random;

public class PalindromoTestEma<AnyType> {
    private static Integer[] arrayI;
    private static String[] arrayC;
    private static int arraySize;
    public void testPalindromoInteger() {
        arraySize=5;
        arrayI=new Integer[arraySize];
        CargaArrayEnteros();
        PalindromoEma<Integer> PalindromoEma = new PalindromoEma<Integer>(arrayI);
        /*
        try {
            stack.push(20);
            stack.push(15);
            stack.push(10);
            stack.push(100);

            System.out.println(stack.pop());
            System.out.println(stack.pop());
            System.out.println(stack.pop());
            System.out.println(stack.pop());
            System.out.println(stack.pop());
            System.out.println(stack.pop());

        } catch (Exception e) {
            System.err.println(e.getMessage());
        }*/
    }

    public void testPalindromoString() {

        /*
        arraySize=5;
        arrayC=new String[arraySize];
        CargaArrayChar();
        */
        PalindromoEma<String> palindromoEmaString = new PalindromoEma<String>("neuquen");
        /*
        try {
            stackString.push("Hola");
            stackString.push("Mundo");
            stackString.push("!!!");

            System.out.println(stackString.pop());
            System.out.println(stackString.pop());
            System.out.println(stackString.pop());
        } catch (Exception e) {
            // TO DO: handle exception
        }*/
    }

    public static void CargaArrayEnteros() {
        Random random = new Random();
        for (int i = 0; i <arraySize; i++) {
            arrayI[i] = random.nextInt(1000); // Genera un número aleatorio entre 0 (inclusive) y 1000 (exclusive)
        }
    }
    public static void CargaArrayChar() {
        Random random = new Random();
        for (int i = 0; i < arraySize; i++)
            arrayC[i] = String.valueOf((char) (random.nextInt(26) + 65)); // Genera un número aleatorio entre 0 (inclusive) y 1000 (exclusive)
    }
}
