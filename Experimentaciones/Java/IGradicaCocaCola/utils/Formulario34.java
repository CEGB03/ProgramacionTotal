package utils;

import javax.swing.*;
import java.awt.event.*;

public class Formulario34 extends JFrame implements ItemListener {
    //private JButton botonCerrar;

    private JComboBox comboBox1;

    public Formulario34(){
        setLayout(null);
        /*
        botonCerrar = new JButton("Cerrar");
        botonCerrar.setBounds(420,320,100,30);
        add(botonCerrar);
        botonCerrar.addActionListener(this);
        */
        comboBox1 = new JComboBox();
        comboBox1.setBounds(10,10, 200, 20);// x, y, largo, ancho
        add(comboBox1);

        comboBox1.addItem(1);
        comboBox1.addItem(2);
        comboBox1.addItem(3);
        comboBox1.addItem(4);
        comboBox1.addItem(5);
        comboBox1.addItemListener(this);
    }

    @Override
    public void itemStateChanged(ItemEvent e) {
        if (e.getSource() == comboBox1){
            String s = comboBox1.getSelectedItem().toString();
            setTitle(s);
        }
    }
/*
    @Override
    public void actionPerformed(ActionEvent e) {
        if(e.getSource() == botonCerrar)
            System.exit(0);
    }*/
}
