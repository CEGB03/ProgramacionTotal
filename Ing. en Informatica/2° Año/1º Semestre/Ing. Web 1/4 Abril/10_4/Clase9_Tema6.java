import java.util.Random;

public class Clase9_Tema6 {
    public static void main(String[] args) {
        var alazar=new Random();
        int valRand= alazar.nextInt(100+1);
        System.out.println("valRand = " + valRand);
    }
}
