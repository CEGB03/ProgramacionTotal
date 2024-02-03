package Fechas;

public class FechaHora extends FechaDetallada {
    private int segundo;
    private int minuto;
    private int hora;
    
    public FechaHora(String sFecha, int hora, int minuto, int segundo) {
        super(sFecha);
        this.hora = hora;
        this.minuto = minuto;
        this.segundo = segundo;
    }
    
    public String toString() {
        return super.toString() + " ("+ hora + ":" + minuto + ":" + segundo + ")";
    }
}
