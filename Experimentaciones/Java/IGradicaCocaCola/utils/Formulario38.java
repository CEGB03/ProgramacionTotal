package utils;

import javax.swing.*;
import javax.swing.event.*;

public class Formulario38 extends JFrame implements ChangeListener {
    private JCheckBox checkBox1, checkBox2, checkBox3;

    public Formulario38(){
        setLayout(null);

        checkBox1 = new JCheckBox("Ingles");
        checkBox1.setBounds(10,10,150,30);
        checkBox1.addChangeListener(this);
        add(checkBox1);

        checkBox2 = new JCheckBox("Portugues");
        checkBox2.setBounds(10,50,150,30);
        checkBox2.addChangeListener(this);
        add(checkBox2);

        checkBox3 = new JCheckBox("Italiano");
        checkBox3.setBounds(10,90,150,30);
        checkBox3.addChangeListener(this);
        add(checkBox3);
    }

    @Override
    public void stateChanged(ChangeEvent e) {
        String s = "";
        if (checkBox1.isSelected())
            s += "Ingles - ";
        if (checkBox2.isSelected())
            s += "Portugues - ";
        if (checkBox3.isSelected())
            s += "Italiano";
        setTitle(s);

    }
}
