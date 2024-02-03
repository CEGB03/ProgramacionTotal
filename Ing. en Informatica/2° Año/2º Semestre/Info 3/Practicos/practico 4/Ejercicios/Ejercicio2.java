package Ejercicios;

import utils.StackList;

import java.util.EmptyStackException;

public class Ejercicio2 {
    public Ejercicio2(){
        StackList<String> stackString = new StackList<String>();

        try {
            stackString.push("Hola");
            stackString.push("Mundo");
            stackString.push("!!!");

            System.out.println(stackString.pop());
            System.out.println(stackString.pop());
            System.out.println(stackString.pop());
        } catch (EmptyStackException e) {
            // Manejar la excepción de pila vacía
            System.err.println("La pila está vacía. No se puede realizar una operación pop.");
        } catch (Exception e) {
            // Manejar cualquier otra excepción que pueda ocurrir
            System.err.println("Se produjo un error inesperado: " + e.getMessage());
        }
    }
}
