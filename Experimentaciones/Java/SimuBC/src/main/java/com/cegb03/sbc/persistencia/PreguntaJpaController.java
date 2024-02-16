package com.cegb03.simulacrobuenconductor.persistencia;

import com.cegb03.simulacrobuenconductor.logica.Pregunta;
import java.io.Serializable;
import javax.persistence.EntityNotFoundException;
import javax.persistence.criteria.Root;
import com.cegb03.simulacrobuenconductor.persistencia.exceptions.NonexistentEntityException;
import java.util.List;
import javax.persistence.EntityManager;
import javax.persistence.EntityManagerFactory;
import javax.persistence.Persistence;
import javax.persistence.criteria.CriteriaBuilder;
import javax.persistence.criteria.CriteriaQuery;
import javax.persistence.Query;
import javax.persistence.TypedQuery;


/**
 *
 * @author CEGB03
 */
public class PreguntaJpaController implements Serializable {
    
    public PreguntaJpaController(EntityManagerFactory emf){
        this.emf = emf;
    }
    
    public PreguntaJpaController(){
        emf = Persistence.createEntityManagerFactory("ManualBuenConduPU");
    }
    
    private EntityManagerFactory emf = null;
    
    public EntityManager getEntityManager(){
        return emf.createEntityManager();
    }
    
    public void create(Pregunta pregunta){
        EntityManager em = null;
        try {
            em = getEntityManager();
            em.getTransaction().begin();
            em.persist(pregunta);
            em.getTransaction().commit();    
        } finally {    
            if (em != null) {
                em.close();
            }    
        }
    }
    
    public void edit(Pregunta pregunta) throws NonexistentEntityException, Exception{
        EntityManager em = null;
        try {
            em = getEntityManager();
            em.getTransaction().begin();
            pregunta = em.merge(pregunta);
            em.getTransaction().commit();
        } catch (Exception e) {
            String msg = e.getLocalizedMessage();
            if (msg == null || msg.length() == 0) {
                int id = pregunta.getNumPregunta();
                if (findPregunta(id) == null) {
                    throw new NonexistentEntityException("The pregunta whit id " + id + " no longer exist.");
                }
                throw e;
            }
        } finally {
            if (em != null) {
                em.close();
            }
        }
    }
    
    public void destroy(int id) throws NonexistentEntityException{
        EntityManager em = null;
        try {
            em = getEntityManager();
            em.getTransaction().begin();
            Pregunta pregunta;
            try {
                pregunta = em.getReference(Pregunta.class, id);
                pregunta.getNumPregunta();
            }catch (Exception e) {
                // Manejar otras excepciones aquí, si es necesario
                throw new RuntimeException("An unexpected error occurred during destroy operation.", e);
            }
            // Manejar la excepción específica aquí
            em.remove(pregunta);
            em.getTransaction().commit();
        }finally{
            if (em != null) {
                em.close();
            }
        }
    }
    
    public List<Pregunta> findPreguntaEntities() {
        return findPreguntaEntities(true, -1, -1);
    }

    public List<Pregunta> findPreguntaEntities(int maxResults, int firstResult) {
        return findPreguntaEntities(false, maxResults, firstResult);
    }
    
    private List<Pregunta> findPreguntaEntities(boolean all, int maxResults, int firstResult) {
        EntityManager em = getEntityManager();
        try {
            Query query = em.createNamedQuery("Pregunta.findAll");
            if (!all) {
                query.setMaxResults(maxResults);
                query.setFirstResult(firstResult);
            }
            return query.getResultList();
        } finally {
            em.close();
        }
    }

    public Pregunta findPregunta(int id) {
        EntityManager em = getEntityManager();
        try {
            return em.find(Pregunta.class, id);
        } finally {
            em.close();
        }
    }
    
    public int getPreguntaCount() {
        EntityManager em = getEntityManager();
        try {
            Query q = em.createNamedQuery("Pregunta.countAll"); // Cambia el nombre de la consulta nombrada según tu configuración
            return ((Long) q.getSingleResult()).intValue();
        } finally {
            em.close();
        }
    }

    
}