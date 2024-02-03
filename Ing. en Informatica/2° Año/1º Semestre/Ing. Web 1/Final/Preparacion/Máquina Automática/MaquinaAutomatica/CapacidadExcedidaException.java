/*
 * Excepcion para falla en capacidad del recipiente
 */
public class CapacidadExcedidaException extends Exception {

    public CapacidadExcedidaException() {
        super("Capacidad del recipiente excedida");
    }

    public CapacidadExcedidaException(String message) {
        super(message);
    }

}
