
public class MedidorDomiciliario extends Medidor {
    // TODO Implementar la clase
    private CoordenadaGPS coordenadas;
    public TipoMedidor getTipoMedidor(){
        return TipoMedidor.DOMICILIARIO; 
    }
    public void NuevoMedidor(CoordenadaGPS coordenadas){
        super(coordenadas);
    }
}
