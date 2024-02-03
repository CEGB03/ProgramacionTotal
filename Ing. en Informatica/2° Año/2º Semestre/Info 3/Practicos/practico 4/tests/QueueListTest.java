package tests;

import utils.QueueList;

import java.util.EmptyStackException;

public class QueueListTest {

  public void testQueueInteger() {
    QueueList<Integer> queueInteger = new QueueList<>();

    try {
      System.out.println("Momento push");
      queueInteger.enqueue(20);
      System.out.println("Top es: "+queueInteger.front());
      queueInteger.enqueue(15);
      System.out.println("Top es: "+queueInteger.front());
      queueInteger.enqueue(10);
      System.out.println("Top es: "+queueInteger.front());
      queueInteger.enqueue(100);
      System.out.println("Frente="+queueInteger.front());

      System.out.println("Momento pop");
      System.out.println("Eliminado="+queueInteger.dequeue());
      System.out.println("Frente="+queueInteger.front());
      System.out.println("Eliminado="+queueInteger.dequeue());
      System.out.println("Frente="+queueInteger.front());
      System.out.println("Eliminado="+queueInteger.dequeue());
      System.out.println("Frente="+queueInteger.front());
      System.out.println("Eliminado="+queueInteger.dequeue());
      System.out.println("Frente="+queueInteger.front());
      System.out.println("Eliminado="+queueInteger.dequeue());
      System.out.println("Eliminado="+queueInteger.dequeue());

    } catch (Exception e) {
      System.err.println(e.getMessage());
    }
  }

  public void testQueueString() {
    QueueList<String> queueString = new QueueList<String>();

    try {
      queueString.enqueue("Hola");
      queueString.enqueue("Mundo");
      queueString.enqueue("!!!");

      System.out.println(queueString.dequeue());
      System.out.println(queueString.dequeue());
      System.out.println(queueString.dequeue());
    } catch (EmptyStackException e) {
      // Manejar la excepción de pila vacía
      System.err.println("La pila está vacía. No se puede realizar una operación pop.");
    } catch (Exception e) {
      // Manejar cualquier otra excepción que pueda ocurrir
      System.err.println("Se produjo un error inesperado: " + e.getMessage());
    }
  }

}
