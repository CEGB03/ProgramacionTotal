import java.text.DecimalFormat;

public class Clase9_Tema8 {
    public static void main(String[] args) {
        var num = 8.5;
        var redondeado=Math.round(num);
        System.out.println("El numero "+num+" redondeado es: "+redondeado);

        var patron="#";
        var formatoDecimal=new DecimalFormat(patron);
        var truncado=formatoDecimal.format(num);
        System.out.println("Valor "+num+" truncado "+truncado);
        System.out.println("Valor "+num+" truncado "+formatoDecimal.format(num));
        var trunca3= (int)num;
        System.out.println("trunca3 = " + trunca3);
        //      Todas las formas son equivalentes...
    }
}
