public class Clase8_Tema1 {
    public static void main(String[] args) {
        inicio://       Etiqueta, no aconsejable usar.
        for (int ii = 0; ii < 10; ii++) {
            if(ii%2==0)
                continue inicio;
            System.out.println("ii = " + ii);
        }
    }
}
