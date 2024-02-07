 

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Bienvenida extends JFrame implements ActionListener {

    private JTextField textFieldNombre;

    private JLabel labelMarcaLogo, labelSistContVaca, labelNombre, labelCopyRight;

    private JButton buttonIngresar, buttonCerrar;

    public Bienvenida(){
        setLayout(null);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setTitle("Bienvenido");
        getContentPane().setBackground(new Color(255,0,0));
        setIconImage(new ImageIcon(getClass().getResource("images/icon.png")).getImage());

        ImageIcon imageIcon = new ImageIcon("ProyectoFinal/images/logo-coca.png");
        labelMarcaLogo = new JLabel(imageIcon);
        labelMarcaLogo.setBounds(25,15,300,150);
        add(labelMarcaLogo);

        labelSistContVaca = new JLabel("Sistema de Control de Vacacional");
        labelSistContVaca.setBounds(25, 135, 300, 30);
        labelSistContVaca.setFont(new Font("Andale Mono", 3, 18));
        labelSistContVaca.setForeground(new Color(255,255,255));
        add(labelSistContVaca);

        labelNombre = new JLabel("Ingrese su Nombre");
        labelNombre.setBounds(45, 212, 200, 30);
        labelNombre.setFont(new Font("Andale Mono", 1, 12));
        labelNombre.setForeground(new Color(255,255,255));
        add(labelNombre);

        labelCopyRight = new JLabel("©2024 The Coca-Cola Company");
        labelCopyRight.setBounds(85, 375, 300, 30);
        labelCopyRight.setFont(new Font("Andale Mono", 1, 12));
        labelCopyRight.setForeground(new Color(255,255,255));
        add(labelCopyRight);

        textFieldNombre = new JTextField();
        textFieldNombre.setBounds(45, 240, 255, 25);
        textFieldNombre.setBackground(new Color(224,224,224));
        textFieldNombre.setFont(new Font("Andale Mono", 1, 14));
        textFieldNombre.setForeground(new Color(255,0,0));
        add(textFieldNombre);

        buttonIngresar = new JButton("Ingresar");
        buttonIngresar.setBounds(125, 280, 100, 30);
        buttonIngresar.setBackground(new Color(255,255,255));
        buttonIngresar.setFont(new Font("Andale Mono", 1, 14));
        buttonIngresar.setForeground(new Color(255,0,0));
        buttonIngresar.addActionListener(this);
        add(buttonIngresar);

        buttonCerrar = new JButton("Cerrar");
        buttonCerrar.setBounds(125, 330, 100, 30);
        buttonCerrar.setBackground(new Color(255,255,255));
        buttonCerrar.setFont(new Font("Andale Mono", 1, 14));
        buttonCerrar.setForeground(new Color(255,0,0));
        buttonCerrar.addActionListener(this);
        add(buttonCerrar);
    }
    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == buttonIngresar) {
            if (textFieldNombre.getText().isBlank())
                JOptionPane.showMessageDialog(null, "Debes ingresar tu nombre");
            else {
                setVisible(false);
                String nombre = textFieldNombre.getText().toString();
                Licencia licencia = new Licencia(nombre);
                licencia.setBounds(0,0,600,380);//coordenadas de inicio, y tamanio de ventana
                licencia.setResizable(false);//Permiso para redimencionar la ventana
                licencia.setVisible(true);//Hace que sea visible la ventana
                licencia.setLocationRelativeTo(null);//Ingora las coordenadas y lo lanza al medio de la pantalla
            }
        }
        if(e.getSource() == buttonCerrar)
            System.exit(0);
    }
    public static void main(String[] args) {
        Bienvenida Bienvenida = new Bienvenida();
        Bienvenida.setBounds(0, 0, 350, 450);//coordenadas de inicio, y tamanio de ventana
        Bienvenida.setResizable(false);//Permiso para redimencionar la ventana
        Bienvenida.setVisible(true);//Hace que sea visible la ventana
        Bienvenida.setLocationRelativeTo(null);//Ingora las coordenadas y lo lanza al medio de la pantalla
    }
}
