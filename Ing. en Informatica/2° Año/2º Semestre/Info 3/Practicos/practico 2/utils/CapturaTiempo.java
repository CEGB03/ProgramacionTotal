package utils;
import java.util.Random;

public class CapturaTiempo {
    private static int arraySize;
    private static Integer[] array;
    private static Integer[] arrayCopia;
    private int prueba1=100;
    private int prueba2=1000;
    private int prueba3=10000;
    private long fin;
    private long inicio;
    Ordenamientos<Integer> ordenamientosInteger = new Ordenamientos<Integer>();
    public CapturaTiempo(int ejecicion){
        switch (ejecicion){
            case 1 -> PrimerEjecucion();
            case 2 -> SegundoEjecucion();
            case 3 -> TercerEjecucion();
        }
    }
    private static void CargaArrayRandom() {
        Random random = new Random();
        for (int i = 0; i <arraySize; i++) {
            array[i] = random.nextInt(1000); // Genera un número aleatorio entre 0 (inclusive) y 1000 (exclusive)
        }
    }
    public Integer[] getArray(){
        return array;
    }
    public void CalcularTiempo(){
        long duracionEnNanosegundos = fin - inicio;

        // Convierte la duración a segundos
        double duracionEnSegundos = (double) duracionEnNanosegundos / 1_000_000_000.0;

        System.out.println("Tiempo de ejecución: " + duracionEnNanosegundos + " nanosegundos");
        System.out.println("Tiempo de ejecución: " + duracionEnSegundos + " segundos");
    }
    private void ImprimirArreglos(){
        ordenamientosInteger.ImprimirArreglo(array);
        ordenamientosInteger.ImprimirArreglo(arrayCopia);
    }
    private void PrimerEjecucion(){
        array=new Integer[prueba1];
        arrayCopia=new Integer[prueba1];
        arraySize=prueba1;
        CargaArrayRandom();
        arrayCopia=array.clone();
        //ImprimirArreglos();
        System.out.println("\nPara el ordenamiento de Inserccion:");
        inicio = System.nanoTime(); // Captura el tiempo inicial
        ordenamientosInteger.insertionShort_T(arrayCopia);
        fin = System.nanoTime(); // Captura el tiempo final
        //ImprimirArreglos();
        CalcularTiempo();
        arrayCopia=array.clone();
        //ImprimirArreglos();
        System.out.println("Para el ordenamiento shell:");
        inicio = System.nanoTime(); // Captura el tiempo inicial
        ordenamientosInteger.shell(arrayCopia);
        fin = System.nanoTime(); // Captura el tiempo final
        CalcularTiempo();
        arrayCopia=array.clone();
        //ImprimirArreglos();
        System.out.println("Para el ordenamiento quicksort:");
        inicio = System.nanoTime(); // Captura el tiempo inicial
        ordenamientosInteger.quicksort(arrayCopia,0,arraySize-1);
        fin = System.nanoTime(); // Captura el tiempo final
        CalcularTiempo();
        //ImprimirArreglos();
    }
    private void SegundoEjecucion(){
        array=new Integer[prueba2];
        arrayCopia=new Integer[prueba2];
        arraySize=prueba2;
        CargaArrayRandom();
        arrayCopia=array.clone();
        //ImprimirArreglos();
        System.out.println("\nPara el ordenamiento de Inserccion:");
        inicio = System.nanoTime(); // Captura el tiempo inicial
        ordenamientosInteger.insertionShort_T(arrayCopia);
        fin = System.nanoTime(); // Captura el tiempo final
        //ImprimirArreglos();
        CalcularTiempo();
        arrayCopia=array.clone();
        //ImprimirArreglos();
        System.out.println("Para el ordenamiento shell:");
        inicio = System.nanoTime(); // Captura el tiempo inicial
        ordenamientosInteger.shell(arrayCopia);
        fin = System.nanoTime(); // Captura el tiempo final
        CalcularTiempo();
        arrayCopia=array.clone();
        //ImprimirArreglos();
        System.out.println("Para el ordenamiento quicksort:");
        inicio = System.nanoTime(); // Captura el tiempo inicial
        ordenamientosInteger.quicksort(arrayCopia,0,arraySize-1);
        fin = System.nanoTime(); // Captura el tiempo final
        CalcularTiempo();
        //ImprimirArreglos();
    }
    private void TercerEjecucion(){
        array=new Integer[prueba3];
        arrayCopia=new Integer[prueba3];
        arraySize=prueba3;
        CargaArrayRandom();
        arrayCopia=array.clone();
        //ImprimirArreglos();
        System.out.println("\nPara el ordenamiento de Inserccion:");
        inicio = System.nanoTime(); // Captura el tiempo inicial
        ordenamientosInteger.insertionShort_T(arrayCopia);
        fin = System.nanoTime(); // Captura el tiempo final
        //ImprimirArreglos();
        CalcularTiempo();
        arrayCopia=array.clone();
        //ImprimirArreglos();
        System.out.println("Para el ordenamiento shell:");
        inicio = System.nanoTime(); // Captura el tiempo inicial
        ordenamientosInteger.shell(arrayCopia);
        fin = System.nanoTime(); // Captura el tiempo final
        CalcularTiempo();
        arrayCopia=array.clone();
        //ImprimirArreglos();
        System.out.println("Para el ordenamiento quicksort:");
        inicio = System.nanoTime(); // Captura el tiempo inicial
        ordenamientosInteger.quicksort(arrayCopia,0,arraySize-1);
        fin = System.nanoTime(); // Captura el tiempo final
        CalcularTiempo();
        //ImprimirArreglos();
    }
}
