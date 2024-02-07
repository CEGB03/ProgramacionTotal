package Capitulos;

import utils.Formulario39;

public class Cap39 {
    public Cap39(){
        Formulario39 formulario = new Formulario39();
        formulario.setBounds(0,0,300,200);//coordenadas de inicio, y tamanio de ventana
        formulario.setResizable(false);//Permiso para redimencionar la ventana
        formulario.setVisible(true);//Hace que sea visible la ventana
        formulario.setLocationRelativeTo(null);//Ingora las coordenadas y lo lanza al medio de la pantalla
    }
}
