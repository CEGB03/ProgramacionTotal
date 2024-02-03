import java.util.Scanner;

public class Calculadora{
    private Float x;
    private Float y;
    public Integer operacion;
    
    public Calculadora(Float x, Float y){
        this.x=x;
        this.y=y;
    }
    public void ElegirOperacion(){
        do{
            Scanner sc = new Scanner(System.in);
            System.out.println("Ingrese segun la operacion que quiera hacer: \n");
            System.out.println("Ingrese 1 para sumar.\n");
            System.out.println("Ingrese 2 para restar.\n");
            System.out.println("Ingrese 3 para multiplicar.\n");
            System.out.println("Ingrese 4 para dividir.\n");
            operacion=sc.nextInt();
            //operacion=sc.nextInt();
            if (x<=0 || y<=0){
                System.err.println("No se pude dividir por 0.\n");
                if (x<=0){
                    System.out.println("Modifique el valor de  x:"+getX()+", para que sea mayor o igual a 0.\n");
                    setX(sc.nextFloat());
                }else if(y<=0){
                    System.out.println("Modifique el valor de y:"+getY()+", para que sea mayor o igual a 0.\n");
                    setY(sc.nextFloat());
                }
            } 
        }while( !(x>=0 && y>=0) );
        switch (operacion){
            case 1 -> Suma();
            case 2 -> Resta();
            case 3 -> Multiplicacion();
            case 4 -> Divicion();
            default ->System.err.println("Operacion invalida");
        }
    }
    public Float EjecutarOperacion(){
        Float a;
        switch (operacion){
            case 1 -> a=Suma();
            case 2 -> a=Resta();
            case 3 -> a=Multiplicacion();
            case 4 -> a=Divicion();
            default ->{
                System.err.println("Operacion invalida");
                a=null;
            }
        }
        return a;
    }
    public void setX(Float x){
        this.x=x;
    }
    public void setY(Float x){
        this.y=y;
    }
    public Float getX(){
        return x;
    }
    public Float getY(){
        return y;
    }
    
    public Float Suma(){
        System.out.println("La suma de "+x+" y "+y+" es "+(x+y)+"\n");
        return (x+y);
    }
    public Float Resta(){
        System.out.println("La resta de "+x+" y "+y+" es "+(x-y)+"\n");
        return (x-y);
    }
    public Float Multiplicacion(){
        System.out.println("La multiplicacion de "+x+" y "+y+" es "+(x*y)+"\n");
        return (x*y);
    }
    public Float Divicion(){
        System.out.println("La divicion de "+x+" y "+y+" es "+(x/y)+"\n");
        return (x/y);
    }
}
