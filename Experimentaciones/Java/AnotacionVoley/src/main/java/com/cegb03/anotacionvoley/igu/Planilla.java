package com.cegb03.anotacionvoley.igu;

import cegb03.anotacionvoley.logica.Equipo;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;

import static java.lang.Math.*;

/**
 * The type Planilla.
 */
public class Planilla extends javax.swing.JFrame {
    
    private Equipo equipoA = new Equipo();
    private Equipo equipoB = new Equipo();
    private final String textoPuntaje = "Puntaje: ";
    private final int desplazamiento = 90;
    private final int xJugadorASaque = 40;
    private final int xJugadorBSaque = 500;
    private final int xJugadorA = xJugadorASaque + desplazamiento - 30;
    private final int xJugadorB = xJugadorBSaque - desplazamiento - 10;
    private final int yJugadorA = 275;
    private final int yJugadorB = 55;
    private JLabel jugadorA1, jugadorA2, jugadorA3, jugadorA4, jugadorA5, jugadorA6;
    private JLabel jugadorB1, jugadorB2, jugadorB3, jugadorB4, jugadorB5, jugadorB6;

    /**
     * Instantiates a new Planilla.
     */
    public Planilla() {
        equipoA.setSaque(true);
        //mICargarR5ActionPerformed(evt);
        initComponents();
        crearJugadores();
    }
    /*
    AUXILIAR
    jpCancha = new javax.swing.JPanel(){
            @Override
            protected void paintComponent(Graphics g) {
                super.paintComponent(g);
                crearCanchaVoley(g, getWidth(), getHeight());
            }
        };
     */

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel1 = new javax.swing.JPanel();
        btnPuntoA = new javax.swing.JButton();
        btnPuntoB = new javax.swing.JButton();
        lbPuntajeA = new javax.swing.JLabel();
        lbPuntajeB = new javax.swing.JLabel();
        jpCancha = new javax.swing.JPanel(){
            @Override
            protected void paintComponent(Graphics g) {
                super.paintComponent(g);
                crearCanchaVoley(g, getWidth(), getHeight());
            }
        };
        btnSaqueA = new javax.swing.JButton();
        btnSaqueB = new javax.swing.JButton();
        jPanel2 = new javax.swing.JPanel();
        jSeparator1 = new javax.swing.JSeparator();
        jSeparator2 = new javax.swing.JSeparator();
        jScrollPane1 = new javax.swing.JScrollPane();
        txtAPuntosA = new javax.swing.JTextArea();
        lbHistoricoA = new javax.swing.JLabel();
        lbHistoricoB = new javax.swing.JLabel();
        jScrollPane2 = new javax.swing.JScrollPane();
        txtAPuntosB = new javax.swing.JTextArea();
        jMenuBar1 = new javax.swing.JMenuBar();
        jMenu1 = new javax.swing.JMenu();
        mICargarR5 = new javax.swing.JMenuItem();
        mINuevoPartido = new javax.swing.JMenuItem();
        jMenu2 = new javax.swing.JMenu();
        mIRecargar = new javax.swing.JMenuItem();
        mICambio = new javax.swing.JMenuItem();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Planilla Voley Ema");

        jPanel1.setForeground(new java.awt.Color(204, 102, 0));

