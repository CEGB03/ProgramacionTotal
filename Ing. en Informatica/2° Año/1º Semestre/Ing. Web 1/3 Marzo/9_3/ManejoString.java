public class ManejoString {
    public static void main(String[] args) {
        var usuario = "Manejo";
        var titulo = "Ingeniero";
        var union = usuario + " " + titulo;
        System.out.println(union);

        var i = 3;
        var j = 4;
        System.out.println(i + j);  //  Suma las variables
        System.out.println(i + j + usuario);  //  Suma las variables y agreda el string
        System.out.println(usuario + i + j);  //  No suma las variables si el string esta antes
        System.out.println(usuario + (i + j));  //  Si suma las variables si el string esta antes, pero las variables en parentesis
    }
}
