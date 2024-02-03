package pruebas;

import utils.Queue;

import java.util.EmptyStackException;

public class QueueTest {

  public void testQueueInteger() {
    Queue<Integer> queueInteger = new Queue<>(4);

    try {
      queueInteger.enqueue(20);
      queueInteger.enqueue(15);
      queueInteger.enqueue(10);
      queueInteger.enqueue(100);
      System.out.println("Frente="+queueInteger.getFront());
      System.out.println("Eliminado="+queueInteger.dequeue());
      System.out.println("Frente="+queueInteger.getFront());
      System.out.println("Eliminado="+queueInteger.dequeue());
      System.out.println("Frente="+queueInteger.getFront());
      System.out.println("Eliminado="+queueInteger.dequeue());
      System.out.println("Frente="+queueInteger.getFront());
      System.out.println("Eliminado="+queueInteger.dequeue());
      System.out.println("Frente="+queueInteger.getFront());
      System.out.println("Eliminado="+queueInteger.dequeue());
      System.out.println("Eliminado="+queueInteger.dequeue());

    } catch (Exception e) {
      System.err.println(e.getMessage());
    }
  }

  public void testQueueString() {
    Queue<String> queueString = new Queue<String>(4);

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
