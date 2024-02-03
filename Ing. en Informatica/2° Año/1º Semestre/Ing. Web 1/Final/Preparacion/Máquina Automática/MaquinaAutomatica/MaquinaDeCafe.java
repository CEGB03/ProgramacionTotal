import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;

public class MaquinaDeCafe implements MaquinaDeEstados {
    protected Producto seleccion;
    protected Estado estado = Estado.APAGADO;
    protected List <Recipiente> recipientes;
    protected int totalProductosServidos;
    protected Caja caja;
    protected List <Producto> productosDisponibles;
	
    /**
     * Constructor sin parametros.
     */
    public MaquinaDeCafe(){
    	recipientes = new ArrayList<Recipiente>();
    	productosDisponibles = new ArrayList<Producto>();
    	totalProductosServidos = 0;
    	caja = new Caja();
    }
    
    /**
     * Retorna la cantidad total de productos servidos por esta
     * maquina.
     * 
     * @return cantidad total de productos servidos
     */
    public int getTotalProductosServidos() {
    	return totalProductosServidos;
    }
    
    /**
     * Retorna el total de dinero recaudado por esta maquina
     * 
     * @return total de dinero recaudado
     */
    public int getTotalRecaudacion(){
    	return caja.getTotalRecaudado();
    }
    
    /**
     * Retorna el producto seleccionado
     *
     * @return el producto seleccionada en la maquina
     */
    public Producto getSeleccion() {
    	return seleccion;
    }
    
    /**
     * Verifica si existe suficiente cantidad de un ingrediente
     *
     * @param ingrediente el ingrediente requerido
     * @param cantidadRequerida la cantidad requerida
     * @return true si existe suficiente ingrediente, false en
     * caso contrario
     */
    public boolean hayIngredienteDisponible (Ingrediente ingrediente, int cantidadRequerida){
    	for (Recipiente r: recipientes){
    		if (ingrediente == r.getTipoIngredienteAlmacenado()){
    			if (r.getCantidadIngredienteDisponible()>=cantidadRequerida){
    				return true;
    			}
    		}
    	}
    	return false;
    }
    
    /**
     * Verifica si es posible despachar el producto especificado
     * 
     * @param p el producto a despachar
     * @throws ProductoException si el producto especificado es
     * null, o no esta configurado en esta maquina, o existen
     * ingredientes faltantes en la receta.
     */
    public boolean validarProducto(Producto p) {
    	if (p==null || p.getReceta()==null )
    		return false;	
    	Receta r =  p.getReceta();
    	for (Ingrediente ing: r.getIngredientes()){
    		if (!hayIngredienteDisponible(ing, r.getCantidadDeIngredienteRequerida(ing)))
    			return false;
    	}
    	return true;
    }
    
    @Override
    public Estado getEstado() {
    	return estado;
    }
    
    @Override
    public void operar() {
    	//TO DO: Implementar metodo
    	if (estado == Estado.LISTO) {
    		try {
    			prepararProducto(seleccion);
    			totalProductosServidos++;
    			caja.completarVenta();
    			estado = Estado.OPERANDO;
    		} catch (ProductoException e) {
    			estado = Estado.APAGADO;
    		}
    	}
    }
    
    @Override
    public void restablecer() {
    	//TO DO: Implementar metodo
    	estado = Estado.LISTO;
    }
    
    @Override
    public void encender() {
    	//TO DO: Implementar metodo
    	estado = Estado.LISTO;
    }
    
    @Override
    public void apagar() {
    	//TO DO: Implementar metodo
    	estado = Estado.APAGADO;
    }
    
    @Override
    public void mantener() {
    	//TO DO: Implementar metodo
    	estado = Estado.MANTENIMIENTO;
    }
    
    /**
     * Programa el precio a un producto. Solo es posible programar
     * el precio en modo MANTENIMIENTO
     *
     * @param producto el producto al cual definir el precio
     * @param precio el precio del producto
     * @throws IllegalStateException cuando no esta en modo
     * MANTENIMIENTO
     */
    public void programarPrecioDeProducto(Producto producto, int precio){
    	//TO DO: Implementar metodo
    	if (estado != Estado.MANTENIMIENTO) {
    		throw new IllegalStateException("La máquina no está en modo MANTENIMIENTO");
    	}
    	caja.setPrecioACobrar(precio);
    }
    
