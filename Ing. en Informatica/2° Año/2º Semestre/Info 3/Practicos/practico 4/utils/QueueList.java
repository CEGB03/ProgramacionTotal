package utils;

public class QueueList<AnyType> {

  private Nodo<AnyType> front;
  private Nodo<AnyType> back;

  public QueueList() {
    this.front = null;
    this.back = null;
  }

  public void enqueue(AnyType data) {
    Nodo<AnyType> newNodo = new Nodo<AnyType>(data);
    if (isEmpty()) {
      front = newNodo;
      back = newNodo;
    } else {
      back.next = newNodo;
      back = newNodo;
    }
  }

  public AnyType dequeue() {
    if (isEmpty()) {
      throw new IllegalStateException("La cola está vacía");
    }
    AnyType dato = front.data;
    front = front.next;
    if (front == null) {
      back = null;
    }
    return dato;
  }

  public AnyType front() {
    if (isEmpty()) {
      throw new IllegalStateException("La cola está vacía");
    }
    return front.data;
  }

  public boolean isEmpty() {
    return front == null;
  }
  public int size() {
    int count = 0;
    Nodo<AnyType> actual = front;
    while (actual != null) {
      count++;
      actual = actual.next;
    }
    return count;
  }
  public void imprimir(){
    Nodo<AnyType> temp=null;
      temp= front;
      while(temp!=null){
        System.out.println(temp.data);
        temp=temp.next;
      }
  }
}