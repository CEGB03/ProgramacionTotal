import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 * Write a description of class Prueba here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Prueba
{
    // instance variables - replace the example below with your own
    private List<Equipo> equipos;
    private List<Partido> encuentros;

    /**
     * Constructor for objects of class Prueba
     */
    public Prueba()
    {
        Scanner sc = new Scanner(System.in);
        //      Prueba de equipos
        /*System.out.println("Ingrese el nombre del Equipo todo junto: ");
        Equipo equipo1 = new Equipo(sc.nextLine());
        System.out.println("Equipo creado");
        System.out.println("Ingrese el nombre del Equipo todo junto: ");
        Equipo equipo2 = new Equipo(sc.nextLine());
        System.out.println("Equipo creado");
        System.out.println("Ingrese el nombre del Equipo todo junto: ");
        Equipo equipo3 = new Equipo(sc.nextLine());
        System.out.println("Equipo creado");
        System.out.println("Ingrese el nombre del Equipo todo junto: ");
        Equipo equipo4 = new Equipo(sc.nextLine());
        System.out.println("Equipo creado");
        //      Agregacion de equipos
        equipos = new ArrayList<>();
        equipos.add(equipo1);
        System.out.println("Equipo agragado");
        equipos.add(equipo2);
        System.out.println("Equipo agregado");
        equipos.add(equipo3);
        System.out.println("Equipo agregado");
        equipos.add(equipo4);
        System.out.println("Equipo agregado");*/
        /*      Prueba independiente de la clase partido 
        //      Creaccon de partidos
        Partido partido1= new Partido(equipo1, equipo2);
        System.out.println("partido creado");
        
        System.out.println(partido1.toString());
        System.out.println("Partido en Juego?"+partido1.setEnJuego());
        partido1.addGol(equipo1);
        partido1.addGol(equipo2);
        partido1.addGol(equipo1);
        partido1.setFinalizado();
        System.out.println(partido1.toString());
        */
        /*
        //      Creaccion de Toreno
        //  setEquipos
        Torneo torneo1 = new Torneo();
        torneo1.setEquipos(equipos);
        System.out.println("torneo creado");
        */
        //      Creaccion de TorenoPorPuntos
        //  setEquipos
        equipos = new ArrayList<>();
        Equipo e1 = new Equipo("a");
        Equipo e2 = new Equipo("b");
        //Equipo e3 = new Equipo("c");
        //Equipo e4 = new Equipo("d");
        equipos.add(e1);
        equipos.add(e2);
        //equipos.add(e3);
        //equipos.add(e4);
        TorneoPorPuntos torneoptos = new TorneoPorPuntos();
        torneoptos.InicializarTorneo(equipos);
        torneoptos.setEquipos(equipos);
        //torneoptos.setEncuentros(equipos);
        System.out.println("torneo por puntos creado");
        torneoptos.getPartidos();
        torneoptos.imprimirEncuentros();
        torneoptos.obtenerProximaFecha();
    }
}
