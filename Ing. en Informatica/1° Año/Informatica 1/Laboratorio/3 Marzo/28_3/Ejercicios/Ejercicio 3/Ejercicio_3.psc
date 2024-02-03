Algoritmo Ejercicio_3
	
	Escribir "Ingrese el numero de minutos que ha realizado localmente"
	Leer Min_Loc
	Escribir "Ingrese el numero de minutos que ah realizado a larga distancia"
	Leer Min_Dis
	Si (Min_Dis>1000YMin_Loc>1000) Entonces
		Min_Dis=Min_Dis*0.1
		Min_Loc=Min_Loc*0.05
		Total=Min_Dis+Min_Loc
		Total=Total*0.1
		Escribir "Usted 
	SiNo
		Min_Dis=Min_Dis*0.1
		Min_Loc=Min_Loc*0.05
		Total=Min_Dis+Min_Loc
		Escribir  "Usted no aplica a la promocion de descuento activa actualmente y tendra que pagar "Total
	Fin Si
	
FinAlgoritmo