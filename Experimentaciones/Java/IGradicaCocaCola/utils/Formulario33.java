package utils;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Formulario33 extends JFrame implements ActionListener {
    private JButton botonCerrar, botonSumar;

    private JLabel label1, label2, label3;
    private JTextField textField1, textField2;

    private String string = "";

    public Formulario33(){
        setLayout(null);
        botonCerrar = new JButton("Cerrar");
        botonCerrar.setBounds(420,320,100,30);
        add(botonCerrar);
        botonCerrar.addActionListener(this);


        label1 = new JLabel("Valor 1");
        label1.setBounds(10,10,90,20);
        add(label1);

        textField1 = new JTextField();
        textField1.setBounds(100, 10, 200, 30);
        add(textField1);


        label2 = new JLabel("Valor 2");
        label2.setBounds(10,50,100,20);
        add(label2);

        textField2 = new JTextField();
        textField2.setBounds(100, 50, 200, 30);
        add(textField2);


        botonSumar = new JButton("Sumar");
        botonSumar.setBounds(200,100,100,30);
        add(botonSumar);
        botonSumar.addActionListener(this);

        label3 = new JLabel("Resultado: ");
        label3.setBounds(10, 100, 200, 30);
        add(label3);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if(e.getSource() == botonCerrar)
            System.exit(0);
        if(e.getSource() == botonSumar){
            if ( !(textField1.getText().isBlank()) && !(textField2.getText().isBlank()) ) {
                int suma = Integer.parseInt(textField1.getText()) + Integer.parseInt(textField2.getText());
                //System.out.println("suma = " + suma);
                textField1.setText("");
                textField2.setText("");
                label3.setText("Resultado: " + suma);
            }
            else
                JOptionPane.showMessageDialog(null, "Debes ingresar ambos numeros");
        }
    }
}
