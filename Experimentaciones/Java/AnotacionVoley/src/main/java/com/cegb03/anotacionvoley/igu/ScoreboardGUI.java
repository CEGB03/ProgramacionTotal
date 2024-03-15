package com.cegb03.anotacionvoley.igu;

/**
 *
 * @author ADMIN
 */
import javax.swing.*;
import java.awt.*;

/**
 * The type Scoreboard gui.
 */
public class ScoreboardGUI {
    /**
     * The entry point of application.
     *
     * @param args the input arguments
     */
    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            JFrame frame = new JFrame("Tabla de Puntuaciones");
            frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            frame.add(createScoreboardPanel());
            frame.setSize(800, 400);
            frame.setVisible(true);
        });
    }

    private static JPanel createScoreboardPanel() {
        JPanel panel = new JPanel(new GridLayout(1, 1));
        panel.add(createScoreboardTable());
        return panel;
    }

    private static JTable createScoreboardTable() {
        String[] columnNames = {"START time", "TEAM A I", "TEAM A II", "TEAM A III", "TEAM A IV", "TEAM A V", "TEAM A VI",
                "POINTS", "TEAM B I", "TEAM B II", "TEAM B III", "TEAM B IV", "TEAM B V", "TEAM B VI", "END time", "POINTS"};

        Object[][] data = new Object[12][16]; // Adjust the size as needed

        JTable table = new JTable(data, columnNames);
        table.setRowHeight(30);

        // Customize table appearance (e.g., font, alignment, etc.) if desired

        return table;
    }
}

