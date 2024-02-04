"""
Reto #3
    * ¿ES UN NÚMERO PRIMO?
    * Fecha publicación enunciado: 17/01/22
    * Fecha publicación resolución: 24/01/22
    * Dificultad: MEDIA
    *
    * Enunciado: Escribe un programa que se encargue de comprobar si un número es o no primo.
    * Hecho esto, imprime los números primos entre 1 y 100.
"""
print("Reto #03: ¿ES UN NÚMERO PRIMO?")
def num_primo(num):
    if num==2 or  num==3 or  num==5 or  num==7:
        return True
    elif (num!=1 and num%2!=0 and num%3!=0 and num%5!=0 and num%7!=0):
        return True
    else:
        return False
    
num=1
for num in range(1,100):
    if(num_primo(num)):
        print(f"{num} es primo.")
