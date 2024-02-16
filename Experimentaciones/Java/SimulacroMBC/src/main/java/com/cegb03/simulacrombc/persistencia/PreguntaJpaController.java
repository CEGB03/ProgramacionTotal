package com.cegb03.simulacrombc.persistencia;

import com.cegb03.simulacrombc.logica.Pregunta;
import java.io.Serializable;
import java.util.List;
import javax.persistence.EntityManager;
import javax.persistence.EntityManagerFactory;
import javax.persistence.Persistence;
import javax.persistence.TypedQuery;

public class PreguntaJpaController implements Serializable {

    private EntityManagerFactory emf = null;

    public PreguntaJpaController() {
        emf = Persistence.createEntityManagerFactory("ManualBuenConduPU");
    }

    public EntityManagerFactory getEmf() {
        return emf;
    }

    public void setEmf(EntityManagerFactory emf) {
        this.emf = emf;
    }

    public void read(Pregunta pregunta, int idPregunta) {
        EntityManager em = null;

        try {
            em = getEmf().createEntityManager();

            // Realizar la consulta JPQL
            String jpql = "SELECT p FROM Pregunta p WHERE p.numPregunta = :idPregunta";
            TypedQuery<Pregunta> query = em.createQuery(jpql, Pregunta.class);
            query.setParameter("idPregunta", idPregunta);

            // Obtener el resultado de la consulta
            List<Pregunta> resultados = query.getResultList();

            // Verificar si se encontró alguna pregunta
            if (!resultados.isEmpty()) {
                // Obtener la primera pregunta (suponiendo que hay una única coincidencia)
                Pregunta preguntaEncontrada = resultados.get(0);

                // Copiar los atributos a la pregunta que pasaste como parámetro
                pregunta.setVeiculo(preguntaEncontrada.getVeiculo());
                pregunta.setPregunta(preguntaEncontrada.getPregunta());
                pregunta.setOpnA(preguntaEncontrada.getOpnA());
                pregunta.setOpnB(preguntaEncontrada.getOpnB());
                pregunta.setOpnC(preguntaEncontrada.getOpnC());
                pregunta.setOpnD(preguntaEncontrada.getOpnD());
                pregunta.setOpnCorrecta(preguntaEncontrada.getOpnCorrecta());
            } else {
                // No se encontró ninguna pregunta con ese ID
                System.out.println("No se encontró ninguna pregunta con el ID: " + idPregunta);
            }

        } finally {
            if (em != null) {
                em.close();
            }
        }
    }

}
