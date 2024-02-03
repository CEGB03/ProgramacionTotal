public class Clase8_Tema5_2 {
    static void cambiarValor(String argu){
        argu="Adios";
    }
    public static void main(String[] args) {
        var argu="Hola";
        System.out.println("Antes de la funcion: "+argu);
        cambiarValor(argu);
        System.out.println("Despues de la funcion: "+argu);

    }
}
