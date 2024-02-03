public class Conteo {
    int n;
    String s="";
    Conteo(int n){
        this.n=n;
        System.out.println(conteo_f(n));
    }
    public String conteo_f(int n){
        if(n==1)
            return s+= n+".";
        return s+= n+", "+conteo_f(n-1);
    }
    public int getN(){
        return n;
    }
}
