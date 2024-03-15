package cegb03.anotacionvoley.logica;

import org.junit.Test;
import static org.junit.Assert.*;

/**
 * The type Equipo test.
 */
public class EquipoTest {

    /**
     * Test rotar.
     */
    @Test
    public void testRotar() {
        // Arrange
        Equipo equipo = new Equipo();
        equipo.setFormacionOriginal(new String[]{"Jugador1", "Jugador2", "Jugador3", "Jugador4", "Jugador5", "Jugador6"});

        // Act
        equipo.rotar();

        // Assert
        assertArrayEquals(new String[]{"Jugador6", "Jugador1", "Jugador2", "Jugador3", "Jugador4", "Jugador5"}, equipo.getFormacionRotacion());
    }

    /**
     * Test grabar.
     */
    @Test
    public void testGrabar() {
        // Arrange
        Equipo equipo = new Equipo();
        equipo.setFormacionOriginal(new String[]{"Jugador1", "Jugador2", "Jugador3", "Jugador4", "Jugador5", "Jugador6"});

        // Act
        equipo.grabar();

        // Assert
        assertEquals("Jugador1", equipo.getPos1());
        assertEquals("Jugador2", equipo.getPos2());
        assertEquals("Jugador3", equipo.getPos3());
        assertEquals("Jugador4", equipo.getPos4());
        assertEquals("Jugador5", equipo.getPos5());
        assertEquals("Jugador6", equipo.getPos6());
    }

    /**
     * Test set saque.
     */
    @Test
    public void testSetSaque() {
        // Arrange
        Equipo equipo = new Equipo();

        // Act
        equipo.setSaque(true);

        // Assert
        assertTrue(equipo.isSaque());
    }

    /**
     * Test get nombre equipo.
     */
    @Test
    public void testGetNombreEquipo() {
        // Arrange
        Equipo equipo = new Equipo();
        equipo.setNombreEquipo("EquipoTest");

        // Assert
        assertEquals("EquipoTest", equipo.getNombreEquipo());
    }
}
