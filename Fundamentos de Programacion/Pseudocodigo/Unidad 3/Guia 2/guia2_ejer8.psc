Algoritmo guia2_ejer8
	Definir anio Como Real;
	Escribir "Ingrese un a�o";
	leer anio;
	si anio%100=0 y anio%400=0 Entonces
		Escribir "El a�o es bisiesto";
	SiNo
		si anio%4=0 y anio%100<>0 Entonces
			Escribir "El a�o es bisiesto";
		SiNo
			Escribir "El a�o no es bisiesto";
		FinSi
	FinSi
FinAlgoritmo
