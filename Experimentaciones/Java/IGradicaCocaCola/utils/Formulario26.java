package utils;

import javax.swing.*;

public class Formulario26 extends JFrame {
    private JLabel label1;
    private JLabel label2;

    public Formulario26(){
        setLayout(null);
        label1 = new JLabel("Interfaz Grafica");
        label1.setBounds(10,20,300,20);
        add(label1);
        label2 = new JLabel("version 0.0.3");
        label2.setBounds(10,100,100,20);
        add(label2);
    }
}
