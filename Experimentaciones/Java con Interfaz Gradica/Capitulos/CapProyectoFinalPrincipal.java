package Capitulos;

import ProyectoFinal.Principal;

public class CapProyectoFinalPrincipal {
    public CapProyectoFinalPrincipal(String nombre){
        Principal principal = new Principal(nombre);
        principal.setBounds(0,0,640,535);//coordenadas de inicio, y tamanio de ventana
        principal.setResizable(false);//Permiso para redimencionar la ventana
        principal.setVisible(true);//Hace que sea visible la ventana
        principal.setLocationRelativeTo(null);//Ingora las coordenadas y lo lanza al medio de la pantalla
    }
}
