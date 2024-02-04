package utils;

import javax.swing.*;
import javax.swing.event.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Formulario40 extends JFrame implements ChangeListener {

    private JRadioButton radioButton1, radioButton2, radioButton3;

    private ButtonGroup buttonGroup;

    public Formulario40() {
        setLayout(null);

        buttonGroup = new ButtonGroup();

        radioButton1 = new JRadioButton("640x480");
        radioButton1.setBounds(10,20,100,30);
        radioButton1.addChangeListener(this);
        add(radioButton1);
        buttonGroup.add(radioButton1);

        radioButton2 = new JRadioButton("800x600");
        radioButton2.setBounds(10,70,100,30);
        radioButton2.addChangeListener(this);
        add(radioButton2);
        buttonGroup.add(radioButton2);

        radioButton3 = new JRadioButton("1024x768");
        radioButton3.setBounds(10,120,100,30);
        radioButton3.addChangeListener(this);
        add(radioButton3);
        buttonGroup.add(radioButton3);
    }

    public void stateChanged(ChangeEvent e){
        if(radioButton1.isSelected()){
            setSize(640,480);
        }
        if(radioButton2.isSelected()){
            setSize(800,600);
        }
        if(radioButton3.isSelected()){
            setSize(1024,768);
        }
    }
}