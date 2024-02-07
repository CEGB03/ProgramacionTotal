package utils;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Formulario35 extends JFrame implements ItemListener, ActionListener {

    private JButton botonCerrar, botonRGB;

    private JLabel label1, label2, label3;

    private JComboBox comboBox1, comboBox2, comboBox3;

    public Formulario35() {
        setLayout(null);

        botonCerrar = new JButton("Cerrar");
        botonCerrar.setBounds(420,320,100,30);
        add(botonCerrar);
        botonCerrar.addActionListener(this);

        label1 = new JLabel("Rojo");
        label1.setBounds(10, 10, 90, 20);
        add(label1);

        comboBox1 = new JComboBox();
        comboBox1.setBounds(100, 10, 100, 20);// x, y, largo, ancho
        add(comboBox1);

        label2 = new JLabel("Verde");
        label2.setBounds(10, 50, 100, 20);
        add(label2);

        comboBox2 = new JComboBox();
        comboBox2.setBounds(100, 50, 100, 20);// x, y, largo, ancho
        add(comboBox2);

        label3 = new JLabel("Azul");
        label3.setBounds(10, 90, 200, 30);
        add(label3);

        comboBox3 = new JComboBox();
        comboBox3.setBounds(100, 90, 100, 20);// x, y, largo, ancho
        add(comboBox3);

        for (int ii = 0; ii < 256; ii++) {
            comboBox1.addItem(String.valueOf(ii));
            comboBox2.addItem(String.valueOf(ii));
            comboBox3.addItem(String.valueOf(ii));
        }
        comboBox1.addItemListener(this);
        comboBox2.addItemListener(this);
        comboBox3.addItemListener(this);
        
        botonRGB = new JButton("Fijar Color");
        botonRGB.setBounds(10, 200, 100, 30);
        add(botonRGB);
        botonRGB.addActionListener( this);

    }

    @Override
    public void itemStateChanged(ItemEvent e) {
        if (e.getSource() == comboBox1) {
            String s = comboBox1.getSelectedItem().toString();
            setTitle(s);
        }

    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if(e.getSource() == botonCerrar)
            System.exit(0);
        if (e.getSource() == botonRGB){
            int rojo = Integer.parseInt(comboBox1.getSelectedItem().toString());
            int verde = Integer.parseInt(comboBox2.getSelectedItem().toString());
            int azul = Integer.parseInt(comboBox3.getSelectedItem().toString());

            Color colorBoton = new Color(rojo, verde, azul);

            botonRGB.setBackground(colorBoton);
        }
    }
}
