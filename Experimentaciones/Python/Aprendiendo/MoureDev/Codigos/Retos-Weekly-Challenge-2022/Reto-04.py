"""
Reto #4
    * ÁREA DE UN POLÍGONO
    * Dificultad: FÁCIL
    *
    * Enunciado: Crea UNA ÚNICA FUNCIÓN (importante que sólo sea una) que sea capaz de calcular y retornar el área
    *  de un polígono.
    * - La función recibirá por parámetro sólo UN polígono a la vez.
    * - Los polígonos soportados serán Triángulo, Cuadrado y Rectángulo.
    * - Imprime el cálculo del área de un polígono de cada tipo.
"""

print("Reto #04: ÁREA DE UN POLÍGONO")
def area_poligono(figura):
    if figura.lower()=="rectangulo":
        base=float(input(f"Ingrese la magnitud de la base de su {figura}:"))
        altura=float(input(f"Ingrese la magnitud de la altura de su {figura}:"))
        print(f"El area del poligo proporcionado es: base*altura={base}*{altura}", end="")
        return (base*altura)
    elif figura.lower()=="cuadrado":
        base=float(input(f"Ingrese la magnitud del lado de su {figura}:"))
        altura=base
        print(f"El area del poligo proporcionado es: lado*lado={base}*{altura}=", end="")
        return (base*altura)
    elif figura.lower()=="triangulo":
        base=float(input(f"Ingrese la magnitud de la base de su {figura}:"))
        altura=float(input(f"Ingrese la magnitud de la altura de su {figura}:"))
        print(f"El area del poligo proporcionado es: (base*altura)/2=(({base}*{altura})/2)", end="")
        return ((base*altura)/2)
    else:
        print(f"El poligono {figura} no se encuentra disponible para calcular su area.")
poligono=input("Ingrese el poligono al cual le desea calcular el area.\nLas opciones permitidas son:\nTriangulo.\nRectangulo.\nCuadrado.\n")
print(area_poligono(poligono))