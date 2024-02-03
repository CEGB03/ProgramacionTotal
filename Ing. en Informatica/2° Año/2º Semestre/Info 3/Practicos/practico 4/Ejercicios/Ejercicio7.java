package Ejercicios;

import utils.Ordenamientos;
import utils.QueueList;

import java.util.ArrayList;
import java.util.Scanner;

public class Ejercicio7 {
    private QueueList<Integer> ordenada;
    private QueueList<Integer> desordenada;
    private String cadenaEntrada="";
    private String cadenaSalida="S";
    private Scanner sc = new Scanner(System.in);
    private static Integer arraySize=0;
    private ArrayList<Integer> array;
    private static Integer[]  tempArray;
    public Ejercicio7(){
        desordenada=new QueueList<Integer>();
        ordenada=new QueueList<Integer>();
        array=new ArrayList<>();
        enqueueInicial();
        quickQueueInteger();
    }
    public void enqueueInicial(){
        while (cadenaEntrada.compareTo(cadenaSalida)!=0){
            System.out.println("Ingrese un numero para ingresar a la Cola de Numeros guardados:\nIngrese \"S\"");
            cadenaEntrada=sc.nextLine();
            if (cadenaEntrada.compareTo(cadenaSalida)!=0) {
                desordenada.enqueue(Integer.parseInt(cadenaEntrada));
                array.add(Integer.parseInt(cadenaEntrada));
            }
        }
        System.out.println("Se agregaron correctamente.");
    }
    public void quickQueueInteger(){
        try {
            //  colando la cola desordenada en un array
            tempArray=array.toArray(new Integer[0]);
            System.out.println("Se Copio correctamente correctamente.");

            //  ordenamiento del array
            Ordenamientos<Integer> ordenamientosInteger = new Ordenamientos<Integer>();
            tempArray=ordenamientosInteger.quicksort(tempArray, 0, tempArray.length-1);

            //  cargando la cola ordenada por el array ordenado
            System.out.println("Cargando Cola Ordenada");
            for (Integer item : tempArray) {
                ordenada.enqueue(item);
            }

            System.out.println("Cola desordenada");
            desordenada.imprimir();
            System.out.println("Cola Ordenada");
            ordenada.imprimir();

        } catch (Exception e) {
            System.err.println(e.getMessage());
        }
    }
}
