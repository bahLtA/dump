Algoritmo guia3_ejer23
	//variables importantes
	Definir BolComun,BolEst,BolJub,NumCole,cantEst,cantJub,cantCom Como real;
	Definir recaudadoXRecorrido, sumEst,total,coleMenor,recMenor Como real;
	recMenor=99999999999;
	Escribir "Ingrese el precio del boleto común";
	leer BolComun;
	BolEst=BolComun-(BolComun*0.2);
	BolJub=BolComun-(BolComun*0.4);
	Escribir "Ingrese el número del colectivo";
	leer NumCole;
	Mientras NumCole<>99 Hacer
		Escribir "Ingrese la cantidad de boletos estudiantiles";
		leer cantEst;
		Escribir "Ingrese la cantidad de boletos comunes";
		leer cantCom;
		Escribir "Ingrese la cantidad de boletos jubilados";
		leer cantJub;
		recaudadoXRecorrido=(BolComun*cantCom)+(BolEst*cantEst)+(BolJub*cantJub);
		sumEst=sumEst+cantEst;
		total=total+recaudadoXRecorrido;
		si recMenor>recaudadoXRecorrido Entonces
			coleMenor=NumCole;
			recMenor=recaudadoXRecorrido;
		FinSi
		Escribir "El total recaudado en este recorrido es de: $",recaudadoXRecorrido;
		
		Escribir "";
		Escribir "Ingrese el número de otro colectivo";
		leer NumCole;
	FinMientras
	Escribir "";
	Escribir "Se vendieron un total de ",sumEst," Boletos de estudiantes";
	Escribir "El total recaudado en todos los recaudados es de: $",Total;
	Escribir "El colectivo que menos recaudó fué: ",coleMenor," con un total de $",recMenor;
	
	
	
FinAlgoritmo
