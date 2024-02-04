public class ASCII {
    public static void main(String[] args) {
        char codigo=0;
        for (int ii=0 ; ii<255 ; ii++){
            System.out.println("El numero "+ii+" es el simbolo "+codigo);
            codigo++;
        }
        System.out.println("No hay mas codigos...");
    }
}
