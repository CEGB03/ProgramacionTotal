Algoritmo Ejercicio_7
	Escribir 'Cuantos alumnos iran al viaje'
	Leer Alumnos_Viaje
	Si Alumnos_V>=100 Entonces
		Escribir 'Se cobraran los $65 por el viaje y Alumnos_V/4000'
	SiNo
		Si 50>=Alumnos_V<=99 Entonces
			Escribir 'Se cobraran los $70 por el viaje y Alumnos_V/4000'
		SiNo
			Si 30>=Alumnos_V<=49 Entonces
				Escribir 'Se cobraran los $95 por el viaje y Alumnos_V/4000'
			SiNo
				Si Alumnos_V<=29 Entonces
					Escribir 'Se cobraran los $100 por el viaje y Alumnos_V/4000'
				SiNo
					Escribir 'Se ha ingresado un valor erroneo, intente de nuevo'
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo
