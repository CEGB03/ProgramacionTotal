// Usado en Ejercicio 5
package utils;
public class Ordenamientos<AnyType> {
    /**
     * Imprime el Arreglo este ordenado o no
     * @param a Arreglo a ordenar
     *      * @param <AnyType> tipo de dato del arreglo
     */
    public <AnyType extends Comparable<? super AnyType>>
    AnyType[] ImprimirArreglo(AnyType[] a){
        for (int ii=0; ii<a.length; ii++){
            if ( (a.length-1) ==ii)
                System.out.println(a[ii]+".");
            else
                System.out.print(a[ii]+", ");
        }

        return a;
    }

    /**
     * Ordenamiento por Inserccion para cualquier tipo de datos
     * @param a Arreglo a ordenar
     * @param <AnyType> tipo de dato del arreglo
     */
    public <AnyType extends Comparable<? super AnyType>>
    AnyType[] insertionShort_T(AnyType[] a){
        for (int ii=1; ii<a.length; ii++){
            AnyType temp =a[ii];
            int jj=ii;
            for (; jj>0 && temp.compareTo(a[jj-1])<0; jj--)
                a[jj]=a[jj-1];
            a[jj]=temp;
        }

        return a;
    }
    /**
     * Ordenamiento Shell
     * @param a Arreglo a ordenar
     * @param <AnyType> tipo de dato del arreglo
     */
    public static <AnyType extends Comparable<? super AnyType>>
    AnyType[] shell(AnyType[] a) {
        int n = a.length;
        int gap, i, j;
        for (gap = n / 2; gap > 0; gap /= 2) {
            for (i = gap; i < n; i++) {
                AnyType temp = a[i];
                for (j = i - gap; j >= 0 && temp.compareTo(a[j]) < 0; j -= gap) {
                    a[j + gap] = a[j];
                }
                a[j + gap] = temp;
            }
        }

        return a;
    }

    /**
     * Ordenamiento Quicksort
     * @param a Arreglo a ordenar
     * @param left indice inicial del arreglo a ordenar
     * @param right indice final del arreglo a ordenar
     * @param <AnyType> tipo de dato del arreglo
     */
    public <AnyType extends Comparable<? super AnyType>>
    AnyType[] quicksort(AnyType[] a, int left, int right) {
        int i, j;
        AnyType temp;
        i = left;
        j = right;
        do {
            while (a[j].compareTo(a[i]) > 0 && j > i) j--;
            if (i < j) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                i++;
            }
            while (a[i].compareTo(a[j]) < 0 && i < j) i++;
            if (i < j) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                j--;
            }
        } while (i < j);
        if (left < j) quicksort(a, left, j - 1);
        if (i < right) quicksort(a, i + 1, right);

        return a;
    }

}
