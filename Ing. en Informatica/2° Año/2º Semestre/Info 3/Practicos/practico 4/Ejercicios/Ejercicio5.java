package Ejercicios;

import tests.QueueListTest;

public class Ejercicio5 {
    public Ejercicio5(){
        QueueListTest queueListTest=new QueueListTest();
        System.out.println("Prueba con Integer");
        queueListTest.testQueueInteger();
        System.out.println("Prueba con String");
        queueListTest.testQueueString();
    }
}
