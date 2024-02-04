import javax.swing.*;

public class Interfaz_Grafica__2 extends JFrame {
    public Interfaz_Grafica__2(){
        setLayout(null);

    }

    public static void main(String[] args) {
        Interfaz_Grafica__2 interfaz__2=new Interfaz_Grafica__2();
        interfaz__2.setBounds(0,0,800,600);//      (inicio en x, inicio en y, ancho, largo)
        interfaz__2.setVisible(true);//      Para que sea visible en la pantalla
        interfaz__2.setLocationRelativeTo(null);//      Para que aparezca al medio de la pantalla
        interfaz__2.setResizable(false);//      Para no poder mod las dimensiones

    }
}
