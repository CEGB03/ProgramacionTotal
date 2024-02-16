package com.cegb03.simulacrobuenconductor.logica;

import com.cegb03.simulacrobuenconductor.persistencia.ControladoraPersistencia;
import java.util.Random;

/**
 *
 * @author CEGB03
 */
public class Controladora {

    //Luego cambiar de 20 al maximo de preguntas disponibles, escalar cuando esten todas las preguntas del manual
    private final int numPreguntasExamen = 20;
    ControladoraPersistencia controladoraPersistencia = new ControladoraPersistencia();
    Pregunta[] preguntas = new Pregunta[20];
    int[] numPreguntas = new int[20];

    public boolean comprobar(int numPregunta, String seleccion) {
    // Buscar el índice en el array preguntas que tiene el número de pregunta dado
    int indice = -1;
    for (int i = 0; i < numPreguntasExamen; i++) {
        if (preguntas[i].getNumPregunta() == numPregunta) {
            indice = i;
            break; // Romper el bucle una vez que encuentres la pregunta
        }
    }

    // Verificar si se encontró la pregunta
    if (indice != -1) {
        // Acciones a realizar cuando se encuentra la pregunta
        Pregunta preguntaEncontrada = preguntas[indice];
        String opcionCorrecta = preguntaEncontrada.getOpnCorrecta();

        // Comparar la selección con la opción correcta y devolver el resultado
        System.out.println(seleccion + " - " + opcionCorrecta);
        return seleccion.equals(opcionCorrecta);
    } else {
        // Acciones a realizar cuando no se encuentra la pregunta
        System.out.println("No se encontró la pregunta con el número: " + numPregunta);
        return false;
    }
}


    
    private void grabarNumPreguntas() {
        Random random = new Random();

        for (int ii = 0; ii < 20; ii++) {
            // Generar un número aleatorio en el rango 1 a 157
            // Ahora hay solo 20 preguntas, por lo que el rango es del 1 al 20
            numPreguntas[ii] = random.nextInt(numPreguntasExamen) + 1;

            // Verificar si el número ya existe en el arreglo
            int jj;
            do {
                jj = 0;
                while (jj < ii && numPreguntas[jj] != numPreguntas[ii]) {
                    jj++;
                }

                if (jj < ii) {
                    // El número ya existe, generar uno nuevo
                    numPreguntas[ii] = random.nextInt(numPreguntasExamen) + 1;
                }
            } while (jj < ii);
        }
    }

    public void grabarPreguntas() {
    grabarNumPreguntas();
    for (int ii = 0; ii < 20; ii++) {
        preguntas[ii] = new Pregunta();
        Pregunta pregunta = controladoraPersistencia.grabarPregunta(numPreguntas[ii]);
        if (pregunta != null) {
            preguntas[ii] = pregunta;
        } else {
            // Manejo si la pregunta no existe en la base de datos
            System.out.println("La pregunta con numPregunta " + numPreguntas[ii] + " no existe en la base de datos.");
        }
    }
}


    public Pregunta getPreguntaId(int num) {
        return preguntas[num-1];
    }
    
}
