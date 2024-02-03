public class Cuenta {
    public String nombre, tipo;
    private int numero;
    private double saldo;

    public void depositar(double depositar) {
        saldo += depositar;
    }

    public void retirar(double retirar) {
        if (saldo >= retirar)
            saldo -= retirar;
    }

    public void imprimir() {
        System.out.println("La cuenta de " + tipo + " N°" + numero + " a nombre de " + nombre + " tiene un saldo disponible de " + saldo);
    }
    public void setNumero(int num){
        numero=num;
    }
    public int getNumero() {
        return numero;
    }
    public void setSaldo(double saldo){
        this.saldo=saldo;
    }
    public double getSaldo(){
        return saldo;
    }
}
