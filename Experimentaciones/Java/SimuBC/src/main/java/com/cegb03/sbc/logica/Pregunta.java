package com.cegb03.simulacrobuenconductor.logica;

import java.io.Serializable;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.NamedQueries;
import javax.persistence.NamedQuery;

/**
 *
 * @author CEGB03
 */
@Entity(name = "cordoba")
@NamedQueries({
    @NamedQuery(name = "Pregunta.findAll", query = "SELECT p FROM cordoba p"), 
    @NamedQuery(name = "Pregunta.countAll", query = "SELECT COUNT(p) FROM cordoba p")
})

public class Pregunta implements Serializable {
    
    @Id
    @GeneratedValue(strategy = GenerationType.SEQUENCE)
    private int numPregunta;
    private char veiculo;
    private String pregunta;
    private String opnA;
    private String opnB;
    private String opnC;
    private String opnD;
    private String opnCorrecta;

    // Constructors
    public Pregunta(){}
    
    public Pregunta(int numPregunta, char veiculo, String pregunta, String opnA, String opnB, String opnC, String opnD, String opnCorrecta) {
        this.numPregunta = numPregunta;
        this.veiculo = veiculo;
        this.pregunta = pregunta;
        this.opnA = opnA;
        this.opnB = opnB;
        this.opnC = opnC;
        this.opnD = opnD;
        this.opnCorrecta = opnCorrecta;
    }
    public String toString(){
        return "La pregunta " + numPregunta + " y dice lo siguiente:\n" + pregunta + "\na) " + opnA + "\nb) " + opnB + "\nc) " + opnC + "\nd) " + opnD + "\ncorrecta) " + opnCorrecta;
    }
    
    //getters y setters
    public int getNumPregunta() {return numPregunta;}

    public void setNumPregunta(int numPregunta) {this.numPregunta = numPregunta;}

    public char getVeiculo() {return veiculo;}

    public void setVeiculo(char veiculo) {this.veiculo = veiculo;}

    public String getPregunta() {return pregunta;}

    public void setPregunta(String pregunta) {this.pregunta = pregunta;}

    public String getOpnA() {return opnA;}

    public void setOpnA(String opnA) {this.opnA = opnA;}

    public String getOpnB() {return opnB;}

    public void setOpnB(String opnB) {this.opnB = opnB;}

    public String getOpnC() {return opnC;}

    public void setOpnC(String opnC) {this.opnC = opnC;}

    public String getOpnD() {return opnD;}

    public void setOpnD(String opnD) {this.opnD = opnD;}

    public String getOpnCorrecta() {return opnCorrecta;}

    public void setOpnCorrecta(String opnCorrecta) {this.opnCorrecta = opnCorrecta;}
    
}
