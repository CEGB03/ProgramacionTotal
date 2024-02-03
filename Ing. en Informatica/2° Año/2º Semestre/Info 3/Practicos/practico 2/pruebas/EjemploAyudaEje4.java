package pruebas;

public class EjemploAyudaEje4 {
    public static void main(String[] args) {
        long inicio = System.currentTimeMillis(); // Captura el tiempo inicial

        // Llama a la función que deseas medir
        realizarTarea();

        long fin = System.currentTimeMillis(); // Captura el tiempo final

        long tiempoDeEjecucion = fin - inicio; // Calcula la diferencia de tiempo en milisegundos
        long segundos = tiempoDeEjecucion / 1000; // Conversión a segundos


        System.out.println("Tiempo de ejecución: " + tiempoDeEjecucion + " milisegundos");
        System.out.println("Tiempo de ejecución: " + segundos + " segundos");
    }

    public static void realizarTarea() {
        // Coloca aquí el código de la función que deseas medir
        for (int i = 0; i < 1000000; i++) {
            // Simula alguna tarea
        }
    }


}
