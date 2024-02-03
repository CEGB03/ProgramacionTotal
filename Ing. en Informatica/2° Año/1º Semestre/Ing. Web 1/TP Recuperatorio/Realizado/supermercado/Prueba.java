import java.util.HashMap;
import java.util.Iterator;

/**
 * Write a description of class Prueba here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Prueba
{
    /**
     * Constructor for objects of class Prueba
     */
    public static void main(String[] args) {
        EjecutarPrueba();
    }
    public static void EjecutarPrueba() {
        Supermercado super1 = new Supermercado("Supermercado Vea");
        Gondola gondola1 = new Gondola();
        Gondola gondola2 = new Gondola();
        Gondola gondola3 = new Gondola();
        Producto arroz1 = new Producto(TipoProducto.Arroz, "Vea", 15.5);
        Producto arroz2 = new Producto(TipoProducto.Arroz, "Gallo", 5.75);
        Producto fideos1 = new Producto(TipoProducto.Fideos, "Luchetti", 9.40);
        Producto jabon1 = new Producto(TipoProducto.Jabon, "Rexona", 12.90);
        Producto jabon2 = new Producto(TipoProducto.Jabon, "Lux", 15.5);


        //      Inicializaciones
        super1.agregarGondola(gondola1);
        super1.agregarGondola(gondola2);
        super1.agregarGondola(gondola3);
        gondola1.agregarProductos(arroz1, 20);
        gondola1.agregarProductos(arroz2, 10);
        gondola1.agregarProductos(arroz1, 20);
        gondola2.agregarProductos(fideos1, 7);
        gondola3.agregarProductos(jabon1, 4);
        gondola3.agregarProductos(jabon2, 9);

        //     Puebas de gondolas
        System.out.println(gondola1.quitarProductos(arroz2, 2));
        /*System.out.println(*/
        gondola1.getProductos();
        for (Producto i : gondola1.getProductos()) {
            System.out.println(i.getDetalles());
        }
        for (Producto i : gondola2.getProductos()) {
            System.out.println(i.getDetalles());
        }
        for (Producto i : gondola3.getProductos()) {
            System.out.println(i.getDetalles());
        }
        /*System.out.println(*/
        gondola1.getMapa();
        HashMap<Producto, Integer> mapa = gondola1.getMapa();
        Iterator<Producto> iterator = mapa.keySet().iterator();
        while (iterator.hasNext()) {
            Producto producto = iterator.next();
            Integer cantidad = mapa.get(producto);
            System.out.println(producto.getDetalles() + " - Cantidad: " + cantidad);
        }
        //      prueba de supermercado
        System.out.println("Existen " + super1.getCantidadDeGondolas() + " gondolas en el supermercado " + super1.getNombre());
        System.out.println("super1.getProductosEnVenta()= \n" + super1.getProductosEnVenta());
        System.out.println("super1.getConjuntoDeProductos()=");
        for (Producto i : super1.getConjuntoDeProductos()) {
            System.out.println(i.getDetalles());
        }
        System.out.println("super1.imprimirProductosEnVenta()=");
        super1.imprimirProductosEnVenta();
        //  final de las pruebas iniciales

        //  purebas finales:
        System.out.println(gondola1.quitarProductos(arroz2, 9));
    }
}
