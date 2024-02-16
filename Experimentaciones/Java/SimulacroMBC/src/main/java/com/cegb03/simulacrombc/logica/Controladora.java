package com.cegb03.simulacrombc.logica;

import com.cegb03.simulacrombc.persistencia.ControladoraPersistencia;
import  java.util.Random;

/**
 *
 * @author CEGB03
 */
public class Controladora {
    ControladoraPersistencia controladoraPersistencia = new ControladoraPersistencia();
        int[] numPreguntas = new int[20];

    public void controlar(int numPregunta, String seleccion) {
        
    }

    private void grabarNumPreguntas() {
        Random random = new Random();

        for (int ii = 0; ii < 20; ii++) {
            // Generar un número aleatorio en el rango 1 a 157
            numPreguntas[ii] = random.nextInt(157) + 1;

            // Verificar si el número ya existe en el arreglo
            int jj;
            do {
                jj = 0;
                while (jj < ii && numPreguntas[jj] != numPreguntas[ii]) {
                    jj++;
                }

                if (jj < ii) {
                    // El número ya existe, generar uno nuevo
                    numPreguntas[ii] = random.nextInt(157) + 1;
                }
            } while (jj < ii);
        }
    }


    public void grabarPreguntas() {
        Pregunta[] preguntas = new Pregunta[20];
        for (int ii = 0; ii < 20; ii++) {
            preguntas[ii] = new Pregunta();
            controladoraPersistencia.grabarPregunta(preguntas[ii], numPreguntas[ii]);
            preguntas[ii].toString();
        }
    }
    
}
