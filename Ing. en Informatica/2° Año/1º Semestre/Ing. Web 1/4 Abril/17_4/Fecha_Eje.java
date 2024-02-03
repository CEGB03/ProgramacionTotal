public class Fecha_Eje {
        private int dia, mes, anio;
        public int getDia() {
            return dia;
        }
        public void setDia(int dia) {
            this.dia = dia;
        }
        public void setAnio(int anio) {
            this.anio = anio;
        }
        public int getAnio() {
            return anio;
        }
        public void setMes(int mes) {
            this.mes = mes;
        }
        public int getMes() {
            return mes;
        }
        public Fecha_Eje(String s){
            int part1=s.indexOf('/');
            int part2=s.lastIndexOf('/');
            String dd=s.substring(0,part1);
            this.dia=Integer.parseInt(dd);
            String mm=s.substring(part1+1, part2);
            this.mes=Integer.parseInt(mm);
            String aa=s.substring(part2+1);
            this.anio=Integer.parseInt(aa);
        }
        public Fecha_Eje(){
        }
        public String toString(){
            return dia+"/"+mes+"/"+anio;
        }
    }

