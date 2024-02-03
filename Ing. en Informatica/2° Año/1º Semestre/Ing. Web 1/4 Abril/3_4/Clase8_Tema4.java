public class Clase8_Tema4 {
    static void cambiarValor(int argu){
        argu=20;
    }
    public static void main(String[] args) {
        var argu=10;
        System.out.println("Antes de la funcion: "+argu);
        cambiarValor(argu);
        System.out.println("Despues de la funcion: "+argu);

    }
}
