import java.util.ArrayList;
import java.util.List;

public class Arma extends Elemento {
    List<Municion> municiones;
    TipoMunicion tipoMunicion;

    /**
     * Constructor de Arma
     * @param nombre
     * @param tipoMunicion
     */
    public Arma (String nombre, TipoMunicion tipoMunicion) {
        // TO DO - Implementar el constructor
        super(nombre);
        this.tipoMunicion=tipoMunicion;
        this.municiones=new ArrayList<>();
    }

    /**
     * Agrega la municion a la lista de municiones.
     * Lanza MunicionNoValidaException si la municion no coincide con el tipo
     * de municion del arma.
     * @param m la municion a cargar
     * @throws MunicionNoValidaException si la municion no coincide con el
     *           tipo de municion del arma.
     */
    public void cargar (Municion m) throws MunicionNoValidaException {
        // TO DO - Implementar el metodo
        if(tipoMunicion!=m.getTipo()){
            throw new MunicionNoValidaException("La municion no coincide con el tipo de municion del arma.");
        }
        municiones.add(m);
    }

    /**
     * Remueve la primera municion de la lista y retorna el danio
     * de la misma.
     * Arroja ArmaDescargadaException si no hay municiones
     * @return el valor de danio de la municion removida
     * @throws ArmaDescargadaException si no hay municiones disponibles
     */
    public Integer disparar () throws ArmaDescargadaException {
        // TO DO - Implementar el metodo
        if(!isCargada()){
            throw new ArmaDescargadaException("El cargador de la municion esta vacio.");
        }
        int primerDanio=municiones.get(0).getDanio();
        municiones.remove(0);
        return primerDanio;
    }

    /**
     * Verifica si existen municiones cargadas en la lista.
     * @return true si hay municiones cargadas, false de lo contrario
     */
    public Boolean isCargada() {
        // TO DO - Implementar el metodo
        if(municiones.isEmpty()){
            return false;
        }
        return true;
    }
}
