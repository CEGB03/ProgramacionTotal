package igu;

import javax.swing.*;


public class Estudio {
    private JPanel panel1;
    private JRadioButton aRadioButton;
    private JRadioButton bRadioButton;
    private JRadioButton cRadioButton;
    private JRadioButton dRadioButton;
    private JTextArea acaLaPrimerPreguntaTextArea;
    private JButton limpiarButton;
    private JButton button2;
    private JButton button3;
    private JButton comprobarButton;

    public Estudio() {
    }

    private void btnIniciarExamenActionPerformed(java.awt.event.ActionEvent evt) {
        Simulacro estudi = new Simulacro();
        estudi.setVisible(true);
        estudi.setLocationRelativeTo(null);
        setVisible(false);
    }
}
