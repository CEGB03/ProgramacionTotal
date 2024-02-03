package utils.lecturaArchivos;

import java.io.*;

public class LecturaArchivoTablas {
    private int filas=0;
    private int columnas=0;
    private Double x[];
    private Double y[];
    public LecturaArchivoTablas(String archivo) throws FileNotFoundException {
        archivo+=".dat";
        try {
            FileReader fr = new FileReader(archivo);
            BufferedReader br = new BufferedReader(fr);
            int c=0;

            while ((c = br.read()) != -1) {
                char caracter = (char) c;
                if (caracter == '\n') {
                    filas++; // Incrementa el contador cuando se encuentra un salto de línea
                }
            }
            br.close();
            fr = new FileReader(archivo);
            br = new BufferedReader(fr);

            System.out.println("numero de filas="+filas);
            String linea="";
            int i = 0;
            int j = 0;

            x = new Double[filas];
            y = new Double[filas];
            int xi = 0;
            int yi = 0;
            while ((linea = br.readLine()) != null) {
                String[] elementos = linea.split(" ");
                j = 0;
                for (String elemento : elementos) {
                    if (j == 0) {
                        x[xi] = Double.parseDouble(elemento);
                        xi++;
                        j++;
                    } else {
                        y[yi] = Double.parseDouble(elemento);
                        yi++;
                    }
                }
                i++;
            }


            br.close();
            columnas = j+1;

            //imprimo la matriz para verificar que lo leyo correctamente

            System.out.println("LOS ELEMENTOS DE LA TABLA SON:");

            for(i=0;i<filas;i++)
                System.out.println(x[i]+"\t"+ y[i]);


        } catch (IOException e){
            //throw new FileNotFoundException seria la excepcion para cortar el programa si hace falta, la parte de
            //FileNotFoundException puede cambiar dependiendo de la excepcion que se necesita
            throw new FileNotFoundException("No se puede abrir el archivo .dat.");
        }
    }

    public int getFilas() {
        return filas;
    }

    public Double[] getX() {
        return x;
    }

    public Double[] getY() {
        return y;
    }

    public int getColumnas() {
        return columnas;
    }
}
