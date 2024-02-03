package Ejercicios;

import utils.StackList;

public class Ejercicio1 {
    public Ejercicio1(){
        StackList<Integer> stack = new StackList<Integer>();

        try {
            System.out.println("Momento push");
            stack.push(20);
            System.out.println("Top es: "+stack.top());
            stack.push(15);
            System.out.println("Top es: "+stack.top());
            stack.push(10);
            System.out.println("Top es: "+stack.top());
            stack.push(100);
            System.out.println("Top es: "+stack.top());

            System.out.println("Momento pop");
            System.out.println(stack.pop());
            System.out.println(stack.pop());
            System.out.println(stack.pop());
            System.out.println(stack.top());
            System.out.println(stack.pop());
            System.out.println(stack.pop());
            System.out.println(stack.pop());

        } catch (Exception e) {
            System.err.println(e.getMessage());
        }
    }
}
