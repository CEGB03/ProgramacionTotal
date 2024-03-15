package cegb03.anotacionvoley.logica;

import java.util.Objects;

/**
 * The type Equipo.
 *
 * @author ADMIN
 */
public class Equipo {
    
    private String nombreEquipo;
    private String pos1 = "AB1";
    private String pos2 = "AB2";
    private String pos3 = "AB3";
    private String pos4 = "AB4";
    private String pos5 = "AB5";
    private String pos6 = "AB6";
    private String[] formacionOriginal = {pos1, pos2, pos3, pos4, pos5, pos6};
    private String[] formacionRotacion = {pos1, pos2, pos3, pos4, pos5, pos6};
    private int puntaje = 0;
    private boolean saque;


    /**
     * Rotar.
     */
    public void rotar() {
        pos1 = formacionRotacion[1];
        pos2 = formacionRotacion[2];
        pos3 = formacionRotacion[3];
        pos4 = formacionRotacion[4];
        pos5 = formacionRotacion[5];
        pos6 = formacionRotacion[0];
        
         formacionRotacion[0] = pos1;
         formacionRotacion[1] = pos2;
         formacionRotacion[2] = pos3;
         formacionRotacion[3] = pos4;
         formacionRotacion[4] = pos5;
         formacionRotacion[5] = pos6;
        
    }

    /**
     * Grabar.
     */
    public void grabar(){
        setFormacionRotacion(formacionOriginal);
        pos1 = formacionOriginal[0];
        pos2 = formacionOriginal[1];
        pos3 = formacionOriginal[2];
        pos4 = formacionOriginal[3];
        pos5 = formacionOriginal[4];
        pos6 = formacionOriginal[5];
    }


    /**
     * Is saque boolean.
     *
     * @return the boolean
     */
    public boolean isSaque() {
        return saque;
    }

    /**
     * Sets saque.
     *
     * @param saque the saque
     */
    public void setSaque(boolean saque) {
        this.saque = saque;
    }

    /**
     * Gets num jugador.
     *
     * @return the num jugador
     */
    public String getNumJugador() {
        return nombreEquipo;
    }

    /**
     * Gets nombre equipo.
     *
     * @return the nombre equipo
     */
    public String getNombreEquipo() {
        return nombreEquipo;
    }

    /**
     * Sets nombre equipo.
     *
     * @param nombreEquipo the nombre equipo
     */
    public void setNombreEquipo(String nombreEquipo) {
        this.nombreEquipo = nombreEquipo;
    }

    /**
     * Gets pos 1.
     *
     * @return the pos 1
     */
    public String getPos1() {
        return pos1;
    }

    /**
     * Sets pos 1.
     *
     * @param pos1 the pos 1
     */
    public void setPos1(String pos1) {
        this.pos1 = pos1;
    }

    /**
     * Gets pos 2.
     *
     * @return the pos 2
     */
    public String getPos2() {
        return pos2;
    }

    /**
     * Sets pos 2.
     *
     * @param pos2 the pos 2
     */
    public void setPos2(String pos2) {
        this.pos2 = pos2;
    }

    /**
     * Gets pos 3.
     *
     * @return the pos 3
     */
    public String getPos3() {
        return pos3;
    }

    /**
     * Sets pos 3.
     *
     * @param pos3 the pos 3
     */
    public void setPos3(String pos3) {
        this.pos3 = pos3;
    }

    /**
     * Gets pos 4.
     *
     * @return the pos 4
     */
    public String getPos4() {
        return pos4;
    }

    /**
     * Sets pos 4.
     *
     * @param pos4 the pos 4
     */
    public void setPos4(String pos4) {
        this.pos4 = pos4;
    }

    /**
     * Gets pos 5.
     *
     * @return the pos 5
     */
    public String getPos5() {
        return pos5;
    }

    /**
     * Sets pos 5.
     *
     * @param pos5 the pos 5
     */
    public void setPos5(String pos5) {
        this.pos5 = pos5;
    }

    /**
     * Gets pos 6.
     *
     * @return the pos 6
     */
    public String getPos6() {
        return pos6;
    }

    /**
     * Sets pos 6.
     *
     * @param pos6 the pos 6
     */
    public void setPos6(String pos6) {
        this.pos6 = pos6;
    }

    /**
     * Get formacion original string [ ].
     *
     * @return the string [ ]
     */
    public String[] getFormacionOriginal() {
        return formacionOriginal;
    }

    /**
     * Sets formacion original.
     *
     * @param formacionOriginal the formacion original
     */
    public void setFormacionOriginal(String[] formacionOriginal) {
        this.formacionOriginal = formacionOriginal;
        grabar();
    }

    /**
     * Get formacion rotacion string [ ].
     *
     * @return the string [ ]
     */
    public String[] getFormacionRotacion() {
        return formacionRotacion;
    }

    /**
     * Sets formacion rotacion.
     *
     * @param formacionRotacion the formacion rotacion
     */
    public void setFormacionRotacion(String[] formacionRotacion) {
        this.formacionRotacion = formacionRotacion;
    }

    /**
     * Gets puntaje.
     *
     * @return the puntaje
     */
    public int getPuntaje() {
        return puntaje;
    }

    /**
     * Sets puntaje.
     *
     * @param puntaje the puntaje
     */
    public void setPuntaje(int puntaje) {
        this.puntaje = puntaje;
    }

    /**
     * Esta cargado boolean.
     *
     * @return the boolean
     */
    public boolean estaCargado() {
        return !Objects.equals(formacionOriginal[0], "AB1");
    }

    /**
     * Contiene jugador boolean.
     *
     * @param valor1 the valor 1
     * @return the boolean
     */
    public boolean contieneJugador(String valor1) {
        for (String posicion : formacionRotacion) {
                if( posicion.equals(valor1))
                    return true;
        }
        return false;
    }

    /**
     * Cambio jugador.
     *
     * @param valor2 the valor 2
     * @param valor3 the valor 3
     */
    public void cambioJugador(String valor2, String valor3){
        for (int ii=0 ; ii < 6 ; ii++) {
            if ( valor2.equals(formacionRotacion[ii]))
                    formacionRotacion[ii] = valor3;
        }
    }
}
