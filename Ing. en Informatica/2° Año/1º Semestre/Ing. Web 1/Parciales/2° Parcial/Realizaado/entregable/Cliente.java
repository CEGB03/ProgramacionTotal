import java.util.ArrayList;
import java.util.List;

public class Cliente {
    private String nombre;
    private Medidor medidor;
    private List<Lectura>lecturas;
    
    /**
     * Constructor
     * @param nombre Nombre del cliente. El nombre debe persistirse en
     * minusculas y sin espacios al principio o fin de la cadena.
     */
    public Cliente (String nombre){
        // TO DO Implementar el metodo
        this.nombre=nombre.replaceAll("\\s+", "").toLowerCase();
        lecturas =new ArrayList<Lectura>();
    }
    
    /**
     * Retorna el nombre del cliente
     * @return
     */
    public String getNombre(){
        return nombre;
    }
    
    /**
     * 
     * @return el Medidor asociado al cliente (Null si no tiene)
     */
    public Medidor getMedidorAsociado(){
        return medidor;
    }
    
    /**
     * 
     * @return la lista de Lecturas realizadas sobre el medidor del cliente
     */
    public List<Lectura> getLecturas(){
        return lecturas;
    }
    
    /**
     * Agrega una lectura a la lista de lecturas del medidor. La fecha tiene que ser posterior a la
     * a la ultima lectura realizada.
     * 
     * @param lectura La lectura a agregar
     * @throws IllegalStateException cuando el cliente no tiene medidor asociado.
     * @throws LecturaInconsistenteException cuando la lectura es anterior a la ultima lectura de la lista
     * o cuando el valor leido es inferior al valor de la ultima lectura
     * 
     */
    public void agregarLectura (Fecha f) throws LecturaInconsistenteException{
        // TODO Implementar el metodo
        if(medidor==null)
            throw new IllegalStateException("Clienete sin medidor asociado");
        Lectura nuevLec=new Lectura(medidor,  f);
        if(validarLectura(nuevLec,lecturas)){
            //lecturas.add(medidor);
            
        }else{
            throw new LecturaInconsistenteException("Lectura Incompatible");
        }
    }
    
    
    /**
     * Asocia un medidor a este cliente, si es que no tiene ningun medidor asociado. Si el 
     * cliente ya tiene un medidor asociado, ignora esta nueva asociacion.
     * @param m el Medidor a asociar
     * @return true si se pudo asociar el medidor, false si el cliente ya tiene un medidor asociado.
     */
    public boolean asociarMedidor(Medidor m){
        //throw new IllegalArgumentException(); // Borrarla!!!
        // TODO Implementar el metodo
        if(medidor==null){
            this.medidor=m;
            return true;
        }
        else{
            return false;
        }
    }
    
    /**
     *     Remueve el medidor asociado a este cliente, y la lista de lecturas asociadas
     */
    public void removerMedidor(){
        // TODO Implementar el metodo
    }
    
    
    
    private boolean validarLectura(Lectura lectura, List<Lectura> lista) {
        if (! lista.isEmpty()){
            Lectura ultima = lista.get(lista.size()-1);
            if (lectura.getFechaDeLectura().compareTo(ultima.getFechaDeLectura()) < 0 
                    || lectura.getValorDeLectura() < ultima.getValorDeLectura()) 
                return false;
        }    
        return true;
    }
    
    /**
     * Retorna un string con el siguiente formato:
     * "Cliente: <nombre_del_cliente> - Medidor: <medidor_id>" cuando tiene un medidor asociado
     * "Cliente: <nombre_del_cliente> - Medidor: N/A" cuando no tienen un medidor asociado
     *
     */
    public String toString() {
        // TO DO Implementar el metodo
        if(medidor==null){
            return "Cliente: <"+nombre+"> - Medidor: N/A";
        }
        return "Cliente: <"+nombre+"> - Medidor: <"+medidor.getId()+">";
    }
}