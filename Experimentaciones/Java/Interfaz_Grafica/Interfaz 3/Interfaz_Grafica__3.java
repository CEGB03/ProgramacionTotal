import javax.swing.*;
public class Interfaz_Grafica__3 extends JFrame {
    public Interfaz_Grafica__3(){
        setLayout(null);
    }
    public static void main(String[] args) {
        Interfaz_Grafica__3 interfaz__3=new Interfaz_Grafica__3();
        interfaz__3.setBounds(0,0,800,600);//      (inicio en x, inicio en y, ancho, largo)
        interfaz__3.setVisible(true);//      Para que sea visible en la pantalla
        interfaz__3.setLocationRelativeTo(null);//      Para que aparezca al medio de la pantalla
        interfaz__3.setResizable(false);//      Para no poder mod las dimensiones
    }
}
