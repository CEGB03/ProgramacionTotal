package Capitulos;

import utils.Formulario33;

public class Cap33 {
    public Cap33(){
        Formulario33 formulario = new Formulario33();
        formulario.setBounds(0,0,540,400);//coordenadas de inicio, y tamanio de ventana
        formulario.setResizable(false);//Permiso para redimencionar la ventana
        formulario.setVisible(true);//Hace que sea visible la ventana
        formulario.setLocationRelativeTo(null);//Ingora las coordenadas y lo lanza al medio de la pantalla
    }
}
