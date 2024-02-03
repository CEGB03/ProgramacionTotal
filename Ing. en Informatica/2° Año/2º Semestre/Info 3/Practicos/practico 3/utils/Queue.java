package utils;

public class Queue<AnyType> {

    private Integer front;
    private Integer back;
    private Integer size;
    private AnyType[] array;
    private Integer currentSize;

    public Queue(Integer size) {
        this.size = size;
        this.array = (AnyType[]) new Object[size];
        makeEmpty();
    }

    public int incrementar(int x) {
        if (++x == array.length)
            x = 0;
        return x;
    }

    /**
     * Agrega un valor a la cola.
     */
    public void enqueue(AnyType item) throws Exception {
        if (currentSize == array.length)
            doubleQueue();
        back = incrementar(back);
        array[back] = item;
        currentSize++;
    }

    private void doubleQueue() {
        AnyType[] newArray = null;
        newArray = (AnyType[]) new Object[size * 2];
        for (int ii = 0; ii < currentSize; ii++, front = incrementar(front))
            newArray[ii] = array[front];
        array = newArray;
        front = 0;
        back = currentSize - 1;
    }

    /**
     * Retorna el primer valor ingresado en la cola y lo sacamos de la cola.
     *
     * @return
     */
    public AnyType dequeue() throws Exception {
        if (isEmpty())
            throw new Exception("La cola está vacía");
        currentSize--;
        // Obtenemos el valor del frente y ajustamos el índice frontal.
        AnyType value = array[front];
        front = incrementar(front);
        return value;
    }

    /**
     * Retornamos el primer valor.
     *
     * @return
     */
    public AnyType getFront() throws Exception {
        if (isEmpty()) {
            throw new Exception("La cola está vacía");
        }

        return array[front];
    }

    /**
     * Retornamos el ultimo valor.
     *
     * @return
     */
    public AnyType getBack() throws Exception {
        if (isEmpty()) {
            throw new Exception("La cola está vacía");
        }

        return array[back];
    }

    /**
     * Retornamos un boolean para saber si la cola está vacía o no.
     *
     * @return
     */
    public Boolean isEmpty() {
        return currentSize == 0;
    }

    /**
     * Limpiamos la cola.
     */
    public void makeEmpty() {
        currentSize = 0;
        front = 0;
        back = -1;
    }

    public AnyType[] getArray() {
        return array;
    }
}
