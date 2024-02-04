package utils;

import javax.swing.*;/*
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;*/

public class Formulario30 extends JFrame /*implements ActionListener */{
    //private JButton botonCerrar;

    private JTextField textField1;

    private JTextArea textArea1;

    public Formulario30(){
        setLayout(null);
        /*botonCerrar = new JButton("Cerrar");
        botonCerrar.setBounds(300,250,100,30);
        add(botonCerrar);
        botonCerrar.addActionListener(this);*/

        textField1 = new JTextField();
        textField1.setBounds(10, 10, 200, 30);
        add(textField1);

        textArea1 = new JTextArea();
        textArea1.setBounds(10, 50, 400, 300);
        add(textArea1);
    }
/*
    @Override
    public void actionPerformed(ActionEvent e) {
        if(e.getSource() == botonCerrar)
            System.exit(0);
    }*/
}
