package utils;

public class Nodo<AnyType> {
    private AnyType dato;
    private Nodo<AnyType> iz;
    private Nodo<AnyType> der;
    public Nodo(AnyType datoEntrada){
        this.dato=datoEntrada;
        this.der=null;
        this.iz=null;
    }
    public Nodo(AnyType datoEntrada, Nodo<AnyType> izt, Nodo<AnyType> dert){
        dato=datoEntrada;
        iz=izt;
        der=dert;
    }

    public static <AnyType> int size(Nodo<AnyType> t) {
        if(t==null)
            return 0;
        else
            return 1+size(t.iz)+size(t.der);
    }
    public static <AnyType> int height(Nodo<AnyType> t) {
        if(t==null)
            return -1;
        else
            return 1+Math.max(height(t.iz),height(t.der));
    }


    public AnyType getDato(){return dato;}

    public Nodo<AnyType> getDer() {return der;}

    public Nodo<AnyType> getIz() {return iz;}

    public void setDato(AnyType dato) {this.dato = dato;}

    public void setDer(Nodo<AnyType> der) {this.der = der;}

    public void setIz(Nodo<AnyType> iz) {this.iz = iz;}


    public void imprimirPreOrder() {
        System.out.print(dato+" ");       // dato
        if (iz != null)
            iz.imprimirPreOrder();      // izquierdo
        if (der != null)
            der.imprimirPreOrder();     // derecho
    }

    public void imprimirPostOrder() {
        if (iz != null)                          // izquierdo
            iz.imprimirPostOrder();
        if (der != null)                          // derecho
            der.imprimirPostOrder();
        System.out.print(dato+" ");              // dato
    }

    public void imprimirInOrder() {
        if (iz != null)                    // izquierdo
            iz.imprimirInOrder();
        System.out.print(dato+" ");        // dato
        if (der != null)
            der.imprimirInOrder();     // derecho
    }
}
