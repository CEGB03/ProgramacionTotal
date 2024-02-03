package utils;

public class Nodo {
    public int data;
    public Nodo father;
    public Nodo left;
    public Nodo right;
    public int color; // 0 para negro, 1 para rojo

    public int getData() {return data;}

    public Nodo getFather() {return father;}

    public Nodo getLeft() {return left;}

    public Nodo getRight() {return right;}

    public int getColor() {return color;}

    public void setColor(int color) {this.color = color;}

    public void setData(int data) {this.data = data;}

    public void setFather(Nodo father) {this.father = father;}

    public void setLeft(Nodo left) {this.left = left;}

    public void setRight(Nodo right) {this.right = right;}
}