import java.util.Scanner;
public class Prueba{
    static Integer repetir;
    static Scanner sc = new Scanner(System.in);
    static Historial historial;
    public static void main(String[] args) {
        historial=new Historial();
        do {
            System.out.println("Seleccione segun desee: \n1. Realizar un Calculo.\n2. Ver el historial.\n3. Salir.");
            repetir = sc.nextInt();
            switch (repetir) {
                case 1 -> calcular();
                case 2 -> historialFun();
                case 3 -> System.out.println("Adios.");
                default -> System.err.println("Operacion invalida");
            }
        } while (repetir != 3);
    }
    public static void calcular(){
        Float x, y, resultado;
        do {
            System.out.println("Ingrese un primer numero.");
            x=sc.nextFloat();
            System.out.println("Ingrese un segundo numero.");
            y=sc.nextFloat();
            Calculadora cal=new Calculadora(x,y);
            cal.ElegirOperacion();
            resultado=cal.EjecutarOperacion();
            System.out.println("El resultado fue: "+resultado);
            historial.setX(String.valueOf(x));
            historial.setOperacion(Integer.valueOf(String.valueOf(cal.getOperacion())));
            historial.setY(String.valueOf(y));
            historial.setResultado(String.valueOf(resultado));
            historial.agregarCalculo();
            System.out.println("Desea volver a hacer otro calculo?\nIngrese 1 para salir.");
            repetir=sc.nextInt();
        }while (repetir!=1);
    }
    public static void historialFun(){
        try{
            if (historial.getHisto().isEmpty()){
                throw new Exception("Historial Vacio.");

            }

            System.out.println(historial.getHisto());
        }catch (Exception e){
            e.printStackTrace();
        }
    }
}
