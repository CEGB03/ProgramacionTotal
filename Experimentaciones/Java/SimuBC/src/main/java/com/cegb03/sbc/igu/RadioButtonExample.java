/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.cegb03.simulacrobuenconductor.igu;
import javax.swing.*;
import java.awt.*;

public class RadioButtonExample extends JFrame {

    public RadioButtonExample() {
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new FlowLayout());

        // Ejemplo de texto largo
        String longText = "Este es un texto largo que debería envolverse si la propiedad lineWrap estuviera disponible.";

        // Crear un JLabel con HTML para lograr lineWrap
        JLabel radioButtonLabel = new JLabel("<html><body style='width: 150px;'>" + longText + "</body></html>");
        JRadioButton radioButton = new JRadioButton();
        radioButtonLabel.setLabelFor(radioButton);

        // Agregar el radio button y el label al frame
        add(radioButtonLabel);
        add(radioButton);

        pack();
        setLocationRelativeTo(null);
        setVisible(true);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> new RadioButtonExample());
    }
}
