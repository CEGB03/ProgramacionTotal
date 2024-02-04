package Capitulos;

import ProyectoFinal.Licencia;

public class CapProyectoFinalLicencia {
    public CapProyectoFinalLicencia(String string){
        Licencia licencia = new Licencia(string);
        licencia.setBounds(0,0,600,380);//coordenadas de inicio, y tamanio de ventana
        licencia.setResizable(false);//Permiso para redimencionar la ventana
        licencia.setVisible(true);//Hace que sea visible la ventana
        licencia.setLocationRelativeTo(null);//Ingora las coordenadas y lo lanza al medio de la pantalla
    }
}
