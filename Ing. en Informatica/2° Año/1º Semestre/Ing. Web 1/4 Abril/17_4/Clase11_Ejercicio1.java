public class Clase11_Ejercicio1 {
    public static void main(String[] args) {
        Fecha_Eje f1=new Fecha_Eje("9/4/2003");
        System.out.println("f.getDia() = " + f1.getDia());
        System.out.println("f.getMes() = " + f1.getMes());
        System.out.println("f.getAnio() = " + f1.getAnio());
        Fecha_Eje f2=new Fecha_Eje();
        System.out.println(f2);
        f2.setDia(8);
        f2.setMes(12);
        f2.setAnio(2085);
        System.out.println(f2);

        System.out.println(f1);
    }
}
