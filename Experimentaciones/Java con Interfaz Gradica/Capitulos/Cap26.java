package Capitulos;

import utils.Formulario25;
import utils.Formulario26;

public class Cap26 {
    public Cap26(){
        Formulario26 formulario = new Formulario26();
        formulario.setBounds(0,0,400,550);//coordenadas de inicio, y tamanio de ventana
        formulario.setResizable(false);//Permiso para redimencionar la ventana
        formulario.setVisible(true);//Hace que sea visible la ventana
        formulario.setLocationRelativeTo(null);//Ingora las coordenadas y lo lanza al medio de la pantalla
    }
}
