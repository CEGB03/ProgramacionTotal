package pruebas;
import utils.ExpresionesMatemáticas;
import utils.Palindromo;

public class ExpresionesMatemáticasTest {
    public void Pruebas() throws Exception {
        String cadenaPruebas = "(58*62-(5*3+4)";
        ExpresionesMatemáticas expresionesMatemáticasTest = new ExpresionesMatemáticas(cadenaPruebas);
        if (expresionesMatemáticasTest.esEquilibrada())
            System.out.println(expresionesMatemáticasTest.getCadena()+" esta equilibrada.");
        else
            System.out.println(expresionesMatemáticasTest.getCadena()+" no esta equilibrada.");
    }
    public void expresionUsuario(String s) throws Exception {
        ExpresionesMatemáticas expresionesMatemáticasTest = new ExpresionesMatemáticas(s);
        if (expresionesMatemáticasTest.esEquilibrada())
            System.out.println(expresionesMatemáticasTest.getCadena()+" esta equilibrada.");
        else
            System.out.println(expresionesMatemáticasTest.getCadena()+" no esta equilibrada.");
    }
}