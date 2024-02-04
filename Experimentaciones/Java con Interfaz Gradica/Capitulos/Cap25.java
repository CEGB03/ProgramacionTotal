package Capitulos;

import utils.Formulario25;

public class Cap25 {
    public Cap25(){
        Formulario25 formulario = new Formulario25();
        formulario.setBounds(0,0,400,550);//coordenadas de inicio, y tamanio de ventana
        formulario.setVisible(true);//Hace que sea visible la ventana
        formulario.setLocationRelativeTo(null);//Ingora las coordenadas y lo lanza al medio de la pantalla
        formulario.setResizable(false);//Permiso para redimencionar la ventana
    }
}
