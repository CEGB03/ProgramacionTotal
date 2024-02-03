import java.util.List;
import java.util.ArrayList;
import java.util.Scanner;

public class TorneoPorPuntos extends Torneo{
    /**
     * Inicializa el Torneo con los equipos indicados.
     * 
     * @param equipos Los equipos del torneo.
     */
    public void InicializarTorneo (List<Equipo> equipos) {
        Scanner sc = new Scanner(System.in);
        if(equipos.isEmpty() && ((equipos.size()% 2) == 2)){
            if(equipos.isEmpty()){
                System.out.println("La lista con la que intenta crear el toreo no contiene ningun equipo.");
                throw new IllegalArgumentException("Lista vacia");
            }else{
                System.out.println("La lista no tiene un numero par de equipos.");
                throw new IllegalArgumentException("Equipos Impar");
            }
        }
        super.setEquipos(equipos);
        System.out.println("Quires hacer partido ida y vuelta?\nSe armara equipo1 vs equipo2 y equipo 2 vs equipo1\n1=SI\n2=NO");
        if (sc.nextInt() == 1) {        
            generarFixture();
        }else{
            generarFixture2();
        }
        setTablaPosiciones(new TablaResultados(equipos));
    }

    public void generarFixture(){
        // Generar partidos de todos contra todos
        // Requiere que la cantidad de equipos sean par
        List<Partido> encuentros = new ArrayList<Partido>();
        
        for(int i=0; i < clubes.size(); i++){
            for(int j=1; j < clubes.size(); j++){
                Equipo e1 = clubes.get(i);
                Equipo e2 = clubes.get((i+j)%clubes.size());
                Partido p = new Partido(e1, e2);
                encuentros.add(p);
            }
        }
        setEncuentros(encuentros);
    }
    public void generarFixture2() {
        List<Partido> encuentros = new ArrayList<Partido>();
    
        for (int i = 0; i < clubes.size() - 1; i++) {
            Equipo e1 = clubes.get(i);
            for (int j = i + 1; j < clubes.size(); j++) {
                Equipo e2 = clubes.get(j);
                Partido p = new Partido(e1, e2);
                encuentros.add(p);
            }
        }
        setEncuentros(encuentros);
    }
       
}