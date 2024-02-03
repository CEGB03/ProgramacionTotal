Algoritmo Ejercicios_Teo_5
	Escribir 'Ingrese la cantidad de alumnos del curso'
	Leer Alumnos_C
	Escribir 'Ingrese la primer nota'
	Leer Nota_A
	Mientras Nota_A<>-10 Hacer
		Promedio_S_D <- Promedio_S_D+Nota_A
		Escribir 'Ingrese la proxima nota, al salir se mostrara el promedio'
		Leer Nota_A
	FinMientras
	Promedio_D <- Promedio_S_D/Alumnos_C
	Escribir 'El promedio de las notas sera: <<Promedio_D'
FinAlgoritmo
