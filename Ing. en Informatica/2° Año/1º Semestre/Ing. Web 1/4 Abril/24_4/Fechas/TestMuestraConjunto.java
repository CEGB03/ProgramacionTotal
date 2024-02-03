package Fechas;
//Esto es Polimorfismo
//En el caso que no esté en el mismo paquete utilizamos import:
/*import Fechas.Fecha;
import Fechas.FechaDetallada;*/

public class TestMuestraConjunto {
    public static void main(String[] args) {
        Object[] arr = {new Fecha(2, 10, 1970),
            new FechaDetallada(23, 12, 1948),
            new String("This is a string"), 
            new Integer(34)};
        
    //Como el método es estático, lo invocamos a traves de la clase:
    MuestraConjunto.mostrar(arr);
    }
}
