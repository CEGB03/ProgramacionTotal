Algoritmo Ejercicio_6
	Escribir 'Ingrese los Valores de Cada lado del triangulo'
	Leer Lado1
	Leer Lado2
	Leer Lado3
	Si Lado1<>Lado2 Y Lado1<>Lado3 Y Lado2<>Lado3 Entonces
		Escribir 'El triangulo es Escaleno' // Todos sus lados distintos
	SiNo
		Si Lado1==Lado2 Y Lado1==Lado3 Entonces
			Escribir 'El triangulo es Equilatero' // Todos sus lados iguales
		SiNo
			Escribir 'El triangulo es Isosceles' // Dos lados iguales y uno solo distinto
		FinSi
	FinSi
FinAlgoritmo
