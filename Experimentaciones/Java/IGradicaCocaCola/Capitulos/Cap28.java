package Capitulos;

import utils.Formulario27;
import utils.Formulario28;

public class Cap28 {
    public Cap28(){
        Formulario28 formulario = new Formulario28();
        formulario.setBounds(0,0,450,350);//coordenadas de inicio, y tamanio de ventana
        formulario.setResizable(false);//Permiso para redimencionar la ventana
        formulario.setVisible(true);//Hace que sea visible la ventana
        formulario.setLocationRelativeTo(null);//Ingora las coordenadas y lo lanza al medio de la pantalla
    }
}
