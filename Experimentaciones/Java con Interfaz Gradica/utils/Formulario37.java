package utils;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Formulario37 extends JFrame implements ActionListener {

    private JMenuBar menuBar;
    private JMenu menu, menuColores, menuTams;
    private JMenuItem menuItemRojo, menuItemVerde, menuItemAzul, menuItemCerrar, menuItemTamChico, menuItemTamMediano;

    public Formulario37(){
        setLayout(null);

        menuBar = new JMenuBar();
        setJMenuBar(menuBar);

        menu = new JMenu("Opciones");
        menuBar.add(menu);

        //      Menu Colores
        menuColores = new JMenu("Color Fondo");
        menu.add(menuColores);

        menuItemRojo = new JMenuItem("Rojo");
        menuItemRojo.addActionListener(this);
        menuColores.add(menuItemRojo);

        menuItemVerde = new JMenuItem("Verde");
        menuItemVerde.addActionListener(this);
        menuColores.add(menuItemVerde);

        menuItemAzul = new JMenuItem("Azul");
        menuItemAzul.addActionListener(this);
        menuColores.add(menuItemAzul);

        //      Menu Tams
        menuTams = new JMenu("Tamaños");
        menu.add(menuTams);

        menuItemTamChico = new JMenuItem("300x200");
        menuItemTamChico.addActionListener(this);
        menuTams.add(menuItemTamChico);

        menuItemTamMediano = new JMenuItem("640x480");
        menuItemTamMediano.addActionListener(this);
        menuTams.add(menuItemTamMediano);

        //      Item Cerrar
        menuItemCerrar = new JMenuItem("Cerrar");
        menuItemCerrar.addActionListener(this);
        menu.add(menuItemCerrar);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        Container fondo = this.getContentPane();
        if(e.getSource() == menuItemCerrar)
            System.exit(0);
        if (e.getSource() == menuItemRojo)
            fondo.setBackground(new Color(255,0,0));
        if (e.getSource() == menuItemVerde)
            fondo.setBackground(new Color(0,255,0));
        if (e.getSource() == menuItemAzul)
            fondo.setBackground(new Color(0,0,255));
        if (e.getSource() == menuItemTamChico)
            setSize(300,200);
        if (e.getSource() == menuItemTamMediano)
            setSize(640,480);
    }
}
