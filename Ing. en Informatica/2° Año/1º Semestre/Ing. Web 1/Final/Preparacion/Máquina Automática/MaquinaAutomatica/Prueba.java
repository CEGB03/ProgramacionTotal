import java.util.List;
import java.util.Scanner;

/**
 * Write a description of class Pruebas here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Prueba {
    public static void main(String[] args) throws CapacidadExcedidaException {
        Scanner cs = new Scanner(System.in);
        System.out.println("Ingrese 1 (Prubea1() ) o 2 (PruebasTODO() ):");
        int a=cs.nextInt();
        switch (a) {
            case 1->Prubea1();
            case 2->PruebasTODO();
        }
    }

    public static void Prubea1() {
        // Crear una máquina de café y agregar recipientes
        MaquinaDeCafe maquina = new MaquinaDeCafe();
        maquina.recipientes.add(new Silo(Ingrediente.CAFE, 2000));
        maquina.recipientes.add(new Silo(Ingrediente.LECHE, 1500));
        maquina.recipientes.add(new Silo(Ingrediente.AGUA, 1000));

        // Configurar recetas para los productos
        Receta recetaExpreso = new Receta();
        recetaExpreso.agregarIngrediente(Ingrediente.CAFE, 30);
        recetaExpreso.agregarIngrediente(Ingrediente.AGUA, 100);
        Producto.EXPRESO.setReceta(recetaExpreso);

        Receta recetaCapuchino = new Receta();
        recetaCapuchino.agregarIngrediente(Ingrediente.CAFE, 25);
        recetaCapuchino.agregarIngrediente(Ingrediente.LECHE, 150);
        recetaCapuchino.agregarIngrediente(Ingrediente.AGUA, 50);
        recetaCapuchino.agregarIngrediente(Ingrediente.AZUCAR, 10);
        Producto.CAPUCHINO.setReceta(recetaCapuchino);

        // Encender la máquina
        maquina.encender();

        // Agregar saldo a la caja
        maquina.caja.agregarSaldo(10);
        System.out.println("Saldo actual: " + maquina.caja.getSaldoActual());

        // Seleccionar producto y prepararlo
        maquina.setSeleccion(Producto.EXPRESO);
        try {
            maquina.prepararProducto(maquina.getSeleccion());
            System.out.println("Producto preparado: " + maquina.getSeleccion());
        } catch (ProductoException e) {
            System.out.println("Error al preparar el producto: " + e.getMessage());
        }

        // Mostrar el saldo total recaudado y el total de productos servidos
        System.out.println("Total recaudado: " + maquina.getTotalRecaudacion());
        System.out.println("Total productos servidos: " + maquina.getTotalProductosServidos());
    }

    public static void PruebasTODO() throws CapacidadExcedidaException {
        MaquinaDeCafe maquina = new MaquinaDeCafe();
        Silo silo1 =new Silo(Ingrediente.CAFE, 2000);
        Silo silo2 =new Silo(Ingrediente.LECHE, 1500);
        Silo silo3 =new Silo(Ingrediente.AGUA, 1000);
        Silo silo4 =new Silo(Ingrediente.AZUCAR, 1000);
        Silo silo5 =new Silo(Ingrediente.CACAO, 1000);
        silo1.agregar(2000);
        silo2.agregar(1500);
        silo3.agregar(1000);
        silo4.agregar(1000);
        silo5.agregar(1000);
        maquina.recipientes.add(silo1);
        maquina.recipientes.add(silo2);
        maquina.recipientes.add(silo3);
        maquina.recipientes.add(silo4);
        maquina.recipientes.add(silo5);

        Receta recetaExpreso = new Receta();
        recetaExpreso.agregarIngrediente(Ingrediente.CAFE, 30);
        recetaExpreso.agregarIngrediente(Ingrediente.AGUA, 100);
        Producto.EXPRESO.setReceta(recetaExpreso);

        Receta recetaCapuchino = new Receta();
        recetaCapuchino.agregarIngrediente(Ingrediente.CAFE, 25);
        recetaCapuchino.agregarIngrediente(Ingrediente.LECHE, 150);
        recetaCapuchino.agregarIngrediente(Ingrediente.AGUA, 50);
        recetaCapuchino.agregarIngrediente(Ingrediente.AZUCAR, 10);
        Producto.CAPUCHINO.setReceta(recetaCapuchino);

        maquina.encender();

        maquina.caja.agregarSaldo(20);
        maquina.caja.agregarSaldo(20);
        maquina.caja.agregarSaldo(20);
        System.out.println("Saldo actual: " + maquina.caja.getSaldoActual());

        maquina.setSeleccion(Producto.EXPRESO);
        try {
            maquina.prepararProducto(maquina.getSeleccion());
            System.out.println("Producto preparado: " + maquina.getSeleccion());
        } catch (ProductoException e) {
            System.out.println("Error al preparar el producto: " + e.getMessage());
        }

        System.out.println("Total recaudado: " + maquina.getTotalRecaudacion());
        System.out.println("Total productos servidos: " + maquina.getTotalProductosServidos());

        try {
            System.out.println("¿Saldo suficiente para preparar el producto? " + maquina.caja.saldoSuficiente());

            System.out.println(maquina.getEstado());

            maquina.mantener();

            maquina.programarPrecioDeProducto(Producto.EXPRESO, 25);
            System.out.println("Precio de EXPRESO programado: " + maquina.getSeleccion().getPrecio());

            Receta recetaChocolate = new Receta();
            recetaChocolate.agregarIngrediente(Ingrediente.CACAO, 20);
            recetaChocolate.agregarIngrediente(Ingrediente.LECHE, 100);
            recetaChocolate.agregarIngrediente(Ingrediente.AGUA, 50);
            recetaChocolate.agregarIngrediente(Ingrediente.AZUCAR, 15);
            maquina.programarRecetaDeProducto(Producto.CHOCOLATE, recetaChocolate);
            Producto.CHOCOLATE.setReceta(recetaChocolate);

            maquina.programarPrecioDeProducto(Producto.CHOCOLATE, 35);
            System.out.println("Precio de CHOCOLATE programado: " + maquina.getSeleccion().getPrecio());
            System.out.println("Receta de CHOCOLATE programada: " + maquina.getRecipiente(Ingrediente.CACAO));

            // Método getFaltantes() en MaquinaDeCafe
            List<Ingrediente> faltantes = maquina.getFaltantes();
            System.out.println("Ingredientes faltantes: " + faltantes);

            maquina.restablecer();

            maquina.setSeleccion(Producto.CHOCOLATE);
            maquina.prepararProducto(maquina.getSeleccion());
            System.out.println("Producto preparado: " + maquina.getSeleccion());
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}