Algoritmo guia3_ejer25
	Definir NumCom,cantAlum,nota,sumNotaxCom,cont,contTot,sumNotaTot como real;
	Escribir "Ingrese el número de la comision";
	leer NumCom;
	Mientras NumCom<>999 Hacer
		cont=0;
		sumNotaxCom=0;
		Escribir "Ingrese la cantidad de alumnos de la comision ",NumCom;
		leer cantAlum;
		Repetir
			Escribir "Ingrese la nota del alumno de la comisión ",NumCom;
			leer nota;
			sumNotaxCom=sumNotaxCom+nota;
			cont=cont+1;
			Escribir "";
		Hasta Que cont=cantAlum
		Escribir "La comisión ",NumCom," tiene un promedio de ",sumNota/cantAlum;
		conttot=conttot+cont;
		sumNotaTot=sumNotaTot+sumNota;
		Escribir "";
	FinMientras
	Escribir "";
	Escribir "El promedio total es de ",sumNotaTot/conttot;
FinAlgoritmo
