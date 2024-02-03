public class Sumatoria {

    int n;
    Sumatoria(int n){
        this.n=sumatoria_f(n);
    }
    public int sumatoria_f(int n){
        if(n==1 || n==0)
            return n;
        else
            return n+sumatoria_f(n-1);
    }
    public int getN(){
        return n;
    }
}
