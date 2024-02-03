package Ejercicios;

import utils.Arbol;
import utils.BTreePrinterRN;

import java.util.Random;

public class Ejercicio2 {
    private Integer[] arrayStandar={10, 20, 30, 40, 50, 60, 70};
    public Ejercicio2(){
        Arbol arbol = new Arbol();
        Random random=new Random();
        BTreePrinterRN printer = new BTreePrinterRN();
        for (int ii=0; ii<arrayStandar.length; ii++) {
            arbol.insertar(arrayStandar[ii]);
            BTreePrinterRN.printNode(arbol.getRoot());
        }
    }
}
