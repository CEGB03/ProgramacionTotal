 
 
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;

public class Licencia extends JFrame implements ActionListener, ChangeListener{

    private JLabel labelTyC, labelMarcaLogo;

    private JCheckBox checkBoxAceptar;

    private JButton buttonAceptar, buttonNoAceptar;

    private JScrollPane scrollPane;

    private JTextArea textAreaTyC;
    private String nombre = "";

    public Licencia(String nombre){
        this.nombre=nombre;
        setLayout(null);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setTitle("Licencia de Uso");
        setIconImage(new ImageIcon(getClass().getResource("images/icon.png")).getImage());

        labelTyC = new JLabel("TERMINOS Y CONDICIONES");
        labelTyC.setBounds(215, 5, 200, 30);
        labelTyC.setFont(new Font("Andale Mono", 1, 14));
        labelTyC.setForeground(new Color(0,0,0));
        add(labelTyC);

        textAreaTyC = new JTextArea();
        textAreaTyC.setEditable(false);
        textAreaTyC.setFont(new Font("Andale Mono", 0, 9));
        textAreaTyC.setText("\n\n          TERMINOS Y CONDICIONES" +
                "\n\n            A.  PROHIBIDA SU VENTA O DISTRIBUCION SIN AUTORIZACION DE LA GEEKIPEDIA DE ERNESTO." +
                "\n            B.  PROHIBIDA LA ALTERACION DEL CODIGO FUENTE O DISEÑO DE LAS INTERFACES GRAFICAS." +
                "\n            C.  LA GEEKIPEDIA DE ERNESTO NO SE HACE RESPONSABLE DEL MAL USO DE ESTE SOFTWARE." +
                "\n\n          LOS ACUERDOS LEGALES EXPUESTOS ACONTINUACION RIGEN EL USO QUE USTED HAGA DE ESTE SOFTWARE" +
                "\n          (LA GEEKIPEDIA DE ERNESTO Y EL AUTOR ERNESTO), NO SE RESPONSABILIZAN DEL USO QUE USTED" +
                "\n          HAGA CON ESTE SOFTWARE Y SUS SERVICIOS. PARA ACEPTAR ESTOS TERMINOS HAGA CLIC EN (ACEPTO)" +
                "\n          SI USTED NO ACEPTA ESTOS TERMINOS, HAGA CLIC EN (NO ACEPTO) Y NO UTILICE ESTE SOFTWARE." +
                "\n\n          PARA MAYOR INFORMACION SOBRE NUESTROS PRODUCTOS O SERVICIOS, POR FAVOR VISITE" +
                "\n          http://www.youtube.com/ernestoperezm");
        scrollPane = new JScrollPane(textAreaTyC);
        scrollPane.setBounds(10, 40, 575, 200);
        add(scrollPane);

        checkBoxAceptar = new JCheckBox("Yo " + nombre + " Acepto");
        checkBoxAceptar.setBounds(10, 250, 300,30);
        checkBoxAceptar.addChangeListener(this);
        add(checkBoxAceptar);

        buttonAceptar = new JButton("Continuar");
        buttonAceptar.setBounds(10,290,100,30);
        buttonAceptar.addActionListener(this);
        buttonAceptar.setEnabled(false);
        add(buttonAceptar);

        buttonNoAceptar = new JButton("No Acepto");
        buttonNoAceptar.setBounds(120,290,100,30);
        buttonNoAceptar.addActionListener(this);
        buttonNoAceptar.setEnabled(true);
        add(buttonNoAceptar);

        ImageIcon imageIcon = new ImageIcon("ProyectoFinal/images/coca-cola.png");
        labelMarcaLogo = new JLabel(imageIcon);
        labelMarcaLogo.setBounds(315,135,300,300);
        add(labelMarcaLogo);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == buttonNoAceptar){
            setVisible(false);
            Bienvenida Bienvenida = new Bienvenida();
            Bienvenida.setBounds(0,0,350,450);//coordenadas de inicio, y tamanio de ventana
            Bienvenida.setResizable(false);//Permiso para redimencionar la ventana
            Bienvenida.setVisible(true);//Hace que sea visible la ventana
            Bienvenida.setLocationRelativeTo(null);//Ingora las coordenadas y lo lanza al medio de la pantalla
        }
        if (e.getSource() == buttonAceptar) {
            setVisible(false);
            Principal principal = new Principal(nombre);
            principal.setBounds(0,0,640,535);//coordenadas de inicio, y tamanio de ventana
            principal.setResizable(false);//Permiso para redimencionar la ventana
            principal.setVisible(true);//Hace que sea visible la ventana
            principal.setLocationRelativeTo(null);//Ingora las coordenadas y lo lanza al medio de la pantalla
        }
    }

    @Override
    public void stateChanged(ChangeEvent e) {
        if (checkBoxAceptar.isSelected()){
            buttonNoAceptar.setEnabled(false);
            buttonAceptar.setEnabled(true);
        }
        else {
            buttonNoAceptar.setEnabled(true);
            buttonAceptar.setEnabled(false);
        }
    }
}
