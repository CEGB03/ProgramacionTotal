 
 
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Principal extends JFrame implements ActionListener {

    private JMenuBar menuBar;

    private JMenu menuOpciones, menuCalcular, menuAcercaDe, menuColorFondo;

    private JMenuItem menuItemCalculo, menuItemRojo, menuItemNegro, menuItemMorado, menuItemDesarrollador, menuItemSalir, menuItemLimpiar;

    private JLabel labelMarcaLogo, labelBienvenido, labelTitulo, labelNombre, labelApellido, labelDpto, labelAntiguedad, labelResultado, labelLegal;

    private JTextField textFieldNombreTrabajador, textFieldApellido;

    private JComboBox comboBoxDpto, comboBoxAntiguedad;

    private JScrollPane scrollPane;

    private JTextArea textArea;

    private String nombre = "";

    public Principal(String nombre){
        this.nombre= nombre;
        setLayout(null);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setTitle("Pagina Principal");
        getContentPane().setBackground(new Color(255,0,0));
        setIconImage(new ImageIcon(getClass().getResource("images/icon.png")).getImage());

        menuBar = new JMenuBar();
        menuBar.setBackground(new Color(255,0,0));
        setJMenuBar(menuBar);

        menuOpciones = new JMenu("Opciones");
        menuOpciones.setBackground(new Color(255,0,0));
        menuOpciones.setFont(new Font("Andale Mono", 1, 14));
        menuOpciones.setForeground(new Color(255,255,255));
        menuBar.add(menuOpciones);

        menuCalcular = new JMenu("Calcular");
        menuCalcular.setBackground(new Color(255,0,0));
        menuCalcular.setFont(new Font("Andale Mono", 1, 14));
        menuCalcular.setForeground(new Color(255,255,255));
        menuBar.add(menuCalcular);

        menuItemCalculo = new JMenuItem("Calcular Vacaciones");
        menuItemCalculo.setBackground(new Color(255,0,0));
        menuItemCalculo.setFont(new Font("Andale Mono", 1, 14));
        menuItemCalculo.setForeground(new Color(255,255,255));
        menuItemCalculo.addActionListener(this);
        menuCalcular.add(menuItemCalculo);

        menuAcercaDe = new JMenu("Acerca de");
        menuAcercaDe.setBackground(new Color(255,0,0));
        menuAcercaDe.setFont(new Font("Andale Mono", 1, 14));
        menuAcercaDe.setForeground(new Color(255,255,255));
        menuBar.add(menuAcercaDe);

        menuColorFondo = new JMenu("Color Fondo");
        menuOpciones.add(menuColorFondo);

        menuItemRojo = new JMenuItem("Rojo");
        menuItemRojo.setBackground(new Color(255,0,0));
        menuItemRojo.setFont(new Font("Andale Mono", 1, 14));
        menuItemRojo.setForeground(new Color(255,255,255));
        menuItemRojo.addActionListener(this);
        menuColorFondo.add(menuItemRojo);

        menuItemNegro = new JMenuItem("Negro");
        menuItemNegro.setBackground(new Color(255,0,0));
        menuItemNegro.setFont(new Font("Andale Mono", 1, 14));
        menuItemNegro.setForeground(new Color(255,255,255));
        menuItemNegro.addActionListener(this);
        menuColorFondo.add(menuItemNegro);

        menuItemMorado = new JMenuItem("Morado");
        menuItemMorado.setBackground(new Color(255,0,0));
        menuItemMorado.setFont(new Font("Andale Mono", 1, 14));
        menuItemMorado.setForeground(new Color(255,255,255));
        menuItemMorado.addActionListener(this);
        menuColorFondo.add(menuItemMorado);

        menuItemDesarrollador = new JMenuItem("Desarrollado por");
        menuItemDesarrollador.setBackground(new Color(255,0,0));
        menuItemDesarrollador.setFont(new Font("Andale Mono", 1, 14));
        menuItemDesarrollador.setForeground(new Color(255,255,255));
        menuItemDesarrollador.addActionListener(this);
        menuAcercaDe.add(menuItemDesarrollador);

        menuItemLimpiar = new JMenuItem("Limpiar campos");
        menuItemLimpiar.setBackground(new Color(255,0,0));
        menuItemLimpiar.setFont(new Font("Andale Mono", 1, 14));
        menuItemLimpiar.setForeground(new Color(255,255,255));
        menuItemLimpiar.addActionListener(this);
        menuOpciones.add(menuItemLimpiar);

        menuItemSalir = new JMenuItem("Salir");
        menuItemSalir.setBackground(new Color(255,0,0));
        menuItemSalir.setFont(new Font("Andale Mono", 1, 14));
        menuItemSalir.setForeground(new Color(255,255,255));
        menuItemSalir.addActionListener(this);
        menuOpciones.add(menuItemSalir);

        ImageIcon imageIcon = new ImageIcon("ProyectoFinal/images/logo-coca.png");
        labelMarcaLogo = new JLabel(imageIcon);
        labelMarcaLogo.setBounds(5,5,250,100);
        add(labelMarcaLogo);

        labelBienvenido = new JLabel("Bienvenido " + nombre);
        labelBienvenido.setBounds(280, 30, 300, 50);
        labelBienvenido.setFont(new Font("Andale Mono", 1, 32));
        labelBienvenido.setForeground(new Color(255, 255, 255));
        add(labelBienvenido);

        labelTitulo = new JLabel("Datos del trabajador para el calculo de sus vacaciones");
        labelTitulo.setBounds(45, 140, 900, 25);
        labelTitulo.setFont(new Font("Andale Mono", 0, 22));
        labelTitulo.setForeground(new Color(255, 255, 255));
        add(labelTitulo);

        labelNombre = new JLabel("Nombre Completo");
        labelNombre.setBounds(25, 188, 180, 25);
        labelNombre.setFont(new Font("Andale Mono", 1, 12));
        labelNombre.setForeground(new Color(255, 255, 255));
        add(labelNombre);

        textFieldNombreTrabajador = new JTextField();
        textFieldNombreTrabajador.setBounds(25, 213, 150, 25);
        textFieldNombreTrabajador.setBackground(new Color(224, 224, 224));
        textFieldNombreTrabajador.setFont(new Font("Andale Mono", 1, 14));
        textFieldNombreTrabajador.setForeground(new Color(255,0,0));
        add(textFieldNombreTrabajador);

        labelApellido = new JLabel("Apellido Completo");
        labelApellido.setBounds(25, 248, 180, 25);
        labelApellido.setFont(new Font("Andale Mono", 1, 12));
        labelApellido.setForeground(new Color(255, 255, 255));
        add(labelApellido);

        textFieldApellido = new JTextField();
        textFieldApellido.setBounds(25, 273, 150, 25);
        textFieldApellido.setBackground(new Color(224, 224, 224));
        textFieldApellido.setFont(new Font("Andale Mono", 1, 14));
        textFieldApellido.setForeground(new Color(255,0,0));
        add(textFieldApellido);

        labelDpto = new JLabel("Seleccione un Departamento");
        labelDpto.setBounds(220, 188, 180, 25);
        labelDpto.setFont(new Font("Andale Mono", 1, 12));
        labelDpto.setForeground(new Color(255, 255, 255));
        add(labelDpto);

        comboBoxDpto = new JComboBox();
        comboBoxDpto.setBounds(220, 213, 220, 25);
        comboBoxDpto.setBackground(new Color(224, 224, 224));
        comboBoxDpto.setFont(new Font("Andale Mono", 1, 14));
        comboBoxDpto.setForeground(new Color(255, 0, 0));
        add(comboBoxDpto);
        comboBoxDpto.addItem("");
        comboBoxDpto.addItem("Atencion al Cliente");
        comboBoxDpto.addItem("Departamento de logistica");
        comboBoxDpto.addItem("Departamento de Gerencia");

        labelAntiguedad = new JLabel("Seleccione la Antiguedad");
        labelAntiguedad.setBounds(220, 248, 180, 25);
        labelAntiguedad.setFont(new Font("Andale Mono", 1, 12));
        labelAntiguedad.setForeground(new Color(255, 255, 255));
        add(labelAntiguedad);

        comboBoxAntiguedad = new JComboBox();
        comboBoxAntiguedad.setBounds(220, 273, 220, 25);
        comboBoxAntiguedad.setBackground(new Color(224, 224, 224));
        comboBoxAntiguedad.setFont(new Font("Andale Mono", 1, 14));
        comboBoxAntiguedad.setForeground(new Color(255, 0, 0));
        comboBoxAntiguedad.addItem("");
        comboBoxAntiguedad.addItem("1 año de servicio");
        comboBoxAntiguedad.addItem("2 a 6 año de servicio");
        comboBoxAntiguedad.addItem("7 año o mas de servicio");
        add(comboBoxAntiguedad);

        labelResultado = new JLabel("Resultado del Calculo");
        labelResultado.setBounds(220, 307, 180, 25);
        labelResultado.setFont(new Font("Andale Mono", 1, 12));
        labelResultado.setForeground(new Color(255, 255, 255));
        add(labelResultado);

        textArea = new JTextArea();
        textArea.setEditable(false);
        textArea.setBackground(new Color(224, 224, 224));
        textArea.setFont(new Font("Andale Mono", 1, 11));
        textArea.setForeground(new Color(255, 0, 0));
        textArea.setText("\n    Aqui aparece el resultado del calculo de las vacaciones.");
        scrollPane = new JScrollPane(textArea);
        scrollPane.setBounds(220, 333, 385, 90);
        add(scrollPane);

        labelLegal = new JLabel("©2024 The Coca-Cola Company | Todos los derechos reservados");
        labelLegal.setBounds(135, 445, 500, 30);
        labelLegal.setFont(new Font("Andale Mono", 1, 11));
        labelLegal.setForeground(new Color(255, 255, 255));
        add(labelLegal);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        Container fondo = this.getContentPane();
        if (e.getSource() == menuItemCalculo){
            if (!textFieldNombreTrabajador.getText().isBlank() && (!textFieldApellido.getText().isBlank()) &&  (comboBoxDpto.getSelectedIndex() != 0) && (comboBoxAntiguedad.getSelectedIndex() != 0)){
                if (comboBoxDpto.getSelectedIndex()==1){
                    if (comboBoxAntiguedad.getSelectedIndex()==1)
                        textArea.setText("\n    El trabajador "+ textFieldNombreTrabajador.getText() + " " + textFieldApellido.getText()
                                        + "\n    que trabaja hace "+ comboBoxAntiguedad.getSelectedItem().toString()
                                        + "\n    en " + comboBoxDpto.getSelectedItem().toString() + " tiene 6 dias de vacaciones.");
                    if (comboBoxAntiguedad.getSelectedIndex()==2)
                        textArea.setText("\n    El trabajador "+ textFieldNombreTrabajador.getText() + " " + textFieldApellido.getText()
                                        + "\n    que trabaja hace "+ comboBoxAntiguedad.getSelectedItem().toString()
                                        + "\n    en " + comboBoxDpto.getSelectedItem().toString() + " tiene 14 dias de vacaciones.");
                    if (comboBoxAntiguedad.getSelectedIndex()==3)
                        textArea.setText("\n    El trabajador "+ textFieldNombreTrabajador.getText() + " " + textFieldApellido.getText()
                                        + "\n    que trabaja hace "+ comboBoxAntiguedad.getSelectedItem().toString()
                                        + "\n    en " + comboBoxDpto.getSelectedItem().toString() + " tiene 20 dias de vacaciones.");
                }
                if (comboBoxDpto.getSelectedIndex()==2){
                    if (comboBoxAntiguedad.getSelectedIndex()==1)
                        textArea.setText("\n    El trabajador "+ textFieldNombreTrabajador.getText() + " " + textFieldApellido.getText()
                                        + "\n    que trabaja hace "+ comboBoxAntiguedad.getSelectedItem().toString()
                                        + "\n    en " + comboBoxDpto.getSelectedItem().toString() + " tiene 7 dias de vacaciones.");
                    if (comboBoxAntiguedad.getSelectedIndex()==2)
                        textArea.setText("\n    El trabajador "+ textFieldNombreTrabajador.getText() + " " + textFieldApellido.getText()
                                        + "\n    que trabaja hace "+ comboBoxAntiguedad.getSelectedItem().toString()
                                        + "\n    en " + comboBoxDpto.getSelectedItem().toString() + " tiene 15 dias de vacaciones.");
                    if (comboBoxAntiguedad.getSelectedIndex()==3)
                        textArea.setText("\n    El trabajador "+ textFieldNombreTrabajador.getText() + " " + textFieldApellido.getText()
                                        + "\n     que trabaja hace "+ comboBoxAntiguedad.getSelectedItem().toString()
                                        + "\n    en " + comboBoxDpto.getSelectedItem().toString() + " tiene 22 dias de vacaciones.");
                }
                if (comboBoxDpto.getSelectedIndex()==3){
                    if (comboBoxAntiguedad.getSelectedIndex()==1)
                        textArea.setText("\n    El trabajador "+ textFieldNombreTrabajador.getText() + " " + textFieldApellido.getText()
                                        + "\n     que trabaja hace "+ comboBoxAntiguedad.getSelectedItem().toString()
                                        + "\n    en " + comboBoxDpto.getSelectedItem().toString() + " tiene 10 dias de vacaciones.");
                    if (comboBoxAntiguedad.getSelectedIndex()==2)
                        textArea.setText("\n    El trabajador "+ textFieldNombreTrabajador.getText() + " " + textFieldApellido.getText()
                                        + "\n     que trabaja hace "+ comboBoxAntiguedad.getSelectedItem().toString()
                                        + "\n    en " + comboBoxDpto.getSelectedItem().toString() + " tiene 20 dias de vacaciones.");
                    if (comboBoxAntiguedad.getSelectedIndex()==3)
                        textArea.setText("\n    El trabajador "+ textFieldNombreTrabajador.getText() + " " + textFieldApellido.getText()
                                        + "\n     que trabaja hace "+ comboBoxAntiguedad.getSelectedItem().toString()
                                        + "\n    en " + comboBoxDpto.getSelectedItem().toString() + " tiene 30 dias de vacaciones.");
                }
            }
            else
                JOptionPane.showMessageDialog(null, "Complete todos los campos");
        }
        if (e.getSource() == menuItemRojo) {
            fondo.setBackground(new Color(255, 0, 0));
            menuBar.setBackground(new Color(255,0,0));
        }
        if (e.getSource() == menuItemNegro) {
            fondo.setBackground(new Color(0, 0, 0));
            menuBar.setBackground(new Color(0,0,0));
        }
        if (e.getSource() == menuItemMorado) {
            fondo.setBackground(new Color(90, 0, 255));
            menuBar.setBackground(new Color(90,0,255));
        }
        if (e.getSource() == menuItemLimpiar){
            textFieldApellido.setText("");
            textFieldNombreTrabajador.setText("");
            comboBoxAntiguedad.setSelectedIndex(0);
            comboBoxDpto.setSelectedIndex(0);
            textArea.setText("\n    Aqui aparece el resultado del calculo de las vacaciones.");
        }
        if (e.getSource() == menuItemSalir){
            setVisible(false);
            Bienvenida Bienvenida = new Bienvenida();
            Bienvenida.setBounds(0,0,350,450);//coordenadas de inicio, y tamanio de ventana
            Bienvenida.setResizable(false);//Permiso para redimencionar la ventana
            Bienvenida.setVisible(true);//Hace que sea visible la ventana
            Bienvenida.setLocationRelativeTo(null);//Ingora las coordenadas y lo lanza al medio de la pantalla
        }
        if (e.getSource() == menuItemDesarrollador){
            JOptionPane.showMessageDialog(null, "Desarrollado por CEGB03"/*\n\nVisita mi perfil en GitHub:*/);
        }
    }
}
