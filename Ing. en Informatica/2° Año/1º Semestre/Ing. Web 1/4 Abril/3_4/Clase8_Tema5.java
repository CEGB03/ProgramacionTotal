public class Clase8_Tema5 {
    static void cambiarValor(int[] argu){
        argu[0]=20;
    }
    public static void main(String[] args) {
        int[] argu={10};
        System.out.println("Antes de la funcion: "+argu[0]);
        cambiarValor(argu);
        System.out.println("Despues de la funcion: "+argu[0]);

    }
}
