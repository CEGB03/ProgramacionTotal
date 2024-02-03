package tests;

import utils.StackList;

import java.util.EmptyStackException;

public class StackListTest {

  public void testStackListInteger() {
    StackList<Integer> stack = new StackList<Integer>();

    try {
      stack.push(20);
      stack.push(15);
      stack.push(10);
      stack.push(100);

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

  public void testStackString() {
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
