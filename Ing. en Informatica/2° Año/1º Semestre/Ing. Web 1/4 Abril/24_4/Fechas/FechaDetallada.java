package Fechas;

public class FechaDetallada extends Fecha {
    private static String meses[] = {"Enero", "Febrero", "Marzo", "Abril",
        "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre",
        "Diciembre"};
    
    /*
    public FechaDetallada() {
        
    }
    
    public FechaDetallada(int d, int m, int y) {
        setDay(d);
        setMonth(m);
        setYear(y);
    }
    */
    
    public FechaDetallada() {
        //Invocamos al constructor Fecha() del padre:
        super();
    }
    
    public FechaDetallada(int day, int month, int year) {
        //Invocamos al constructor Fecha(day, month, year) del padre:
        super(day, month, year);
    }
    
    public FechaDetallada(String s) {
        super(s);
    }
    
    public String toString() {
        return getDay() + " de " + meses[getMonth()-1] + " del " + getYear();
    }
}
