package com.cegb03.simulacrobuenconductor.persistencia;

import com.cegb03.simulacrobuenconductor.logica.Pregunta;

/**
 *
 * @author CEGB03
 */

public class ControladoraPersistencia {
    
    PreguntaJpaController preguntaJpaController;

    public ControladoraPersistencia(){preguntaJpaController = new PreguntaJpaController();}

    public Pregunta grabarPregunta(int numPregunta) {
        try {
            return preguntaJpaController.findPregunta(numPregunta);
        } catch (Exception e) {
            e.printStackTrace(); // Manejo básico de la excepción (imprime en la consola).
        }
        return null;
    }
     
}
