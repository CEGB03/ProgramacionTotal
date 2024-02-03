package ClaseAbstracta;

public class TestFiguras2 {
    public static void main(String[] args) {
        Rectangulo r = new Rectangulo(10, 5);
        Triangulo t = new Triangulo(10, 5);
        FiguraGeometrica arr[] = {r, t};
        double promedio = FiguraGeometrica.areaPromedio(arr);



        System.out.println(r);
        System.out.println(t);
        System.out.println("promedio = " + promedio);
    }
}
