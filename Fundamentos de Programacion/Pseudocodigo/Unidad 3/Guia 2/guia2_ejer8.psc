Algoritmo guia2_ejer8
	Definir anio Como Real;
	Escribir "Ingrese un año";
	leer anio;
	si anio%100=0 y anio%400=0 Entonces
		Escribir "El año es bisiesto";
	SiNo
		si anio%4=0 y anio%100<>0 Entonces
			Escribir "El año es bisiesto";
		SiNo
			Escribir "El año no es bisiesto";
		FinSi
	FinSi
FinAlgoritmo
