"""
Reto #1
    * ¿ES UN ANAGRAMA?
    * Dificultad: MEDIA
    *
    * Enunciado: Escribe una función que reciba dos palabras (String) y retorne verdadero o falso (Boolean)
    *  según sean o no anagramas.
    * Un Anagrama consiste en formar una palabra reordenando TODAS las letras de otra palabra inicial.
    * NO hace falta comprobar que ambas palabras existan.
    * Dos palabras exactamente iguales no son anagrama.
"""
print("Reto #01: ¿ES UN ANAGRAMA?")

def es_anagrama(palabra1, palabra2):
    # Convierte las palabras a minúsculas y elimina los espacios en blanco
    palabra1 = palabra1.lower().replace(" ", "")
    palabra2 = palabra2.lower().replace(" ", "")
    
    # Verifica si las palabras tienen la misma cantidad de caracteres
    if len(palabra1) != len(palabra2):
        return False
    
    # Convierte las palabras en listas de caracteres y las ordena
    lista1 = sorted(list(palabra1))
    lista2 = sorted(list(palabra2))
    
    # Compara si las listas ordenadas son iguales
    if lista1 == lista2:
        return True
    else:
        return False

# Solicita al usuario ingresar las palabras
palabra1 = input("Ingresa la primera palabra: ")
palabra2 = input("Ingresa la segunda palabra: ")

# Verifica si las palabras son anagramas
if palabra1 == palabra2:
    print("Las palabras son iguales. No se consideran anagramas.")
elif es_anagrama(palabra1, palabra2):
    print("¡Las palabras son anagramas!")
else:
    print("Las palabras no son anagramas.")
