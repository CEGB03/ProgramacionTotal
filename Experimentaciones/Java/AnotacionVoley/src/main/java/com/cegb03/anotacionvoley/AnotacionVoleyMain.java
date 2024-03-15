package com.cegb03.anotacionvoley;

 

import com.cegb03.anotacionvoley.igu.*;

/**
 * The type Anotacion voley.
 *
 * @author CEGB03
 */
public class AnotacionVoleyMain {

    /**
     * The entry point of application.
     *
     * @param args the input arguments
     */
    public static void main(String[] args) {
        System.out.println("Hello World!");
        //R5New pantalla = new R5New(1);
        Planilla pantalla = new Planilla();
        pantalla.setVisible(true);
        pantalla.setLocationRelativeTo(null);
        
//         VolleyballScoreSheetGUI pantalla2 = new VolleyballScoreSheetGUI();
//        pantalla2.mostrarInterfaz();  // Llama al método para mostrar la interfaz
//        pantalla.setLocationRelativeTo(null);
    }
}
