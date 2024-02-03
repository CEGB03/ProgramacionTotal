package utils;

public class PalindromoEma<AnyType> {
    /**
     * Tamaño del arreglo.
     */
    private Integer size;

    private AnyType array[];
    private AnyType temp[];
    private String string;
    private String tempString;
    public PalindromoEma(String s){
        this.string=s.toLowerCase().replace(" ", "");
        this.tempString=String.valueOf(s);
        System.out.println(string.toString());
        System.out.println(tempString.toString());
        comprobarPalindromoString();


    }
    public PalindromoEma(AnyType[] array) {
        this.size = array.length;
        this.array = array.clone();
        System.out.println("Array Primario:");
        System.out.println(imprimir(array));
        System.out.println("Array Clon:");
        clonadoArray();
        System.out.println(imprimir(temp));
        comprobarPalindromo();
    }
    private void comprobarPalindromoString(){
        if (string.equals(tempString))
            System.out.println(string+" es palindromo");
        else
            System.out.println(string+" no es palindromo");
    }
    private void comprobarPalindromo(){
        if (array.equals(temp))
            System.out.println(imprimir(array).replace("\n", "")+"es palindromo:");
        else
            System.out.println(imprimir(array).replace("\n", "")+"no es palindromo");
    }
    private void clonadoArray(){
        temp=array.clone();
        int jj=0;
        for (int ii=array.length-1; ii>=0; ii--) {
            temp[ii] = array[jj];
            jj++;
        }
    }
    public String imprimir(AnyType []arrayImprimir){
        String s = "";
        for (int ii=0; ii<size; ii++)
            s+=arrayImprimir[ii]+" ";
        s+="\n";
        return s;
    }
}