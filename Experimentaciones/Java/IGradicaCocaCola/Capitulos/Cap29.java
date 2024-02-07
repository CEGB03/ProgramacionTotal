package Capitulos;

import utils.Formulario29;

public class Cap29 {
    public Cap29(){
        Formulario29 formulario = new Formulario29();
        formulario.setBounds(0,0,450,350);//coordenadas de inicio, y tamanio de ventana
        formulario.setResizable(false);//Permiso para redimencionar la ventana
        formulario.setVisible(true);//Hace que sea visible la ventana
        formulario.setLocationRelativeTo(null);//Ingora las coordenadas y lo lanza al medio de la pantalla
    }
}
