package Ejercicios;

import utils.QueueList;

import java.util.Scanner;

public class Ejercicio6 {
    private Scanner sc = new Scanner(System.in);
    private QueueList<Integer> queueList;
    private String cadenaEntrada="";
    private String cadenaSalida="S";
    private int suma=0;
    public Ejercicio6(){
        queueList = new QueueList<Integer>();

        while (cadenaEntrada.compareTo(cadenaSalida)!=0){
            System.out.println("Ingrese un numero para ingresar a la Cola de Numeros guardados:\nIngrese \"S\"");
            cadenaEntrada=sc.nextLine();
            if (cadenaEntrada.compareTo(cadenaSalida)!=0)
                queueList.enqueue(Integer.parseInt(cadenaEntrada));
            System.out.println(queueList.front());
        }
        while (!queueList.isEmpty())
            suma+= queueList.dequeue();

        System.out.println("suma = " + suma);
    }
}
