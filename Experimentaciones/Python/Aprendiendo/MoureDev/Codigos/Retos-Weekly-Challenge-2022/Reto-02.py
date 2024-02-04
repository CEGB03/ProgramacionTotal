"""
Reto #2
    * LA SUCESIÓN DE FIBONACCI
    * Dificultad: DIFÍCIL
    *
    * Enunciado: Escribe un programa que imprima los 50 primeros números de la sucesión de Fibonacci empezando en 0.
    * La serie Fibonacci se compone por una sucesión de números en la que el siguiente siempre es la suma de los dos
    * anteriores.
    * 0, 1, 1, 2, 3, 5, 8, 13...
"""
print("Reto #02: LA SUCESIÓN DE FIBONACCI")
def seces_fibo(num):
    if num <= 0:
        return 0
    elif num == 1:
        return 1
    else:
        return seces_fibo(num-1) + seces_fibo(num-2)
num_terminos=int(input("Ingrese el número de términos de la sucesión de Fibonacci a generar: "))
for i in range(num_terminos):
    print(seces_fibo(i))