        btnPuntoA.setText("Punto para A");
        btnPuntoA.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnPuntoAActionPerformed(evt);
            }
        });

        btnPuntoB.setText("Punto para B");
        btnPuntoB.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnPuntoBActionPerformed(evt);
            }
        });

        lbPuntajeA.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        lbPuntajeA.setText("Puntaje: 0");
        lbPuntajeA.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);

        lbPuntajeB.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        lbPuntajeB.setText("Puntaje: 0");
        lbPuntajeB.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);

        jpCancha.setBackground(new java.awt.Color(51, 255, 0));
        jpCancha.setForeground(new java.awt.Color(0, 0, 153));
        jpCancha.setPreferredSize(new java.awt.Dimension(560, 370));

        javax.swing.GroupLayout jpCanchaLayout = new javax.swing.GroupLayout(jpCancha);
        jpCancha.setLayout(jpCanchaLayout);
        jpCanchaLayout.setHorizontalGroup(
            jpCanchaLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 560, Short.MAX_VALUE)
        );
        jpCanchaLayout.setVerticalGroup(
            jpCanchaLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 370, Short.MAX_VALUE)
        );

        btnSaqueA.setText("Saque para A");
        btnSaqueA.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnSaqueAActionPerformed(evt);
            }
        });

        btnSaqueB.setText("Saque para B");
        btnSaqueB.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnSaqueBActionPerformed(evt);
            }
        });

        jSeparator2.setOrientation(javax.swing.SwingConstants.VERTICAL);

        txtAPuntosA.setEditable(false);
        txtAPuntosA.setColumns(20);
        txtAPuntosA.setRows(5);
        jScrollPane1.setViewportView(txtAPuntosA);

        lbHistoricoA.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        lbHistoricoA.setText("Historicos Puntos A");

        lbHistoricoB.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        lbHistoricoB.setText("Historicos Puntos B");

        txtAPuntosB.setEditable(false);
        txtAPuntosB.setColumns(20);
        txtAPuntosB.setRows(5);
        jScrollPane2.setViewportView(txtAPuntosB);

        javax.swing.GroupLayout jPanel2Layout = new javax.swing.GroupLayout(jPanel2);
        jPanel2.setLayout(jPanel2Layout);
        jPanel2Layout.setHorizontalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel2Layout.createSequentialGroup()
                .addGroup(jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addGroup(jPanel2Layout.createSequentialGroup()
                        .addGroup(jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 378, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addGroup(jPanel2Layout.createSequentialGroup()
                                .addGap(44, 44, 44)
                                .addComponent(lbHistoricoA, javax.swing.GroupLayout.PREFERRED_SIZE, 300, javax.swing.GroupLayout.PREFERRED_SIZE)))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addComponent(jSeparator2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addGroup(jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jScrollPane2, javax.swing.GroupLayout.PREFERRED_SIZE, 378, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addGroup(jPanel2Layout.createSequentialGroup()
                                .addGap(44, 44, 44)
                                .addComponent(lbHistoricoB, javax.swing.GroupLayout.PREFERRED_SIZE, 300, javax.swing.GroupLayout.PREFERRED_SIZE)))
                        .addGap(0, 0, Short.MAX_VALUE))
                    .addGroup(jPanel2Layout.createSequentialGroup()
                        .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(jSeparator1, javax.swing.GroupLayout.PREFERRED_SIZE, 794, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addContainerGap())
        );
        jPanel2Layout.setVerticalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel2Layout.createSequentialGroup()
                .addComponent(jSeparator1, javax.swing.GroupLayout.PREFERRED_SIZE, 4, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jSeparator2, javax.swing.GroupLayout.DEFAULT_SIZE, 167, Short.MAX_VALUE)
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel2Layout.createSequentialGroup()
                        .addComponent(lbHistoricoA)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 128, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addContainerGap())
                    .addGroup(jPanel2Layout.createSequentialGroup()
                        .addComponent(lbHistoricoB)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addComponent(jScrollPane2, javax.swing.GroupLayout.PREFERRED_SIZE, 128, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(0, 0, Short.MAX_VALUE))))
        );

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGap(0, 0, Short.MAX_VALUE)
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(btnPuntoA, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(lbPuntajeA, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)))
                    .addComponent(btnSaqueA, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addGap(6, 6, 6)
                .addComponent(jpCancha, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(6, 6, 6)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                        .addComponent(btnPuntoB, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(lbPuntajeB, javax.swing.GroupLayout.PREFERRED_SIZE, 96, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addComponent(btnSaqueB, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addContainerGap())
            .addComponent(jPanel2, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addComponent(btnPuntoB)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(lbPuntajeB, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(btnSaqueB, javax.swing.GroupLayout.PREFERRED_SIZE, 42, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addComponent(btnPuntoA)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(lbPuntajeA, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(btnSaqueA, javax.swing.GroupLayout.PREFERRED_SIZE, 42, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addComponent(jpCancha, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jPanel2, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );

        //jPanel1.setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jMenu1.setText("File");

        mICargarR5.setAccelerator(javax.swing.KeyStroke.getKeyStroke(java.awt.event.KeyEvent.VK_F11, 0));
        mICargarR5.setText("Cargar R5");
        mICargarR5.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                mICargarR5ActionPerformed(evt);
            }
        });
        jMenu1.add(mICargarR5);

        mINuevoPartido.setAccelerator(javax.swing.KeyStroke.getKeyStroke(java.awt.event.KeyEvent.VK_F5, 0));
        mINuevoPartido.setText("Nuevo Partido");
        mINuevoPartido.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                mINuevoPartidoActionPerformed(evt);
            }
        });
        jMenu1.add(mINuevoPartido);

        jMenuBar1.add(jMenu1);

        jMenu2.setText("Edit");

        mIRecargar.setAccelerator(javax.swing.KeyStroke.getKeyStroke(java.awt.event.KeyEvent.VK_F5, java.awt.event.InputEvent.SHIFT_DOWN_MASK));
        mIRecargar.setText("Recargar");
        mIRecargar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                mIRecargarActionPerformed(evt);
            }
        });
        jMenu2.add(mIRecargar);

        mICambio.setAccelerator(javax.swing.KeyStroke.getKeyStroke(java.awt.event.KeyEvent.VK_F10, 0));
        mICambio.setText("Cambio");
        mICambio.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                mICambioActionPerformed(evt);
            }
        });
        jMenu2.add(mICambio);

        jMenuBar1.add(jMenu2);

        setJMenuBar(jMenuBar1);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    // Método auxiliar para crear una etiqueta de jugador con texto y posición
    private JLabel crearJugadorLabel(String text, int x, int y) {
        JLabel label = new JLabel(text);
        label.setBounds(x, y, 30, 30);
        return label;
    }

    private void crearCanchaVoley(Graphics g, int panelWidth, int panelHeight) {
        // Set background color verde
        g.setColor(Color.GREEN);
        g.fillRect(0, 0, panelWidth, panelHeight);

        // Define las dimensiones escaladas de la cancha girada 90 grados
        int anchoCancha = panelWidth - 20; // Por ejemplo, se resta 20 para dejar un pequeño margen
        int largoCancha = panelHeight - 20; // Por ejemplo, se resta 20 para dejar un pequeño margen
        int espacioLateral = (panelWidth - anchoCancha) / 2; // Espacio adicional desde el exterior de las líneas laterales
        int espacioFondo = (panelHeight - largoCancha) / 2; // Espacio adicional desde la línea de fondo

        // Dibuja las líneas del rectángulo del terreno de juego girado
        g.setColor(Color.WHITE);
        g.drawRect(espacioLateral, espacioFondo, anchoCancha, largoCancha);

        // Dibuja la línea central (vertical)
        g.drawLine(panelWidth / 2, espacioFondo, panelWidth / 2, espacioFondo + largoCancha);

        // Dibuja la línea de 3m (vertical)
        int tercioAncho = anchoCancha / 3;
        g.setColor(Color.WHITE);
        g.drawLine(espacioLateral + tercioAncho, espacioFondo, espacioLateral + tercioAncho, espacioFondo + largoCancha);
        g.setColor(Color.WHITE);
        g.drawLine(espacioLateral + 2 * tercioAncho, espacioFondo, espacioLateral + 2 * tercioAncho, espacioFondo + largoCancha);
    }

    private void dibujarJugador(Graphics g, int x, int y, int width, int height, String numeroJugador, Color color) {
        g.setColor(color);  // Configura el color antes de dibujar el jugador
        g.fillOval(x, y, width, height);

        g.setColor(Color.WHITE);
        Font font = new Font("Arial", Font.BOLD, 12);
        g.setFont(font);
        g.drawString(numeroJugador, x + 8, y + 18);
    }

    private void crearJugadores(){
        // Etiquetas para los jugadores del equipo A
        jugadorA2 = crearJugadorLabel("A2", 200, 270);
        jugadorA3 = crearJugadorLabel("A3", 200, 150);
        jugadorA4 = crearJugadorLabel("A4", 200, 50);
        jugadorA1 = crearJugadorLabel("A1", xJugadorASaque, yJugadorA);
        jugadorA6 = crearJugadorLabel("A6", 100, 150);
        jugadorA5 = crearJugadorLabel("A5", 100, 50);

        // Etiquetas para los jugadores del equipo B
        jugadorB2 = crearJugadorLabel("B2", 300, 50);
        jugadorB3 = crearJugadorLabel("B3", 300, 150);
        jugadorB4 = crearJugadorLabel("B4", 300, 270);
        jugadorB1 = crearJugadorLabel("B1", xJugadorB, yJugadorB);
        jugadorB6 = crearJugadorLabel("B6", 400, 150);
        jugadorB5 = crearJugadorLabel("B5", 400, 270);

        // Agregar las etiquetas al panel
        jpCancha.add(jugadorA1);
        jpCancha.add(jugadorA2);
        jpCancha.add(jugadorA3);
        jpCancha.add(jugadorA4);
        jpCancha.add(jugadorA5);
        jpCancha.add(jugadorA6);
        jpCancha.add(jugadorB1);
        jpCancha.add(jugadorB2);
        jpCancha.add(jugadorB3);
        jpCancha.add(jugadorB4);
        jpCancha.add(jugadorB5);
        jpCancha.add(jugadorB6);
    }

    private void mICargarR5ActionPerformed(ActionEvent evt) {
        String userInput = JOptionPane.showInputDialog("Ingrese el numero de Set:");
        R5New pantalla = new R5New(Integer.parseInt(userInput), equipoA, equipoB);
        pantalla.setVisible(true);
        pantalla.setLocationRelativeTo(null);
        equipoA = pantalla.getEquipoA();
        equipoB = pantalla.getEquipoB();
        System.out.println(equipoA.getNombreEquipo());
        System.out.println(equipoB.getNombreEquipo());

        // Verificar si ambos equipos están cargados
        if (equipoA.estaCargado() && equipoB.estaCargado()) {
            switch (Integer.parseInt(userInput)) {
                case 1:
                    equipoA.setSaque(true);
                    equipoB.setSaque(false);
                    break;
                case 2:
                    equipoB.setSaque(true);
                    equipoA.setSaque(false);
                    break;
                case 3:
                    equipoA.setSaque(true);
                    equipoB.setSaque(false);
                    break;
                default:
                    break;
            }
            // Actualizar la posición de los jugadores en función de la formación original
            //actualizarPosicionJugadores();
        } else {
            JOptionPane.showMessageDialog(null, "Ambos equipos deben estar cargados antes de continuar.");
        }
        pantalla.setDefaultCloseOperation(javax.swing.WindowConstants.DISPOSE_ON_CLOSE); // Configura el comportamiento de cierre
    }

    private void btnPuntoAActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnPuntoAActionPerformed
        equipoA.setPuntaje( equipoA.getPuntaje() + 1 );
        lbPuntajeA.setText(textoPuntaje + equipoA.getPuntaje());
        if(verificarFinDeJuego()){
            JOptionPane.showMessageDialog(this, "Gano el Equipo " + equipoA.getNombreEquipo() + " " + equipoA.getPuntaje() + " a " + equipoB.getPuntaje());
            btnPuntoA.setEnabled(false);
            btnPuntoB.setEnabled(false);
            btnSaqueA.setEnabled(false);
            btnSaqueB.setEnabled(false);
        }
    }//GEN-LAST:event_btnPuntoAActionPerformed

    private void btnPuntoBActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnPuntoBActionPerformed
        equipoB.setPuntaje( equipoB.getPuntaje() + 1 );
        lbPuntajeB.setText(textoPuntaje + equipoB.getPuntaje());
        if(verificarFinDeJuego()){
            JOptionPane.showMessageDialog(this, "Gano el Equipo " + equipoB.getNombreEquipo() + " " + equipoB.getPuntaje() + " a " + equipoA.getPuntaje());
            btnPuntoA.setEnabled(false);
            btnPuntoB.setEnabled(false);
            btnSaqueA.setEnabled(false);
            btnSaqueB.setEnabled(false);
        }
    }//GEN-LAST:event_btnPuntoBActionPerformed

    private void mIRecargarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_mIRecargarActionPerformed
        //Carga Equipo A
        String[] formacionA =  equipoA.getFormacionRotacion();
        String[] formacionB =  equipoB.getFormacionRotacion();
        
        jugadorA1.setText(formacionA[0]);
        jugadorA2.setText(formacionA[1]);
        jugadorA3.setText(formacionA[2]);
        jugadorA4.setText(formacionA[3]);
        jugadorA5.setText(formacionA[4]);
        jugadorA6.setText(formacionA[5]);
        
        //Carga Equipo B
        jugadorB1.setText(formacionB[0]);
        jugadorB2.setText(formacionB[1]);
        jugadorB3.setText(formacionB[2]);
        jugadorB4.setText(formacionB[3]);
        jugadorB5.setText(formacionB[4]);
        jugadorB6.setText(formacionB[5]);
        
        
        jPanel1.repaint();
        jpCancha.repaint();
    }//GEN-LAST:event_mIRecargarActionPerformed

    private void btnSaqueAActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnSaqueAActionPerformed
        if (equipoA.isSaque())
            JOptionPane.showMessageDialog(this, "Equipo A ya tiene el Saque");
        else {
            equipoA.setSaque(true);
            equipoB.setSaque(false);
            ganoSaque(evt);
            txtAPuntosB.setText(txtAPuntosA.getText() + equipoB.getPos1() + " - " + equipoB.getPuntaje() + "\n");
        }
    }//GEN-LAST:event_btnSaqueAActionPerformed

    private void btnSaqueBActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnSaqueBActionPerformed
        if (equipoB.isSaque())
            JOptionPane.showMessageDialog(this, "Equipo B ya tiene el Saque");
        else {
            equipoA.setSaque(false);
            equipoB.setSaque(true);
            ganoSaque(evt);
            txtAPuntosA.setText(txtAPuntosA.getText() + equipoA.getPos1() + " - " + equipoA.getPuntaje() + "\n");
        }
    }//GEN-LAST:event_btnSaqueBActionPerformed

    private void mICambioActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_mICambioActionPerformed
        // Crear los campos de texto para los dos valores
        JTextField valor1Field = new JTextField();
        JTextField valor2Field = new JTextField();
        JTextField valor3Field = new JTextField();

        // Crear un panel para contener los campos de texto
        JPanel panel = new JPanel();
        panel.setLayout(new BoxLayout(panel, BoxLayout.Y_AXIS));
        panel.add(new JLabel("Ingrese Nombre del Equipo:"));
        panel.add(valor1Field);
        panel.add(new JLabel("Ingrese el numero del que sale:"));
        panel.add(valor2Field);
        panel.add(new JLabel("Ingrese el numero del que entra:"));
        panel.add(valor3Field);

        // Mostrar el cuadro de diálogo y capturar la respuesta del usuario
        int result = JOptionPane.showConfirmDialog(null, panel, "Ingrese los valores", JOptionPane.OK_CANCEL_OPTION);

        // Verificar si el usuario presionó "Aceptar" (OK)
        if (result == JOptionPane.OK_OPTION) {
            // Obtener los valores ingresados por el usuario
            String valor1 = valor1Field.getText();
            String valor2 = valor2Field.getText();
            String valor3 = valor3Field.getText();
            
            if ( equipoA.getNombreEquipo().equalsIgnoreCase(valor1) ){
                if ( equipoA.contieneJugador(valor2) ) {
                    equipoA.cambioJugador(valor2, valor3);
                    JOptionPane.showMessageDialog(this, "Cambio Realizado");
                }else
                    JOptionPane.showMessageDialog(this, "Ningun jugador con el numero "+ valor2 + " del equipo A");
            }else if ( equipoB.getNombreEquipo().equalsIgnoreCase(valor1) ){
                if ( equipoB.contieneJugador(valor2) ) {
                    equipoB.cambioJugador(valor2, valor3);
                    JOptionPane.showMessageDialog(this, "Cambio Realizado");
                }
                else
                    JOptionPane.showMessageDialog(this, "Ningun jugador con el numero "+ valor2 + " del equipo B");
            }
        }
    }//GEN-LAST:event_mICambioActionPerformed

    private void mINuevoPartidoActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_mINuevoPartidoActionPerformed
        btnPuntoA.setEnabled(true);
        btnPuntoB.setEnabled(true);
        btnSaqueA.setEnabled(true);
        btnSaqueB.setEnabled(true);
        lbHistoricoA.setText("");
        txtAPuntosA.setText("");
        txtAPuntosB.setText("");
        lbPuntajeA.setText(textoPuntaje + "0");
        lbPuntajeB.setText(textoPuntaje + "0");
        jpCancha.removeAll();
        crearJugadores();
    }//GEN-LAST:event_mINuevoPartidoActionPerformed

    private void ganoSaque(ActionEvent evt) {
        String[] formacionEquipoA = equipoA.getFormacionRotacion();
        String[] formacionEquipoB = equipoB.getFormacionRotacion();

        if (equipoA.isSaque()) {
            jugadorA1.setLocation( xJugadorASaque, yJugadorA);
            jugadorB1.setLocation( xJugadorB, yJugadorB);
            
            System.out.println("Formación antes de rotar del Equipo A:");
            for (String posicion : formacionEquipoA) {
                System.out.println(posicion);
            }
            
            equipoA.rotar();
            
            formacionEquipoA = equipoA.getFormacionRotacion();
            System.out.println("Formación rotada del Equipo A:");
            for (String posicion : formacionEquipoA) {
                System.out.println(posicion);
            }
            
        }else if (equipoB.isSaque()) {
            jugadorA1.setLocation( xJugadorA, yJugadorA);
            jugadorB1.setLocation( xJugadorBSaque, yJugadorB);
            
            System.out.println("Formación antes de rotar del Equipo B:");
            for (String posicion : formacionEquipoB) {
                System.out.println(posicion);
            }
            
            equipoB.rotar();
            
            formacionEquipoB = equipoB.getFormacionRotacion();
            System.out.println("Formación rotada del Equipo B:");
            for (String posicion : formacionEquipoB) {
                System.out.println(posicion);
            }
            
        }

        // Volver a dibujar el panel para reflejar el cambio
        mIRecargarActionPerformed(evt);
        jpCancha.repaint();
    }
    
    private boolean verificarFinDeJuego() {
        // Verificar si un equipo ha llegado a los 25 puntos
        if (equipoA.getPuntaje() >= 25 || equipoB.getPuntaje() >= 25) {
            // Verificar si la diferencia es al menos de 2 puntos
            return abs(equipoA.getPuntaje() - equipoB.getPuntaje()) >= 2; // Se cumplieron las condiciones para terminar el juego
        }
        return false; // El juego continúa
    }


    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton btnPuntoA;
    private javax.swing.JButton btnPuntoB;
    private javax.swing.JButton btnSaqueA;
    private javax.swing.JButton btnSaqueB;
    private javax.swing.JMenu jMenu1;
    private javax.swing.JMenu jMenu2;
    private javax.swing.JMenuBar jMenuBar1;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JPanel jPanel2;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JScrollPane jScrollPane2;
    private javax.swing.JSeparator jSeparator1;
    private javax.swing.JSeparator jSeparator2;
    private javax.swing.JPanel jpCancha;
    private javax.swing.JLabel lbHistoricoA;
    private javax.swing.JLabel lbHistoricoB;
    private javax.swing.JLabel lbPuntajeA;
    private javax.swing.JLabel lbPuntajeB;
    private javax.swing.JMenuItem mICambio;
    private javax.swing.JMenuItem mICargarR5;
    private javax.swing.JMenuItem mINuevoPartido;
    private javax.swing.JMenuItem mIRecargar;
    private javax.swing.JTextArea txtAPuntosA;
    private javax.swing.JTextArea txtAPuntosB;
    // End of variables declaration//GEN-END:variables

}
