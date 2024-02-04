package utils;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Formulario29 extends JFrame implements ActionListener {
    private JButton boton1, boton2;

    private JLabel label1;

    private JTextField textField1;

    public Formulario29(){
        setLayout(null);
        boton1 = new JButton("Aceptar");
        boton1.setBounds(10,80,100,30);
        add(boton1);
        boton1.addActionListener(this);

        boton2 = new JButton("Cerrar");
        boton2.setBounds(300,250,100,30);
        add(boton2);
        boton2.addActionListener(this);

        label1 = new JLabel("Usuario");
        label1.setBounds(10,10,100,30);
        add(label1);

        textField1 = new JTextField();
        textField1.setBounds(120, 17, 150, 20);
        add(textField1);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if(e.getSource() == boton1) {
            String s = textField1.getText();
            setTitle(s);
        }
        if(e.getSource() == boton2)
            System.exit(0);
    }
}
