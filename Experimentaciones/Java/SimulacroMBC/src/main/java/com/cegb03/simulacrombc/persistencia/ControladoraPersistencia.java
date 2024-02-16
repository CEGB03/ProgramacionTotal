package com.cegb03.simulacrombc.persistencia;

import com.cegb03.simulacrombc.logica.Pregunta;

/**
 *
 * @author CEGB03
 */
public class ControladoraPersistencia {
    
    PreguntaJpaController preguntaJpaController = new PreguntaJpaController();

    public void getPregunta(Pregunta pregunta) {
       
    }

    public void grabarPregunta(Pregunta pregunta, int numPregunta) {
       preguntaJpaController.read(pregunta, numPregunta);
    }
     
    
}
