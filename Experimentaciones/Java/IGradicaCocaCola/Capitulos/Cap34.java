package Capitulos;

import utils.Formulario34;

public class Cap34 {
    public Cap34(){
        Formulario34 formulario = new Formulario34();
        formulario.setBounds(0,0,540,400);//coordenadas de inicio, y tamanio de ventana
        formulario.setResizable(false);//Permiso para redimencionar la ventana
        formulario.setVisible(true);//Hace que sea visible la ventana
        formulario.setLocationRelativeTo(null);//Ingora las coordenadas y lo lanza al medio de la pantalla
    }
}
