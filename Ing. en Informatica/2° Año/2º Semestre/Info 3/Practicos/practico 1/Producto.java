public class Producto {
    int b;
    int p;
    int r;
    Producto(int b, int p){

        this.r=producto_f(b,p);
    }
    public int producto_f(int b, int p){
        if(p==1)
            return b;
        else if (p == 0) {
            return 1;
        } else
            return b+producto_f(b, p-1);
    }
    public int getR(){
        return r;
    }
}