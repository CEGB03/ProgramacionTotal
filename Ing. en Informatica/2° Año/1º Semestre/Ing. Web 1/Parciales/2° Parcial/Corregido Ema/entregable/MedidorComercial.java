
public class MedidorComercial extends Medidor {
    // TODO Implementar la clase
    public MedidorComercial(CoordenadaGPS coordenadas) {
        super(coordenadas);
    }
    public TipoMedidor getTipoMedidor() {
        return TipoMedidor.COMERCIAL;
    }
}
