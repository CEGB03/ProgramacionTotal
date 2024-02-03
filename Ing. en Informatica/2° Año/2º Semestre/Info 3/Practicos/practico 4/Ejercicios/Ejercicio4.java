package Ejercicios;

import utils.StackList;

public class Ejercicio4 {
    private int num=0;
    private String numero="";
    private StackList<Integer> stackList;
    public Ejercicio4(int n) {
        this.num = n;
        stackList=new StackList<Integer>();
        representacion(num);
        guardado();
        System.out.println("El "+num+" en decimal es equivalente a "+numero+" en binario");
    }
    private void representacion(int num){
        if (num!=0) {
            stackList.push(num % 2);
            representacion(num/2);
        }
    }
    private void guardado(){
        while (!stackList.isEmpty()) {
            numero += stackList.top();
            stackList.pop();
        }
    }
}
