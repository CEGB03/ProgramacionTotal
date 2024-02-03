import java.util.Scanner;

/* Ingresar:
            descripcion
            idProducto
            precio
            precioEnvio
 */
public class Clase_4__Ejercicio1_2 {
    public static void main(String[] args) {
        String descripcion=" ";
        int idProducto=0,  precioEnvio=0;
        float precio=0f;
        var consola=new Scanner(System.in);
        System.out.println("Bienvenido");
        System.out.print("Ingrese una descripcion del Producto:");
        descripcion=consola.nextLine();
        System.out.print("Ingrese el Precio del Producto: ");
        precio=consola.nextFloat();
        System.out.print("Ingrese el idPrecio del Producto: ");
        idProducto=consola.nextInt();
        if (precio>=8000)
            precioEnvio=0;
        else {
            System.out.print("Ingrese el Precio del Envio: ");
            precioEnvio=consola.nextInt();
        }




        System.out.println("Los datos de su producto son los siguientes:");
        System.out.print("Su descripcion es: "+descripcion);
        System.out.print(", su Precio es: $"+precio);
        System.out.print(", su identificador es: N°"+idProducto);
        System.out.print(" y el Precio del envio es: $"+precioEnvio);



    }
}
