public class Clase9_Tema5 {
    public static void main(String[] args) {
        int a=10, b=20;
        System.out.println(a+b);
        System.out.println(String.valueOf(a)+Integer.toString(b));
        String resultado1=String.format("%d %d",a, b);
        System.out.println(resultado1);

        String resultado2=String.format("%d%d",a, b);
        System.out.println(resultado2);

        float c=a, d=b;
        String resultado3=String.format("%f %f",c, d);
        System.out.println(resultado3);


        String resultado4=String.format("%f%f",c, d);
        System.out.println(resultado4);
    }
}
