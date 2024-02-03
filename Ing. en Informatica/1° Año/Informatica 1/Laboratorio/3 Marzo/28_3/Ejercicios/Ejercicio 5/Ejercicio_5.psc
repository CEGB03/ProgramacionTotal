Algoritmo Ejercicio_5
	Escribir "Ingrese la cantidad de Pasos Dados el dìa de Hoy"
	Leer Pasos_Dados
	Escribir "Ingrese la cantidad de Pasos de su Meta Diaria"
	Leer Meta_Diaria
	Faltante=Meta_Diaria-Pasos_Dados
	Si Pasos_Dados==Meta_Diaria Entonces
		Escribir "Usted ha cumplido su Meta diara"
	SiNo
		Si Pasos_Dados>Meta_Diaria Entonces
			Faltante=Faltante*(-1)
			Escribir "Usted ha caminado *Faltantes* mas de su meta diaria"
		SiNo
			Escribir "A usted le faltran *Faltantes* pasos para cumplir su meta diaria"
		Fin Si
	Fin Si
FinAlgoritmo
