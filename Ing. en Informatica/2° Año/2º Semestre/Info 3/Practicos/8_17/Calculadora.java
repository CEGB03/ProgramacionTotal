import java.util.Scanner;

public class Calculadora{
    private Float x;
    private Float y;
    private Float resultado;
    public Integer operacion;
    
    public Calculadora(Float x, Float y){
        this.x=x;
        this.y=y;
    }
    public void ElegirOperacion(){
        do{
            Scanner sc = new Scanner(System.in);
            System.out.println("Ingrese segun la operacion que quiera hacer:");
            System.out.println("Ingrese 1 para sumar.");
            System.out.println("Ingrese 2 para restar.");
            System.out.println("Ingrese 3 para multiplicar.");
            System.out.println("Ingrese 4 para dividir.");
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
            case 1 -> resultado=Suma();
            case 2 -> resultado=Resta();
            case 3 -> resultado=Multiplicacion();
            case 4 -> resultado=Divicion();
            default ->{
                System.err.println("Operacion invalida");
                resultado=null;
            }
        }
    }
    public Float EjecutarOperacion(){
        return getResultado();
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
    public Float getResultado(){
        return resultado;
    }

    public Integer getOperacion() {
        return operacion;
    }

    public Float Suma(){
        System.out.println("La suma de "+getX()+" y "+getY()+" es "+(getX()+getY())+"\n");
        return (getX()+getY());
    }
    public Float Resta(){
        System.out.println("La resta de "+getX()+" y "+getY()+" es "+(getX()-getY())+"\n");
        return (getX()-getY());
    }
    public Float Multiplicacion(){
        System.out.println("La multiplicacion de "+getX()+" y "+getY()+" es "+(getX()*getY())+"\n");
        return (getX()*getY());
    }
    public Float Divicion(){
        System.out.println("La divicion de "+getX()+" y "+getY()+" es "+(getX()/getY())+"\n");
        return (getX()/getY());
    }
}
