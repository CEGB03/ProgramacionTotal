package utils;

import javax.swing.*;
import java.awt.event.*;

public class Formulario27 extends JFrame implements ActionListener {
    private JButton boton1;

    public Formulario27(){
        setLayout(null);
        boton1 = new JButton("Cerrar");
        boton1.setBounds(300,250,100,30);
        add(boton1);
        boton1.addActionListener(this);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if(e.getSource() == boton1)
            System.exit(0);
    }
}
