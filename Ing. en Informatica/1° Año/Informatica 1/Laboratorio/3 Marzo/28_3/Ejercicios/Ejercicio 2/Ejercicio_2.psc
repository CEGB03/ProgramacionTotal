Algoritmo Ejercicio_2
	Escribir "Ingrese la cantidad de unidades que tiene la materia en total"
	Leer UnidadesMateria
	Escribir "Ingrese la cantidad de unidades que ha estudiado de la materia"
	Leer UnidadesEstudiadas
	Si UnidadesMateria==UnidadesEstudiadas Entonces
		Escribir "El alumno ha estudiado todas las materias"
	SiNo
		Escribir "Al alumno le faltan " 'UnidadesFal=UnidadesMateria-UnidadesEstudiadas' "para terminar de estudiar todas las unidades"
	Fin Si
	
FinAlgoritmo