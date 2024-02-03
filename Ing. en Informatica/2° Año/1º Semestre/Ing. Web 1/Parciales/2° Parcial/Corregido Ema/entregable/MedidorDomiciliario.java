
public class MedidorDomiciliario extends Medidor {
    // TODO Implementar la clase
    public MedidorDomiciliario(CoordenadaGPS coordenadas) {
        super(coordenadas);
    }
    public TipoMedidor getTipoMedidor() {
        return TipoMedidor.DOMICILIARIO;
    }
}
