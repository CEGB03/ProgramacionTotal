package cegb03.anotacionvoley.logica;
import javax.swing.*;

/**
 * The type Main.
 */
public class Main {

    /**
     * The entry point of application.
     *
     * @param args the input arguments
     */
    public static void main(String[] args) {
        // Crear los campos de texto para los dos valores
        JTextField valor1Field = new JTextField();
        JTextField valor2Field = new JTextField();

        // Crear un panel para contener los campos de texto
        JPanel panel = new JPanel();
        panel.setLayout(new BoxLayout(panel, BoxLayout.Y_AXIS));
        panel.add(new JLabel("Ingrese el primer valor:"));
        panel.add(valor1Field);
        panel.add(new JLabel("Ingrese el segundo valor:"));
        panel.add(valor2Field);

        // Mostrar el cuadro de diálogo y capturar la respuesta del usuario
        int result = JOptionPane.showConfirmDialog(null, panel, "Ingrese dos valores", JOptionPane.OK_CANCEL_OPTION);

        // Verificar si el usuario presionó "Aceptar" (OK)
        if (result == JOptionPane.OK_OPTION) {
            // Obtener los valores ingresados por el usuario
            String valor1 = valor1Field.getText();
            String valor2 = valor2Field.getText();

            // Mostrar los valores ingresados por el usuario
            System.out.println("Primer valor ingresado: " + valor1);
            System.out.println("Segundo valor ingresado: " + valor2);
        }
    }
}
