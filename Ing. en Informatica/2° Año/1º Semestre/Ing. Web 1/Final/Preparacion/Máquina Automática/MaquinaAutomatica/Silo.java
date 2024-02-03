public class Silo extends Recipiente {

    private Ingrediente ingredienteAlmacenado;

    public Silo(Ingrediente ingredienteAlmacenado, int capacidadMaxima) {
        super(capacidadMaxima);
        this.ingredienteAlmacenado = ingredienteAlmacenado;
    }

    public Silo(Ingrediente ingredienteAlmacenado) {
        this(ingredienteAlmacenado, Recipiente.CAPACIDAD_MAXIMA_DEFAULT);
    }

    @Override
    public Ingrediente getTipoIngredienteAlmacenado() {
        return ingredienteAlmacenado;
    }

    @Override
    public void agregar(int cantidadAgregada) throws CapacidadExcedidaException {
        if (cantidadAgregada < 0) {
            throw new IllegalArgumentException("La cantidad a agregar debe ser un valor positivo.");
        }

        if (getCantidadIngredienteDisponible() + cantidadAgregada > getCapacidadMaxima()) {
            throw new CapacidadExcedidaException("Capacidad del recipiente excedida al intentar agregar contenido.");
        }

        cantidadDisponible += cantidadAgregada;
    }

    @Override
    public void extraer(int cantidadAExtraer) throws CapacidadExcedidaException {
        if (cantidadAExtraer < 0) {
            throw new IllegalArgumentException("La cantidad a extraer debe ser un valor positivo.");
        }

        if (cantidadAExtraer > cantidadDisponible) {
            throw new CapacidadExcedidaException("No hay suficiente contenido en el recipiente para extraer.");
        }

        cantidadDisponible -= cantidadAExtraer;
    }
}
