package Fechas;

public class Fecha {
    //Esto tambien es encapsulamiento, atributos privados
    private int day;
    private int month;
    private int year;

    public Fecha(String s) {
        //"Ejemplo de String s: 11/05/1998"
        //Buscamos la primer ocurrencia de /:
        int pos1 = s.indexOf('/');
        //Buscamos la ultima ocurrencia de :
        int pos2 = s.lastIndexOf('/');
        
        /*Tomas el string escrito hasta lo anterior a la primer barra (pos1) sin incluir esta, y 
        lo convertis a int.
        El primer parametro de substring esta incluido, y el segundo parametro de substring no lo esta.*/
        String sDia = s.substring(0, pos1);
        day = Integer.parseInt(sDia);
        
        //Tomas el string escrito desde lo posterior a la primer barra (pos1) sin incluir esta, hasta lo anterior a la segunda barra (pos2) y lo convertis a int:
        String sMes = s.substring(pos1+1, pos2);
        month = Integer.parseInt(sMes);
        
        //Tomas el string escrito desde la ultima barra (pos2) + 1 hasta el final del string incluido y lo convertis a int
        String sAnio = s.substring(pos2+1);
        year = Integer.parseInt(sAnio);
    }
    
    public Fecha(int day, int month, int year) {
        this.day = day;
        this.month = month;
        this.year = year;
    }
    
    public Fecha() {
        
    }
    
    //Aquí hay encapsulamiento ya que estamos utilizando los metodos privados en el metodo publico addDays
    //Se oculta la complejidad de los metodos fechaToDays y daysToFecha
    private int fechaToDays() {
        return (this.day) + (this.month*30) + (this.year * 360);
    }
    
    private void daysToFecha(int ii) {
        this.year = (int) ii / 360;
        int resto = ii % 360;
        this.month = (int) resto / 30;
        this.day = resto % 30;
        
        if(this.day == 0) {
            this.day = 30;
            this.month--;
        }
        if(this.month == 0) {
            this.month = 12;
            this.year--;
        }
    }
    
    public void addDays(int d) {
        int sum = fechaToDays() + d;
        daysToFecha(sum);
    }
    
    public String toString() {
        return day + "/" + month + "/" + year;
    }
    
    public boolean equals(Object o) {
        Fecha otraFecha = (Fecha)o; //Convierte el objeto que le pasamos (o) a un objeto de tipo Fecha
        return (day==otraFecha.day) && (month==otraFecha.month) && (year==otraFecha.year);
    }
    
     public int getDay() {
        return day;
    }

    public void setDay(int day) {
        this.day = day;
    }

    public int getMonth() {
        return month;
    }

    public void setMonth(int month) {
        this.month = month;
    }

    public int getYear() {
        return year;
    }

    public void setYear(int year) {
        this.year = year;
    }
}
