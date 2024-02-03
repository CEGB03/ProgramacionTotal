package pruebas;
import utils.Palindromo;

public class PalindromoTest {
    public void cadena1() throws Exception {
        String cadena1 = "Anita LaVa lA tINa";
        //System.out.println("Se evaluara si la cadena "+cadena1+" entra en la definicion de palindromo.");
        Palindromo palindromo=new Palindromo(cadena1);
        if (palindromo.esPalindromo()) {
            System.out.println("La "+palindromo.getCadena()+" es un palíndromo.");
        } else {
            System.out.println("La "+palindromo.getCadena()+" no es un palíndromo.");
        }
    }
    public void cadena2() throws Exception {
        String cadena2 = "Hola Mundo";
        //System.out.println("Se evaluara si la cadena "+cadena2+" entra en la definicion de palindromo.");
        Palindromo palindromo = new Palindromo(cadena2);
        if (palindromo.esPalindromo()) {
            System.out.println("La "+palindromo.getCadena()+" es un palíndromo.");
        } else {
            System.out.println("La "+palindromo.getCadena()+" no es un palíndromo.");
        }
    }
    public void cadena3() throws Exception {
        String cadena3 = "nEu Que N";
        //System.out.println("Se evaluara si la cadena "+cadena3+" entra en la definicion de palindromo.");
        Palindromo palindromo = new Palindromo(cadena3);
        if (palindromo.esPalindromo()) {
            System.out.println("La "+palindromo.getCadena()+" es un palíndromo.");
        } else {
            System.out.println("La "+palindromo.getCadena()+" no es un palíndromo.");
        }
    }
    public void cadenaUsuario(String s) throws Exception {
        Palindromo palindromo=new Palindromo(s);
        //System.out.println("Se evaluara si la cadena "+s+" entra en la definicion de palindromo.");
        if (palindromo.esPalindromo()) {
            System.out.println("La "+palindromo.getCadena()+" es un palíndromo.");
        } else {
            System.out.println("La "+palindromo.getCadena()+" no es un palíndromo.");
        }
    }
}
