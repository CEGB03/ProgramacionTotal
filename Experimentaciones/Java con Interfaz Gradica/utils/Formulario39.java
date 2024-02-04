package utils;

import javax.swing.*;
import java.awt.event.*;
import javax.swing.event.*;

public class Formulario39 extends JFrame implements ActionListener, ChangeListener {
    private JButton botonCerrar, botonAcpetar;

    private JCheckBox checkBoxAceptarTyC;
    private JLabel labelTyC;

    public Formulario39(){
        setLayout(null);
        botonCerrar = new JButton("Cerrar");
        botonCerrar.setBounds(180,120,100,30);
        add(botonCerrar);
        botonCerrar.addActionListener(this);

        labelTyC = new JLabel("Terminos y Condiciones");
        labelTyC.setBounds(10,10,150,20);
        add(labelTyC);

        checkBoxAceptarTyC = new JCheckBox("Acpto");
        checkBoxAceptarTyC.setBounds(10,50,150,30);
        checkBoxAceptarTyC.addChangeListener(this);
        add(checkBoxAceptarTyC);

        botonAcpetar = new JButton("Acpetar");
        botonAcpetar.setBounds(10,120,100,30);
        add(botonAcpetar);
        botonAcpetar.addActionListener(this);
        botonAcpetar.setEnabled(false);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if(e.getSource() == botonCerrar)
            System.exit(0);
        if(e.getSource() == botonAcpetar){
            setTitle("Acptaste TyC");
        }
    }
    @Override
    public void stateChanged(ChangeEvent e) {
        botonAcpetar.setEnabled(checkBoxAceptarTyC.isSelected());
    }
}
