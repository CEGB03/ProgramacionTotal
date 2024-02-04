'''
Reto #0
    * EL FAMOSO "FIZZ BUZZ"
    * Dificultad: FÁCIL
    * Enunciado: Escribe un programa que muestre por consola (con un print) los números de 1 a 100 (ambos incluidos y
    *  con un salto de línea entre cada impresión), sustituyendo los siguientes:
    * - Múltiplos de 3 por la palabra "fizz".
    * - Múltiplos de 5 por la palabra "buzz".
    * - Múltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".
'''
print("Reto #00: EL FAMOSO \"FIZZ BUZZ\"")
count = 1
while count <=100:
    if (count %3==0) and (count %5==0):
        print("fizzbuzz")
    elif count %3==0:
        print("fizz")
    elif count %5==0:
        print("buzz")
    else:
        print(count)
    count = count + 1