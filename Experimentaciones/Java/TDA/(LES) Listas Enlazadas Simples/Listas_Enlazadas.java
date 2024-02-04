public class Listas_Enlazadas {
    public static void main(String[] args) {
        Lista lista = new Lista();
        lista.agregarInicio(3);
        lista.agregarInicio(2);
        lista.agregarInicio(1);
        lista.agregarFinal(4);
        lista.imprimir(); // imprime: 1 2 3 4
    }
}
class Nodo {
    public int valor;
    public Nodo siguiente;
}
class Lista {
    private Nodo cabeza;

    public void agregarInicio(int valor) {
        Nodo nuevoNodo = new Nodo();
        nuevoNodo.valor = valor;
        nuevoNodo.siguiente = cabeza;
        cabeza = nuevoNodo;
    }

    public void agregarFinal(int valor) {
        Nodo nuevoNodo = new Nodo();
        nuevoNodo.valor = valor;
        nuevoNodo.siguiente = null;

        if (cabeza == null) {
            cabeza = nuevoNodo;
        } else {
            Nodo ultimoNodo = cabeza;
            while (ultimoNodo.siguiente != null) {
                ultimoNodo = ultimoNodo.siguiente;
            }
            ultimoNodo.siguiente = nuevoNodo;
        }
    }
    public void imprimir() {
        Nodo nodoActual = cabeza;
        while (nodoActual != null) {
            System.out.print(nodoActual.valor + " ");
            nodoActual = nodoActual.siguiente;
        }
        System.out.println();
    }
}

