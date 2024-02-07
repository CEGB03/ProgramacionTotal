package utils;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Formulario31 extends JFrame implements ActionListener {
    private JButton botonCerrar;

    private JTextField textField1;

    private JTextArea textArea1;

    private JScrollPane scrollPane1;

    public Formulario31(){
        setLayout(null);
        botonCerrar = new JButton("Cerrar");
        botonCerrar.setBounds(420,320,100,30);
        add(botonCerrar);
        botonCerrar.addActionListener(this);

        textField1 = new JTextField();
        textField1.setBounds(10, 10, 200, 30);
        add(textField1);

        textArea1 = new JTextArea();
        scrollPane1 = new JScrollPane(textArea1);
        scrollPane1.setBounds(10, 50, 400, 300);
        add(scrollPane1);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if(e.getSource() == botonCerrar)
            System.exit(0);
    }
}
