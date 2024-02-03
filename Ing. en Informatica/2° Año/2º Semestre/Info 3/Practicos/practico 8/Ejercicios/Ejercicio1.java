package Ejercicios;

import utils.Arbol;
import utils.BTreePrinterRN;

import java.util.Random;

public class Ejercicio1 {
    public Ejercicio1(){
        Arbol arbol = new Arbol();
        Random random=new Random();
        BTreePrinterRN printer = new BTreePrinterRN();
        for (int ii=0; ii<7; ii++)
            arbol.insertar((random.nextInt(26) + 1));
        BTreePrinterRN.printNode(arbol.getRoot());
    }
}
