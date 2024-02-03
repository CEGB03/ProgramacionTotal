package ClaseAbstracta;

public class TestFiguras {
    public static void main(String[] args) {
        FiguraGeometrica arr[] = {new Rectangulo(10,5),
            new Triangulo(10, 5)};
        double promedio = FiguraGeometrica.areaPromedio(arr);
        
        Rectangulo r = new Rectangulo(10, 5);
        Triangulo t = new Triangulo(10, 5);
        
        System.out.println(r);
        System.out.println(t);
        System.out.println("promedio = " + promedio);
    }
}

