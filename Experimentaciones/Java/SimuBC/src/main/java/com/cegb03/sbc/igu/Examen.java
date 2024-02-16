/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/GUIForms/JFrame.java to edit this template
 */
package com.cegb03.simulacrobuenconductor.igu;

import com.cegb03.simulacrobuenconductor.logica.Controladora;
import com.cegb03.simulacrobuenconductor.logica.Pregunta;
import java.awt.event.ActionEvent;
import javax.swing.JOptionPane;
import javax.swing.Timer;

/**
 *
 * @author CEGB03
 */
public class Examen extends javax.swing.JFrame {
    
    int numPregunta=1, numPreguntaControl;
    private Controladora  controladora;
    private Timer tiempo;

    /**
     * Creates new form Examen
     */
    public Examen() {
        initComponents();
        controladora = new Controladora();
        controladora.grabarPreguntas();
        tiempo = new Timer(1000, null);
        tiempo.start();
        tiempo.addActionListener(new java.awt.event.ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                operacionTimer();
            }
        });
        //JOptionPane.showMessageDialog(this, String.valueOf(numPregunta));
        cambiarPregunta();
    }
    
    private void operacionTimer() {
        //System.out.println("Paso un segundo...");
        int minutos, segundos;
        segundos = Integer.parseInt(lbSeg.getText());
        minutos = Integer.parseInt(lbMin.getText());
         if (minutos == 0 && segundos == 0){
            tiempo.stop();
            btnComprobar.setEnabled(false);
            btnLimpiar.setEnabled(false);
            JOptionPane.showMessageDialog(null, "Se acabo el tiempo...");
        }else if (segundos != 0){
            segundos--;
            lbSeg.setText(String.valueOf(segundos));
        } else if(segundos == 0){
            minutos--;
            segundos = 59;
            lbMin.setText(String.valueOf(minutos));
            lbSeg.setText(String.valueOf(segundos));
        }
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        buttonGroup1 = new javax.swing.ButtonGroup();
        jPanel1 = new javax.swing.JPanel();
        lbTiempo = new javax.swing.JLabel();
        lbPorcentajeAprobado = new javax.swing.JLabel();
        lbNumPregunta = new javax.swing.JLabel();
        jSeparator1 = new javax.swing.JSeparator();
        jScrollPane1 = new javax.swing.JScrollPane();
        txtPregunta = new javax.swing.JTextArea();
        rbtnOpnA = new javax.swing.JRadioButton();
        rbtnOpnB = new javax.swing.JRadioButton();
        rbtnOpnC = new javax.swing.JRadioButton();
        rbtnOpnD = new javax.swing.JRadioButton();
        btnComprobar = new javax.swing.JButton();
        lbPreguntaNum = new javax.swing.JLabel();
        lbNumMaxPregunta = new javax.swing.JLabel();
        btnAnterior = new javax.swing.JButton();
        btnProximo = new javax.swing.JButton();
        btnLimpiar = new javax.swing.JButton();
        lbMin = new javax.swing.JLabel();
        lbSeg = new javax.swing.JLabel();
        jLabel1 = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        lbTiempo.setText("Tiempo: ");

        lbPorcentajeAprobado.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        lbPorcentajeAprobado.setText("100%");
        lbPorcentajeAprobado.setToolTipText("");
        lbPorcentajeAprobado.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);

        lbNumPregunta.setText("N)");

        txtPregunta.setEditable(false);
        txtPregunta.setColumns(20);
        txtPregunta.setLineWrap(true);
        txtPregunta.setRows(5);
        txtPregunta.setText("preguntas del examen\n");
        jScrollPane1.setViewportView(txtPregunta);

        rbtnOpnA.setText("a");

        rbtnOpnB.setText("b");

        rbtnOpnC.setText("c");

        rbtnOpnD.setText("d");

        btnComprobar.setText("Comprobar");
        btnComprobar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnComprobarActionPerformed(evt);
            }
        });

        lbPreguntaNum.setText("1");

        lbNumMaxPregunta.setText("/ 20");

        btnAnterior.setText("<<");
        btnAnterior.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnAnteriorActionPerformed(evt);
            }
        });

        btnProximo.setText(">>");
        btnProximo.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnProximoActionPerformed(evt);
            }
        });

        btnLimpiar.setText("Limpiar");

        lbMin.setText("40");

        lbSeg.setText("00");

        jLabel1.setText(":");

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addComponent(lbPorcentajeAprobado, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addGap(104, 104, 104)
                        .addComponent(lbTiempo)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(lbMin)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jLabel1)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(lbSeg)
                        .addGap(18, 18, 18))
                    .addComponent(jSeparator1)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addComponent(lbNumPregunta)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jScrollPane1)
                            .addGroup(jPanel1Layout.createSequentialGroup()
                                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(rbtnOpnB)
                                    .addComponent(rbtnOpnA)
                                    .addComponent(rbtnOpnC)
                                    .addComponent(rbtnOpnD))
                                .addGap(0, 0, Short.MAX_VALUE))))
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createSequentialGroup()
                        .addComponent(btnComprobar)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 28, Short.MAX_VALUE)
                        .addComponent(btnAnterior, javax.swing.GroupLayout.PREFERRED_SIZE, 51, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(18, 18, 18)
                        .addComponent(lbPreguntaNum)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(lbNumMaxPregunta)
                        .addGap(18, 18, 18)
                        .addComponent(btnProximo, javax.swing.GroupLayout.PREFERRED_SIZE, 51, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(27, 27, 27)
                        .addComponent(btnLimpiar)))
                .addContainerGap())
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(lbTiempo)
                    .addComponent(lbPorcentajeAprobado, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(lbMin)
                    .addComponent(lbSeg)
                    .addComponent(jLabel1))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jSeparator1, javax.swing.GroupLayout.PREFERRED_SIZE, 10, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(lbNumPregunta)
                    .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 103, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addComponent(rbtnOpnA)
                .addGap(18, 18, 18)
                .addComponent(rbtnOpnB)
                .addGap(18, 18, 18)
                .addComponent(rbtnOpnC)
                .addGap(18, 18, 18)
                .addComponent(rbtnOpnD)
                .addGap(41, 41, 41)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(btnComprobar)
                    .addComponent(lbPreguntaNum)
                    .addComponent(lbNumMaxPregunta)
                    .addComponent(btnAnterior)
                    .addComponent(btnProximo)
                    .addComponent(btnLimpiar))
                .addGap(56, 56, 56))
        );

        buttonGroup1.add(rbtnOpnA);
        buttonGroup1.add(rbtnOpnB);
        buttonGroup1.add(rbtnOpnC);
        buttonGroup1.add(rbtnOpnD);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 400, Short.MAX_VALUE)
            .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 423, Short.MAX_VALUE)
            .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents
    
    private void btnProximoActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnProximoActionPerformed
        numPregunta = Integer.parseInt(lbPreguntaNum.getText());
        if(numPregunta == 20){
            numPregunta = 1;
            lbPreguntaNum.setText(String.valueOf(numPregunta));
            cambiarPregunta();
        }else{
            numPregunta++;
            lbPreguntaNum.setText(String.valueOf(numPregunta));
            cambiarPregunta();
        }
    }//GEN-LAST:event_btnProximoActionPerformed

    private void btnAnteriorActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnAnteriorActionPerformed
         numPregunta = Integer.parseInt(lbPreguntaNum.getText());
        JOptionPane.showMessageDialog(this, String.valueOf(numPregunta));
        if(numPregunta == 1){
            numPregunta=20;
            lbPreguntaNum.setText(String.valueOf(numPregunta));
            cambiarPregunta();
        }else{
            numPregunta--;
            lbPreguntaNum.setText(String.valueOf(numPregunta));
            cambiarPregunta();
        }
    }//GEN-LAST:event_btnAnteriorActionPerformed

    private void cambiarPregunta(){
        Pregunta pregunta = controladora.getPreguntaId(numPregunta);
        //JOptionPane.showMessageDialog(this, pregunta.toString());
        txtPregunta.setText(pregunta.getPregunta());
        lbNumPregunta.setText(String.valueOf(numPregunta));
        numPreguntaControl = pregunta.getNumPregunta();
        rbtnOpnA.setText(pregunta.getOpnA());
        rbtnOpnB.setText(pregunta.getOpnB());
        if ( pregunta.getOpnC().isBlank() )  {
            rbtnOpnC.setVisible(false);
        }else{
            rbtnOpnC.setText(pregunta.getOpnC());
        }
        if ( pregunta.getOpnD().isBlank())  {
            rbtnOpnD.setVisible(false);
        }else{
            rbtnOpnD.setText(pregunta.getOpnD());
        }
    }
    
    private void btnComprobarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnComprobarActionPerformed
        String seleccion = "";
        if ( !(rbtnOpnA.isSelected()) && !(rbtnOpnB.isSelected()) && !(rbtnOpnC.isSelected()) && !(rbtnOpnD.isSelected()) )
             JOptionPane.showMessageDialog(null, "Debes seleccionar una opcion...");
        else if(rbtnOpnA.isSelected())
           seleccion = "a";
        else if(rbtnOpnB.isSelected())
            seleccion = "b";
        else if(rbtnOpnC.isSelected())
            seleccion = "c";
        else if(rbtnOpnD.isSelected())
            seleccion = "d";
        if( seleccion.equals("a") || seleccion.equals("b") || seleccion.equals("c") || seleccion.equals("d") )
            if(controladora.comprobar(numPreguntaControl, seleccion))
                JOptionPane.showMessageDialog(this, "Correto");
             else
                JOptionPane.showMessageDialog(this, "Incorreto");
    }//GEN-LAST:event_btnComprobarActionPerformed


    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton btnAnterior;
    private javax.swing.JButton btnComprobar;
    private javax.swing.JButton btnLimpiar;
    private javax.swing.JButton btnProximo;
    private javax.swing.ButtonGroup buttonGroup1;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JSeparator jSeparator1;
    private javax.swing.JLabel lbMin;
    private javax.swing.JLabel lbNumMaxPregunta;
    private javax.swing.JLabel lbNumPregunta;
    private javax.swing.JLabel lbPorcentajeAprobado;
    private javax.swing.JLabel lbPreguntaNum;
    private javax.swing.JLabel lbSeg;
    private javax.swing.JLabel lbTiempo;
    private javax.swing.JRadioButton rbtnOpnA;
    private javax.swing.JRadioButton rbtnOpnB;
    private javax.swing.JRadioButton rbtnOpnC;
    private javax.swing.JRadioButton rbtnOpnD;
    private javax.swing.JTextArea txtPregunta;
    // End of variables declaration//GEN-END:variables
}