package utils;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Formulario36 extends JFrame implements ActionListener {
    private JButton botonCerrar;

    private JMenuBar menuBar;
    private JMenu menu;
    private JMenuItem menuItemRojo, menuItemVerde, menuItemAzul;

    public Formulario36(){
        setLayout(null);
        botonCerrar = new JButton("Cerrar");
        botonCerrar.setBounds(420,300,100,30);
        add(botonCerrar);
        botonCerrar.addActionListener(this);

        menuBar = new JMenuBar();
        setJMenuBar(menuBar);

        menu = new JMenu("Opciones");
        menuBar.add(menu);

        menuItemRojo = new JMenuItem("Rojo");
        menuItemRojo.addActionListener(this);
        menu.add(menuItemRojo);

        menuItemVerde = new JMenuItem("Verde");
        menuItemVerde.addActionListener(this);
        menu.add(menuItemVerde);

        menuItemAzul = new JMenuItem("Azul");
        menuItemAzul.addActionListener(this);
        menu.add(menuItemAzul);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        Container fondo = this.getContentPane();
        if(e.getSource() == botonCerrar)
            System.exit(0);
        if (e.getSource() == menuItemRojo)
            fondo.setBackground(new Color(255,0,0));
        if (e.getSource() == menuItemVerde)
            fondo.setBackground(new Color(0,255,0));
        if (e.getSource() == menuItemAzul)
            fondo.setBackground(new Color(0,0,255));
    }
}