    /**
     * Agrega una receta para un producto de la maquina de
     * cafe. Solo es valido en modo mantenimiento
     * 
     * @param p el Producto a configurar en la maquina
     * @param r la Receta correspondiente al producto a agregar
     * @throws IllegalStateException si la maquina no esta en modo
     * MANTENIMIENTO
     */
    public void programarRecetaDeProducto (Producto p, Receta r){
    	//TO DO: Implementar metodo
    	if (estado != Estado.MANTENIMIENTO) {
    		throw new IllegalStateException("La máquina no está en modo MANTENIMIENTO");
    	}
    	productosDisponibles.add(p);
    	p.setReceta(r);
    }
    
    /**
     * Retorna una lista de ingredientes faltantes para las
     * recetas cargadas en la maquina
     * 
     * @return Lista de ingredientes faltantes.
     */
    public List<Ingrediente> getFaltantes(){
    	//TO DO: Implementar metodo
    	//Remover la siguiente linea antes de implementar el metodo
    	//throw new RuntimeException();
    	List<Ingrediente> faltantes = new ArrayList<>();
    	for (Producto producto : productosDisponibles) {
    		for (Ingrediente ing : producto.getReceta().getIngredientes()) {
    			if (!hayIngredienteDisponible(ing, producto.getReceta().getCantidadDeIngredienteRequerida(ing))) {
    				faltantes.add(ing);
    			}
    		}
    	}
    	return faltantes;
    }
    
    
    /**
     * Ejecuta la receta para el producto especificado, extrayendo
     * de cada recipiente la cantidad necesaria de ingredientes
     * para preparar la receta.
     * 
     * @param seleccion el producto seleccionado 
     * @throws ProductoException si por algun motivo no se puede
     * extraer la cantidad requerida de cada ingrediente.
     */
    public void prepararProducto(Producto seleccion) throws ProductoException {
    	//TODO: Implementar metodo
    	if (!validarProducto(seleccion)) {
    		throw new ProductoException("Producto inválido o ingredientes faltantes");
    	}
    
    	Receta receta = seleccion.getReceta();
    	for (Ingrediente ing : receta.getIngredientes()) {
    		int cantidadRequerida = receta.getCantidadDeIngredienteRequerida(ing);
    		Recipiente recipiente = getRecipiente(ing);
    
    		try {
    			// Si el recipiente es de tipo Silo, utiliza el método extraer de Silo
    			if (recipiente instanceof Silo) {
    				((Silo) recipiente).extraer(cantidadRequerida);
    			} else {
    				// En caso contrario, utiliza el método extraer de Recipiente
    				recipiente.extraer(cantidadRequerida);
    			}
    		} catch (CapacidadExcedidaException e) {
    			throw new ProductoException("Error al extraer del recipiente: " + e.getMessage());
    		}
    	}
    }
    
    /**
     * Retorna el recipiente para el producto especificado
     *
     * @param ingrediente el ingrediente requerido
     * @return el recipiente que contiene el ingrediente
     * requerido, o null si no existe un recipiente para ese
     * ingrediente.
     */
    public Recipiente getRecipiente (Ingrediente ingrediente){
    	//TO DO: Implementar metodo
    	//Remover la siguiente linea antes de implementar el metodo
    	//throw new RuntimeException();
    	for (Recipiente recipiente : recipientes) {
            if (recipiente.getTipoIngredienteAlmacenado() == ingrediente) {
    			return recipiente;
            }
    	}
    	return null;
    }
    
    /**
     * Selecciona un producto para despachar. Solo es posible si
     * la maquina esta lista para despachar producto.  Configura
     * el precio del producto como precio a cobrar en la Caja, o 0
     * si la seleccion es null
     *
     * @param seleccion el producto a despachar
     * @throws IllegalStateException si la maquina no esta lista
     */
    public void setSeleccion(Producto seleccion) {
    	//TO DO: Implementar metodo
    	if (estado != Estado.LISTO) {
    		throw new IllegalStateException("La máquina no está lista para despachar productos");
    	}
    	this.seleccion = seleccion;
    	if (seleccion != null) {
    		caja.setPrecioACobrar(seleccion.getPrecio());
    	}else {
    		caja.setPrecioACobrar(0);
    	}
    }
}
