package Capitulos;

import utils.Formulario26;
import utils.Formulario27;

public class Cap27 {
    public Cap27(){
        Formulario27 formulario = new Formulario27();
        formulario.setBounds(0,0,450,350);//coordenadas de inicio, y tamanio de ventana
        formulario.setResizable(false);//Permiso para redimencionar la ventana
        formulario.setVisible(true);//Hace que sea visible la ventana
        formulario.setLocationRelativeTo(null);//Ingora las coordenadas y lo lanza al medio de la pantalla
    }
}
