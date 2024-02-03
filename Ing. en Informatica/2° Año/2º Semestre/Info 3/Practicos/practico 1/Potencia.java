public class Potencia {
    int b;
    int p;
    int r;
    Potencia(int b, int p){

        this.r=potencia_f(b,p);
    }
    public int potencia_f(int b, int p){
        if(p==1)
            return b;
        else if (p == 0) {
            return 1;
        } else
            return b*potencia_f(b, p-1);
    }
    public int getR(){
        return r;
    }
}
