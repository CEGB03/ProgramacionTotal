public class RepresentacionBinaria {
    int n;
    int cont=0;
    RepresentacionBinaria(int n){
        this.n=n;
        representacion(getN());
    }
    public int representacion(int n){
        if (n==0)
            return cont;
        else if (n % 2 == 1) {
            cont++;
            return representacion(n/2);
        }
        return representacion(n/2);

    }

    public int getCont() {
        return cont;
    }

    public int getN() {
        return n;
    }
}
