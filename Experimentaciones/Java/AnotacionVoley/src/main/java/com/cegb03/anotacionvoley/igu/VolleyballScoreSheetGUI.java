package com.cegb03.anotacionvoley.igu;

/**
 *
 * @author ADMIN
 */

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/**
 * The type Volleyball score sheet gui.
 */
public class VolleyballScoreSheetGUI {
    private JFrame frame;
    private JTextField teamANameField;
    private JTextField teamBNameField;
    private JButton teamAScoreButton;
    private JButton teamBScoreButton;
    private JLabel teamAScoreLabel;
    private JLabel teamBScoreLabel;
    private JPanel courtPanel; // Panel para la cancha de voleibol

    private final int teamAScore = 0;
    private final int teamBScore = 0;

    /**
     * Instantiates a new Volleyball score sheet gui.
     */
    public VolleyballScoreSheetGUI() {
        initUI();
    }

    private void initUI() {
        frame = new JFrame("Volleyball Score Sheet");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new BorderLayout());

        // Crear el panel de la cancha de voleibol
        courtPanel = new JPanel() {
            @Override
            protected void paintComponent(Graphics g) {
                super.paintComponent(g);

                // Define las dimensiones del panel
                int panelWidth = 560;
                int panelHeight = 370;

                // Set background color verde
                g.setColor(Color.GREEN);
                g.fillRect(0, 0, panelWidth, panelHeight);

                // Define las dimensiones escaladas de la cancha girada 90 grados
                int anchoCancha = 540; // Ahora el ancho será el largo original
                int largoCancha = 360; // Ahora el largo será el ancho original
                int espacioLateral = (panelWidth - anchoCancha) / 2; // Espacio adicional desde el exterior de las líneas laterales
                int espacioFondo = (panelHeight - largoCancha) / 2; // Espacio adicional desde la línea de fondo

                // Dibuja las líneas del rectángulo del terreno de juego girado
                g.setColor(Color.WHITE);
                g.drawRect(espacioLateral, espacioFondo, anchoCancha, largoCancha);

                // Dibuja la línea central (vertical)
                g.drawLine(espacioLateral + anchoCancha / 2, espacioFondo, espacioLateral + anchoCancha / 2, espacioFondo + largoCancha);

                // Dibuja la línea de 3m (vertical)
                g.setColor(Color.WHITE);
                g.drawLine(espacioLateral + anchoCancha / 3, espacioFondo, espacioLateral + anchoCancha / 3, espacioFondo + largoCancha);
                g.setColor(Color.WHITE);
                g.drawLine(espacioLateral + (2 * anchoCancha / 3), espacioFondo, espacioLateral + (2 * anchoCancha / 3), espacioFondo + largoCancha);

                // Dibuja los jugadores (posiciones aproximadas)
                dibujarJugador(g, espacioLateral + 100, espacioFondo + 130, 30, 30, "A1", Color.BLUE);
                dibujarJugador(g, espacioLateral + 200, espacioFondo + 130, 30, 30, "A6", Color.BLUE);
                dibujarJugador(g, espacioLateral + 300, espacioFondo + 130, 30, 30, "A5", Color.BLUE);
                dibujarJugador(g, espacioLateral + 100, espacioFondo + 270, 30, 30, "A2", Color.BLUE);
                dibujarJugador(g, espacioLateral + 200, espacioFondo + 270, 30, 30, "A3", Color.BLUE);
                dibujarJugador(g, espacioLateral + 300, espacioFondo + 270, 30, 30, "A4", Color.BLUE);

                dibujarJugador(g, espacioLateral + 100, espacioFondo + 500, 30, 30, "B5", Color.RED);
                dibujarJugador(g, espacioLateral + 200, espacioFondo + 500, 30, 30, "B6", Color.RED);
                dibujarJugador(g, espacioLateral + 300, espacioFondo + 500, 30, 30, "B1", Color.RED);
                dibujarJugador(g, espacioLateral + 100, espacioFondo + 360, 30, 30, "B4", Color.RED);
                dibujarJugador(g, espacioLateral + 200, espacioFondo + 360, 30, 30, "B3", Color.RED);
                dibujarJugador(g, espacioLateral + 300, espacioFondo + 360, 30, 30, "B2", Color.RED);

                // Dibuja las letras "A" y "B" en el fondo de la cancha
                g.setColor(Color.BLACK);
                Font font = new Font("Arial", Font.BOLD, 20);
                g.setFont(font);
                g.drawString("A", espacioLateral + anchoCancha + 10, panelHeight / 3);
                g.drawString("B", espacioLateral - 30, (2 * panelHeight / 3));
            }
        };




            // Configuración del layout del frame
        frame.setLayout(new BoxLayout(frame.getContentPane(), BoxLayout.X_AXIS));

        // Agregar el panel de la cancha al costado izquierdo
        frame.add(courtPanel);

        // Agregar otros componentes según tus requerimientos
        // ...

        frame.add(courtPanel, BorderLayout.CENTER);
        // Agrega otros componentes según tus requerimientos

        // Establecer el tamaño de la ventana
        frame.setSize(1200, 700);
        // Hacer que la ventana sea visible
        frame.setVisible(true);
    }

    /**
     * Mostrar interfaz.
     */
    public void mostrarInterfaz() {
        SwingUtilities.invokeLater(this::initUI);
    }
    private void dibujarJugador(Graphics g, int x, int y, int width, int height, String numeroJugador, Color color) {
        g.setColor(color);  // Configura el color antes de dibujar el jugador
        g.fillOval(x, y, width, height);

        g.setColor(Color.WHITE);
        Font font = new Font("Arial", Font.BOLD, 12);
        g.setFont(font);
        g.drawString(numeroJugador, x + 8, y + 18);
    }


//    public static void main(String[] args) {
//        SwingUtilities.invokeLater(() -> new VolleyballScoreSheetGUI().mostrarInterfaz());
//    }
}
