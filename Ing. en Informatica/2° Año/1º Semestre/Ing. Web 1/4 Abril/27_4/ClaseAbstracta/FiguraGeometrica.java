package ClaseAbstracta;

public abstract class FiguraGeometrica {
    //Son abstractas cuando no fueron definidas, ya que pueden variar dependiendo de sus hijos que las definen de
    //manera distinta
    private String name;
    
    public abstract double area();
    
    public FiguraGeometrica(String name) {
        this.name = name;
    }
    
    public static double areaPromedio(FiguraGeometrica arr[]) {
        double sum = 0;
        
        for(int ii=0; ii<arr.length; ii++) {
            sum += arr[ii].area();
        }
        return sum/arr.length;
    }
    
    public FiguraGeometrica() {
        
    }
    
    public String toString() {
        return name + " area = " + area();
    }
    
    public void setName(String name) {
        this.name = name;
    }
    
    public String getName() {
        return name;
    }
}
