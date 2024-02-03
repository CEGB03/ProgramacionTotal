Algoritmo Ejercicio_8
	Escribir 'Cuantos alumnos iran al viaje'
	Leer Alumnos_V
	Si Alumnos_V>=100 Entonces
		Alumnos_V <- (Alumnos_V/4000)+65
		Escribir 'Se cobraran $<<Alumnos_V<< por cada alumnos que vaya al viaje\nDonde se contemplan los $65 par ael viaje y los 4000 que hay que pagar para el Colectivo'
	SiNo
		Si 50<=Alumnos_V Y Alumnos_V<=99 Entonces
			Alumnos_V <- (Alumnos_V/4000)+70
			Escribir 'Se cobraran $<<Alumnos_V<< por cada alumnos que vaya al viaje\nDonde se contemplan los $70 par ael viaje y los 4000 que hay que pagar para el Colectivo'
		SiNo
			Si 30<=Alumnos_V Y Alumnos_V<=49 Entonces
				Alumnos_V <- (Alumnos_V/4000)+95
				Escribir 'Se cobraran $<<Alumnos_V<< por cada alumnos que vaya al viaje\nDonde se contemplan los $95 par ael viaje y los 4000 que hay que pagar para el Colectivo'
			SiNo
				Si Alumnos_V<=29 Entonces
					Alumnos_V <- (Alumnos_V/4000)+100
					Escribir 'Se cobraran $<<Alumnos_V<< por cada alumnos que vaya al viaje\nDonde se contemplan los $100 par ael viaje y los 4000 que hay que pagar para el Colectivo'
				SiNo
					Escribir 'Se ha ingresado un valor erroneo, intente de nuevo'
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo
