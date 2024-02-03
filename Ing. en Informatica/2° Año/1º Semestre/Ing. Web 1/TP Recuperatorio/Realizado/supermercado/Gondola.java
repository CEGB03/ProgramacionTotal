import java.util.HashMap;
import java.util.HashSet;
import java.util.Set;
import java.util.Iterator;

/**
 * Modela las gondolas o estantes de un supermercado
 * 
 * @author Emiliano Daniele 
 * @version 1.0
 */
public class Gondola
{
    private HashMap<Producto, Integer> productos;

    /**
     * Constructor de la clase Gondola
     */
    public Gondola()
    {
        // TO DO - Codifique lo que falta
        productos = new HashMap<>();
        
    }

    
    /**
     * Agrega productos a la gondola. 
     * 
     * Si el producto esta en la gondola, la cantidad
     * se suma a la cantidad que poseia anteriormente. 
     * 
     * Si el producto no esta en la gondola, lo agrega.
     * 
     * @param   producto    El producto a agregar
     * @param   cantidad    La cantidad a agregar
     */
    public void agregarProductos(Producto producto, Integer cantidad)
    {
        // TO DO - Codifique lo que falta
        if (productos.containsKey(producto))
            productos.replace(producto, productos.get(producto)+cantidad);
        else
            productos.put(producto, cantidad);
    }
    
    
    /**
     * Quita productos de la gondola
     * 
     * Cuando la cantidad de un producto sea cero,
     * se debe quitar el producto de la gondola.
     * 
     * @param   producto    El producto a quitar
     * @param   cantidad    La cantidad del producto a quitar
     * @return  true en caso de exito y false ante 
     *          cualquier error (No existe el producto,
     *          la cantidad indicada es mayor al stock,
     *          cantidad negativa)
     */
    public boolean quitarProductos(Producto producto, Integer cantidad)
    {
        // TO DO - Codifique lo que falta
        //return true;
        Iterator<Producto> iterator = productos.keySet().iterator();
        while (iterator.hasNext()) {
            Producto p = iterator.next();
            if (p.equals(producto)) {
                if ((productos.get(producto) - cantidad) == 0) {
                    productos.remove(producto);
                    return true;
                }
                else if (((productos.get(producto) - cantidad) > 0)) {
                    productos.replace(producto, productos.get(producto) - cantidad);
                    return true;
                } else if (((productos.get(producto) - cantidad) < 0)) {
                    System.err.println("No se puede quitar la cantidad de producto deseado");
                    //throw new IllegalArgumentException("Stock Insuficiente");
                    return false;
                }
            }
        }
        //  Si no se encuentra en la gondola, se ejecuta el siguiente return
        System.err.println("No se encuentra en la gondola el producto deseado");
        return false;
    }
    
    
    /**
     * Devuelve un conjunto con los productos existentes
     * en la gondola
     * 
     * @return El conjunto con los productos de la gondola
     */
    public Set<Producto> getProductos()
    {
        // TO DO - Codifique lo que falta
        //return null;
        HashSet<Producto> productoDev= new HashSet<Producto>();
        for (Producto p : productos.keySet()) {
            productoDev.add(p);
        }
        return productoDev;
    }
    
    
     /**
     * Devuelve el mapa de los productos existentes
     * en la gondola
     * 
     * @return El mapa de los productos de la gondola
     */
    public HashMap<Producto,Integer> getMapa(){
        // TO DO - Codifique lo que falta
        //return null;
        return productos;
    }
}
