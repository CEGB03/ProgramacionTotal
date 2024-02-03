public class Clase7_Tema3{
    public static void main(String[] args) {
        //      Definfir dimenciones de matrices
        //  contantes en mayuscula
        final int RENGLONES=5;
        final int FILAS=6;
        int variable =100;
        //      Definir la matriz
        int [][] matriz=new int[FILAS][RENGLONES];
        for (int ii = 0; ii < FILAS; ii++) {//      matriz.leng= num de filas
            for (int jj = 0; jj < RENGLONES; jj++) {
                matriz[ii][jj]=variable;
                variable+=100;
            }
        }

        for (int ii = 0; ii < matriz.length; ii++) {//      Imprime segun numero de finlas
            for (int jj = 0; jj < matriz[ii].length; jj++) {//      Imprime segun numero de columnas
                System.out.print("matriz["+ii+"]["+jj+"] = " + matriz[ii][jj]+"  ");
            }
            System.out.println();
        }
        System.exit(0);
    }
}
