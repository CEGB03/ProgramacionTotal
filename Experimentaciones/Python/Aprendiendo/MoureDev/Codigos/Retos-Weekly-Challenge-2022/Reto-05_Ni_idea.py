"""
Reto #5
    * ASPECT RATIO DE UNA IMAGEN
    * Dificultad: DIFÍCIL
    *
    * Enunciado: Crea un programa que se encargue de calcular el aspect ratio de una imagen a partir de una url.
    * - Url de ejemplo: https://raw.githubusercontent.com/mouredev/mouredev/master/mouredev_github_profile.png
    * - Por ratio hacemos referencia por ejemplo a los "16:9" de una imagen de 1920*1080px.
"""
import requests
from PIL import Image
from io import BytesIO
print("Reto #04: ASPECT RATIO DE UNA IMAGEN")

def calcular_aspect_ratio(url):
    # Obtener la imagen desde la URL
    response = requests.get(url)
    imagen = Image.open(BytesIO(response.content))
    # Leer las dimensiones de la imagen
    ancho, altura = imagen.size
    # Calcular el aspect ratio
    aspect_ratio = ancho / altura
    return aspect_ratio

# URL de ejemplo
url = "https://raw.githubusercontent.com/mouredev/mouredev/master/mouredev_github_profile.png"
# Calcular el aspect ratio de la imagen
aspect_ratio = calcular_aspect_ratio(url)
print(f"El aspect ratio de la imagen es: {aspect_ratio}")
