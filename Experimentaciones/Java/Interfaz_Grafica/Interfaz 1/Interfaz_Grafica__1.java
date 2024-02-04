import javax.swing.*;

public class Interfaz_Grafica__1 extends JFrame {
    private JLabel label_1;
    public Interfaz_Grafica__1(){
        setLayout(null);
        label_1=new JLabel("Interfaz Grafica de Ema 1");
        label_1.setBounds(12,20,200,300);
        add(label_1);
    }

    public static void main(String[] args) {
        Interfaz_Grafica__1 interfaz__1=new Interfaz_Grafica__1();
        interfaz__1.setBounds(0,0,400,300);
        interfaz__1.setVisible(true);
        interfaz__1.setLocationRelativeTo(null);
    }
}
