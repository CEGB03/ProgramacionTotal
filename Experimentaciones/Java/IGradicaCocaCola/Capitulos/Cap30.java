package Capitulos;

import utils.Formulario30;

public class Cap30 {
    public Cap30(){
        Formulario30 formulario = new Formulario30();
        formulario.setBounds(0,0,450,350);//coordenadas de inicio, y tamanio de ventana
        formulario.setResizable(false);//Permiso para redimencionar la ventana
        formulario.setVisible(true);//Hace que sea visible la ventana
        formulario.setLocationRelativeTo(null);//Ingora las coordenadas y lo lanza al medio de la pantalla
    }
}
