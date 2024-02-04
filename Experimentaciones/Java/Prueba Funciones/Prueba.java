import java.util.Scanner;
import java.lang.Math;
public class Prueba {
    public static void main(String[] args) {
        Scanner entrada=new Scanner(System.in);
        int operacion=0, tamArreglo1D=0;
        char letra=241;
        Funciones fun=new Funciones();

        System.out.println("Ingrese la funcion que quiera utilizar: ");
        System.out.println("Ingrese 1 para sumar.");
        System.out.println("Ingrese 2 para restar.");
        System.out.println("Ingrese 3 para multiplicar.");
        System.out.println("Ingrese 4 para dividir.");
        System.out.println("Ingrese 5 para comprobar la praridad.");
        System.out.println("Ingrese 6 para abrir una calculadora.");
        System.out.println("Ingrese 7 para hacer el perimetro.");
        System.out.println("Ingrese 8 para hacer la area.");
        operacion=entrada.nextInt();
        switch (operacion){
            case 1:
                fun.Sumar(entrada);
                break;
            case 2:
                fun.Restar(entrada);
                break;
            case 3:
                fun.Multiplicar(entrada);
                break;
            case 4:
                fun.Dividir(entrada);
                break;
            case 5:
                fun.Paridad(entrada);
                break;
            case 6:
                fun.Calculadora(entrada);
                break;
            case 7:
                fun.Perimetro(entrada);
                break;
            case 8:
                fun.Area(entrada);
                break;
        }
    }
}
class Funciones{
    void Paridad(Scanner entrada){
        int x=0;
        System.out.println("Ingrese un numero para comprobar si es o no es par...");
        x=entrada.nextInt();
        if(x%2==0)
            System.out.println("\nEl numero "+x+" es par");
        if(x%2==1)
            System.out.println("\nEl numero "+x+" no es par");
    }
    //	Funcicion de Suma
    void Sumar(Scanner entrada){
        float suma=0.0f, x=0.0f,y=0.0f;
        System.out.println("Ingrese el primer numero para operar.");
        x=entrada.nextFloat();
        System.out.println("Ingrese el segundo numero para operar.");
        y=entrada.nextFloat();
        suma=x+y;
        System.out.println("La suma de "+x+" y "+y+" es "+suma+".");
    }
    //	Funcicion de Resta
    void Restar(Scanner entrada){
        float resta=0.0f, x=0.0f,y=0.0f;
        System.out.println("Ingrese el primer numero para operar.");
        x=entrada.nextFloat();
        System.out.println("Ingrese el segundo numero para operar.");
        y=entrada.nextFloat();
        resta=x-y;
        System.out.println("La resta de "+x+" y "+y+" es "+resta+".");
    }
    //	Funcicion de Multiplicacion
    void Multiplicar(Scanner entrada){
        float multiplicacion=0.0f, x=0.0f,y=0.0f;
        System.out.println("Ingrese el primer numero para operar.");
        x=entrada.nextFloat();
        System.out.println("Ingrese el segundo numero para operar.");
        y=entrada.nextFloat();
        multiplicacion=x*y;
        System.out.println("La multiplicacion de "+x+" y "+y+" es "+multiplicacion+".");
    }
    //	Funcicion de Divicion
    void Dividir(Scanner entrada){
        float divicion=0.0f, x=0.0f,y=0.0f;
        System.out.println("Ingrese el primer numero para operar.");
        x=entrada.nextFloat();
        System.out.println("Ingrese el segundo numero para operar.");
        y=entrada.nextFloat();
        divicion=x/y;
        System.out.println("La divicion de "+x+" y "+y+" es "+divicion+".");
    }
    //	Funcion de Calculadora Completa
    void Calculadora(Scanner entrada){
        float suma=0, resta=0, divicion=0, multiplicacion=0, x=0, y=0;
        int operacion=0;
        System.out.println("Ingrese segun lo que quiera hacer: ");
        System.out.println("Ingrese 1 para sumar.");
        System.out.println("Ingrese 2 para restar.");
        System.out.println("Ingrese 3 para multiplicar.");
        System.out.println("Ingrese 4 para dividir.");
        System.out.println("Ingrese el primer numero para operar.");
        operacion=entrada.nextInt();
        System.out.println("Ingrese el primer numero para operar.");
        x=entrada.nextFloat();
        System.out.println("Ingrese el segundo numero para operar.");
        y=entrada.nextFloat();
        switch(operacion){
            case 1:
                suma=x+y;
                System.out.println("La suma de "+x+" y "+y+" es "+suma+".");
                break;
            case 2:
                resta=x-y;
                System.out.println("La resta de "+x+" y "+y+" es "+resta+".");
                break;
            case 3:
                multiplicacion=x*y;
                System.out.println("La multiplicacion de "+x+" y "+y+" es "+multiplicacion+".");
                break;
            case 4:
                divicion=x/y;
                System.out.println("La divicion de "+x+" y "+y+" es "+divicion+".");
                break;
        }
    }
    //	Funcion para el Perimetro
    void Perimetro(Scanner entrada){
        //	hay que agregar #include <math.h> ya que usa funciones matematicas
        float x=0, y=0, perimetro=0, pi=(float)Math.PI;
        int operacion=0;
        System.out.println("Ingrese segun lo que quiera hacer: ");
        System.out.println("Ingrese 1 para realizar el Perimetro del Cuadrado.");
        System.out.println("Ingrese 2 para realizar el Perimetro del Rectangulo.");
        System.out.println("Ingrese 3 para realizar el Perimetro del Circulo.");
        operacion=entrada.nextInt();
        switch(operacion){
            case 1:
                System.out.println("ingrese el valor del lado");
                x=entrada.nextFloat();
                System.out.println("Ingrese el valor de la altura");
                y=entrada.nextFloat();
                perimetro=x*2+y*2;
                System.out.println("El Perimetro del Cuadrado es: "+perimetro);
                break;
            case 2:
                System.out.println("ingrese el valor del lado");
                x=entrada.nextFloat();
                System.out.println("Ingrese el valor de la altura");
                y=entrada.nextFloat();
                perimetro=x*2+y*2;
                System.out.println("El Perimetro del Rectangulo es: "+perimetro);
                break;
            case 3:
                System.out.println("ingrese el valor del radio");
                x=entrada.nextFloat();
                perimetro=(float) 2*pi*x;
                System.out.println("El Perimetro del Circulo es: "+perimetro);
                break;
        }
    }
    //	Funcion para el Area
    void Area(Scanner entrada){
        //	hay que agregar #include <math.h> ya que usa funciones matematicas
        float x=0, y=0, area=0, pi=(float)Math.PI, raiz=0;
        int operacion=0;
        System.out.println("Ingrese segun lo que quiera hacer: ");
        System.out.println("Ingrese 1 para realizar el Area del cuadrado.");
        System.out.println("Ingrese 2 para realizar el Area del rectangulo.");
        System.out.println("Ingrese 3 para realizar el Area del circulo.");
        operacion=entrada.nextInt();
        switch(operacion){
            case 1:
                System.out.println("ingrese el valor del lado");
                x=entrada.nextFloat();
                System.out.println("Ingrese el valor de la altura");
                y=entrada.nextFloat();
                area=x*y;
                System.out.println("El Area del Cuadrado es: "+area);
                break;
            case 2:
                System.out.println("ingrese el valor del lado");
                x=entrada.nextFloat();
                System.out.println("Ingrese el valor de la altura");
                y=entrada.nextFloat();
                area=x*y;
                System.out.println("El Area del Rectangulo es: "+area);
                break;
            case 3:
                System.out.println("ingrese el valor del radio");
                x=entrada.nextFloat();
                area=pi*(float) Math.pow(x,2);
                System.out.println("El Area del Cuadrado es: "+area);
                break;
        }
    }
    int Sumar_Arreglo1D(Scanner entrada, int arreglo_Suma[ARREGLO1D]){
        int suma=0;
        for(int ii=0; ii<ARREGLO1D; ii++){;
            suma+=arreglo_Suma[ii];
        }
        System.out.println("La suma del arreglo completo es: "+suma);
        return(suma);
    }
    float Dividir_devolucion(Scanner entrada, float x, float y){
        float divicion=x/y;
        return(divicion);
    }
    void Promedio_Arreglos1D(Scanner entrada,int arreglo_Suma[ARREGLO1D]){
        int suma=0, divi=ARREGLO1D;
        float promedio=0;
        for(int ii=0; ii<ARREGLO1D; ii++){;
            suma+=arreglo_Suma[ii];
        }
        promedio=Dividir_devolucion(entrada, suma, divi);
        System.out.println("El promedio del arreglo es: "+promedio);
    }
    void Mostrar_Elemento_Arreglo1D(Scanner entrada, int ArregloEje4Fun[ARREGLO1D]){
        for(int ii=0; ii<ARREGLO1D; ii++){
            System.out.println("Elemento "+ii+" del arrego es "+ArregloEje4Fun[ii]);
        }
    }
}