public class Factorial {
    int n;
    Factorial(int n){
        this.n=factorial_f(n);
    }
    public int factorial_f(int n){
        if(n==1 || n==0)
            return 1;
        else
            return n*factorial_f(n-1);
    }
    public int getN(){
        return n;
    }
}
