package ImpresionChida;

import ImpresionChida.utils.ArbolBinario;

public class Impresion<AnyType extends Comparable<? super AnyType>> {
    private ArbolBinario<AnyType> anyTypeArbolBinario;
    public Impresion(ArbolBinario<AnyType> arbolBinario) {
        this.anyTypeArbolBinario = arbolBinario;
    }
    public void imprimirComoArbol() {
        System.out.println("\n\n\nprint(stackoverflow1)");
        anyTypeArbolBinario.StackOverflow1();
    }
    public void imprimirConLineas(){
        System.out.println("\n\n\nprint(stackoverflow2)");
        anyTypeArbolBinario.StackOverflow2();
    }
}
