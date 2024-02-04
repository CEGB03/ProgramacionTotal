"""
Reto #5
    Reto #6
    * INVIRTIENDO CADENAS
    * Fecha publicación enunciado: 07/02/22
    * Fecha publicación resolución: 14/02/22
    * Dificultad: FÁCIL
    *
    * Enunciado: Crea un programa que invierta el orden de una cadena de texto sin usar funciones propias del lenguaje que lo hagan de forma automática.
    * - Si le pasamos "Hola mundo" nos retornaría "odnum aloH"

"""
print("Reto #04: INVIRTIENDO CADENAS")
def invertir(cadena):
    print(cadena)
    new_cadena=cadena[: :-1]
    print(new_cadena)
    return new_cadena
cadena=input("Ingrese una cadena a dar vuelta: ")
print("La cadena ",cadena,", inverida es ",invertir(cadena))