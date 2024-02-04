package utils;

import javax.swing.*;
import java.awt.event.*;

public class Formulario32 extends JFrame implements ActionListener {
    private JButton botonCerrar, botonAgregar;

    private JTextField textField1;

    private JTextArea textArea1;

    private JScrollPane scrollPane1;

    private String string = "", comparacion = "";

    public Formulario32(){
        setLayout(null);
        botonCerrar = new JButton("Cerrar");
        botonCerrar.setBounds(420,320,100,30);
        add(botonCerrar);
        botonCerrar.addActionListener(this);

        textField1 = new JTextField();
        textField1.setBounds(10, 10, 200, 30);
        add(textField1);

        botonAgregar = new JButton("Agregar");
        botonAgregar.setBounds(250,10,100,30);
        add(botonAgregar);
        botonAgregar.addActionListener(this);

        textArea1 = new JTextArea();
        scrollPane1 = new JScrollPane(textArea1);
        scrollPane1.setBounds(10, 50, 400, 300);
        add(scrollPane1);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if(e.getSource() == botonCerrar)
            System.exit(0);
        if(e.getSource() == botonAgregar){
            if (! (textField1.getText().isBlank()) ) {
                string += textField1.getText() + "\n";
                textArea1.setText(string);
                textField1.setText("");
            }
            else {
                textField1.setText("");
            }
        }
    }
}
