import java.util.ArrayList;
import java.util.Random;

public class ArregloInverso {
    int n;
    Random random=new Random();
    ArrayList arrayList;
    String s="";
    ArregloInverso(int n){
        this.n=n;
        arrayList=new ArrayList<>();
        setArrayList(getN());
        n-=1;
        for (int ii=0; ii<arrayList.size(); ii++)
            System.out.print(arrayList.get(ii)+" | ");
        System.out.println();
        System.out.println(arregloInverso_f(n));
    }
    public String arregloInverso_f(int n){
        if(n==0)
            return s+= arrayList.get(n)+".";
        //n-=1;
        return s+= arrayList.get(n)+", "+arregloInverso_f(n-1);
    }

    public void setArrayList(int n) {
        for (int ii=0; ii<n; ii++)
            arrayList.add(random.nextInt(100));
    }

    public int getN(){
        return n;
    }

}
