import java.util.ArrayList;
import java.util.List;
public class Historial {
    private String x;
    private String y;
    private String resultado;
    private Integer operacion;
    List calculo;
    List histo;
    private String operacionesEjecucion[] = {" + ", " - ", " * ", " / "};
    Historial(){
        calculo=new ArrayList<>();
        histo=new ArrayList<>();
    }
    public void agregarCalculo(){
        calculo.add("\n"+getX()+ operacionesEjecucion[getOperacion()-1] +getY()+" = "+getResultado());
        histo.addAll(calculo);
        calculo.remove(0);
    }
    public Integer getOperacion() {
        return operacion;
    }

    public String getResultado() {
        return resultado;
    }

    public String getX() {
        return x;
    }

    public String getY() {
        return y;
    }

    public List getHisto() {
        return histo;
    }
    public void setOperacion(Integer operacion) {
        this.operacion = operacion;
    }

    public void setX(String x) {
        this.x = x;
    }

    public void setY(String y) {
        this.y = y;
    }

    public void setResultado(String resultado) {
        this.resultado = resultado;
    }

}
