import random

# Definir las cartas del juego
cartas = ["As", "2", "3", "4", "5", "6", "7", "Sota", "Caballo", "Rey"]
palos = ["Espadas", "Copas", "Bastos", "Oros"]
mazo = [(carta, palo) for carta in cartas for palo in palos]

# Función para calcular el puntaje de una carta
def calcular_puntaje(carta, palo):
    puntajes = {
        ("4", None): 14,
        ("5", None): 13,
        ("6", None): 12,
        (("7", "Copas"), ("7", "Bastos")): 11,
        ("Sota", None): 10,
        ("Caballo", None): 9,
        ("Rey", None): 8,
        (("As", "Copas"), ("As", "Oros")): 7,
        ("2", None): 6,
        ("3", None): 5,
        (("7", "Oros"), ("7", "Espadas")): 4,
        ("As", "Bastos"): 2,
        ("As", "Espadas"): 1,
    }
    return puntajes.get((carta, palo), 15)


# Función para jugar una ronda
def jugar_ronda():
    # Repartir las cartas a los jugadores
    random.shuffle(mazo)
    cartas_jugador = mazo[:3]
    cartas_computadora = mazo[3:6]

    # Juego de las 3 cartas
    puntaje_jugador = 0
    puntaje_computadora = 0

    for i in range(3):
        print("Tienes las siguientes cartas:", cartas_jugador)
        if len(cartas_jugador)==3:
            carta_jugador = input("Selecciona una carta para tirar (1, 2, 3): ")
        if len(cartas_jugador)==2:
            carta_jugador = input("Selecciona una carta para tirar (1, 2): ")
        if len(cartas_jugador)==1:
            carta_jugador = input("Selecciona una carta para tirar (1): ")
        carta_jugador = int(carta_jugador) - 1
        carta_computadora = random.randint(0, 2)

        print("Has tirado:", cartas_jugador[carta_jugador])
        print("La computadora ha tirado:", cartas_computadora[carta_computadora])
        calc_J=calcular_puntaje(cartas_jugador[carta_jugador][0], cartas_jugador[carta_jugador][1])
        calc_P=calcular_puntaje(cartas_computadora[carta_computadora][0], cartas_computadora[carta_computadora][1])
        if calc_J >calc_P:
            puntaje_computadora += 1
        elif calc_J <calc_P:
            puntaje_jugador += 1
        else:
            if puntaje_jugador <puntaje_computadora:
                puntaje_computadora += 1
            elif puntaje_jugador >puntaje_computadora:
                puntaje_jugador += 1
            else:
                puntaje_jugador += 0
                puntaje_computadora += 0
        print(f"El puntaje actual es: Jugador: {puntaje_jugador} a PC: {puntaje_computadora}")
        # Eliminar la carta seleccionada del arreglo de cartas del jugador
        del cartas_jugador[carta_jugador]

    # Determinar el ganador de la ronda
    if (puntaje_jugador > puntaje_computadora):
        print("¡Has ganado la ronda!")
        return "jugador"
    elif (puntaje_jugador < puntaje_computadora):
        print("La computadora ha ganado la ronda.")
        return "computadora"
    else:
        print("Empate en la ronda.")
        return "empate"

# Función principal para jugar el juego completo
def jugar_juego():
    rondas_jugador = 0
    rondas_computadora = 0
    
    for _ in range(15):
        resultado_ronda = jugar_ronda()

        if resultado_ronda == "jugador":
            rondas_jugador += 1
        elif resultado_ronda == "computadora":
            rondas_computadora += 1

    if rondas_jugador > rondas_computadora:
        print("¡El jugador ha ganado el juego con {} rondas!".format(rondas_jugador))
    elif rondas_jugador < rondas_computadora:
        print("¡La computadora ha ganado el juego con {} rondas!".format(rondas_computadora))
    else:
        print("El juego ha terminado en empate.")



# Iniciar el juego
jugar_juego()
