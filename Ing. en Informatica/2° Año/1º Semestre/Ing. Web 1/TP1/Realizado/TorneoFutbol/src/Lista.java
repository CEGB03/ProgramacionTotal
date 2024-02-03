import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
/**
 * Write a description of class Lista here.
 * 
 * @author (CEGB03)
 * @version (2023-06-17)
 */
public class Lista
{
    private List<Equipo> listEqui;

    /**
     * Inicializa una cantidad par de equipos, a los cuales se le puede
     *dar un nombre especifico o se le dara uno por defecto.
    */
    public Lista() {
        listEqui = new ArrayList<>();
        Scanner sc = new Scanner(System.in);

        System.out.println("Ingrese numero de Equipo a ingresar (debe ser par): ");
        int tam = sc.nextInt();
        while ((tam % 2) == 1) {
            System.out.println("Ingrese numero par de Equipos: ");
            tam = sc.nextInt();
        }

        System.out.println("Quires ingresarle nombre a los equipos?\n1=SI\n2=NO");
        if (sc.nextInt() == 1) {
            sc.nextLine();
            String[] nombre = new String[tam];
            int iii = 0;
            while (iii < tam){
                System.out.println("ii=" + iii + " tam=" + tam + "\nIngrese el nombre del Equipos n°" + (iii+1) + ": ");
                nombre[iii] = sc.nextLine().replaceAll("\\s+", "");
                iii++;
            }
            for (iii = 0; iii < tam; iii++) {
                listEqui.add(new Equipo(nombre[iii]));
            }
        }else{
            for (int ii = 0; ii < tam; ii++) {
                listEqui.add(new Equipo("E"+(ii+1)));
            }
        }
    }
    /**
     * Retorna la lista de equipos.
     */
    public List<Equipo> getLista()
    {
        return listEqui;
    }
}
