import java.util.Scanner;

public class PreParcial {
    public static void main(String[] args) {
        //              char anio=241; == ñ.
        //Como pasar de string a cualquier tipo de dato{
            Scanner sc = new Scanner(System.in);
            int i=Integer.parseInt(sc.nextLine());
            float f=Float.parseFloat(sc.nextLine());
            double d=Double.parseDouble(sc.nextLine());
            long l=Long.parseLong(sc.nextLine());;
            String s = sc.nextLine();
            boolean b=Boolean.parseBoolean(sc.nextLine());
            char c = sc.nextLine().charAt(0);// para sacar la primer letra del string
        //}
        // Cosas importantes a recordar{
            //      Al usar tipo var, se debe definir que tipo de dato pasara a ser inicializandolo.
            var usuario = "Juan";
            var ii = 3;
            var jj = 4;
            System.out.println(ii + jj);  //  Suma las variables
            System.out.println(ii + jj + usuario);  //  Suma las variables y agreda el string
            System.out.println(usuario + ii + jj);  //  No suma las variables si el string esta antes
            System.out.println(usuario + (ii + jj));  //  Si suma las variables si el string esta antes, pero las variables en parentesis
        //}
        //      TipoDatos
        /*
            {
                //      Tipo Byte
                byte numByte=(byte) 127;
                System.out.println("numByte = " + numByte);
                System.out.println("El numero maximo del tipo byte es:"+Byte.MAX_VALUE);
                System.out.println("El numero minimo del tipo byte es:"+Byte.MIN_VALUE);

                //      Tipo Short
                short numShort=(short) 32767;
                System.out.println("numShort = " + numShort);
                System.out.println("El numero maximo del tipo short es:"+Short.MAX_VALUE);
                System.out.println("El numero minimo del tipo short es:"+Short.MIN_VALUE);

                //      Tipo Int
                int numInt=(int) 3276647;
                System.out.println("numInt = " + numInt);
                System.out.println("El numero maximo del tipo int es:"+Integer.MAX_VALUE);
                System.out.println("El numero minimo del tipo int es:"+Integer.MIN_VALUE);

                //      Tipo Long
                long numLong= 3276765485L;
                System.out.println("numLong = " + numLong);
                System.out.println("El numero maximo del tipo long es:"+Long.MAX_VALUE);
                System.out.println("El numero minimo del tipo long es:"+Long.MIN_VALUE);

                //      Tipo Float
                float numFloat= 32.85f;
                System.out.println("numFloat = " + numFloat);
                System.out.println("El numero maximo del tipo float es:"+Float.MAX_VALUE);
                System.out.println("El numero minimo del tipo float es:"+Float.MIN_VALUE);

                //      Tipo Double
                double numDouble= 32.85;
                System.out.println("numDouble = " + numDouble);
                System.out.println("El numero maximo del tipo double es:"+Double.MAX_VALUE);
                System.out.println("El numero minimo del tipo double es:"+Double.MIN_VALUE);

            }
         */
        // formas de escribir
            {
                char letra1='a';
                System.out.println("letra1 = " + letra1);
                char letra2='\u0021';
                System.out.println("letra2 = " + letra2);
                char letra3='!';
                System.out.println("letra3 = " + letra3);
                char letra4=33;
                System.out.println("letra4 = " + letra4);
                var letra5='\u0021';
                System.out.println("letra5 = " + letra5);
                var letra6= 33;
                System.out.println("letra6 = " + letra6);
                var lettra7="33";
                System.out.println("lettra7 = " + lettra7);
                var letra8='!';
                System.out.println("letra8 = " + letra8);
                int letra9='!';
                System.out.println("letra9 = " + letra9);

            }
            //  Imprimir arreglo bidimencional.
            {
                for (int ii = 0; ii < "nombreArreglo".length; ii++) {//      Imprime segun numero de finlas
                    for (int jj = 0; jj < "nombreArreglo"[ii].length; jj++) {//      Imprime segun numero de columnas}
                    }
                }
            }
            //  Etiquetas(no recomendadas
            {
                inicio://       Etiqueta, no aconsejable usar.
                for (int iii = 0; ii < 10; ii++) {
                    if(iii%2==0)
                        continue inicio;
                    System.out.println("iii = " + iii);
                    // imprime 1,3,5,7,9|| ya que al toparse con la etiqueta vuelve a donde se declaro
                }
            }
            //  como usar variables fuera del main
            {
                int i=5;//      fuera del main
                System.out.println("varialbe intancia (Obejto) = " + new "nombreArchivoClase"().i);//      dentro del main
            }
          */
            //  SubStrings
          /*
            {
                substring(inicio, fin-1)
            }
          */
          //  Libreria Math
          /*
            {
                Math.abs() --> valor absoluto
                Math.round() --> redondeado
            }
          */
    }
}
