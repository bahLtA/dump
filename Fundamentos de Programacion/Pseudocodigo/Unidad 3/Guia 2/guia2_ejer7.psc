Algoritmo guia2_ejer7
	Definir monto,salario,horas,horasextra,montoextra Como Real;
	Escribir "Ingrese el monto por hora";
	leer monto;
	Escribir "Ingrese las horas trabajadas";
	leer horas;
	salario=monto*horas;
	si horas>40 Entonces
		montoextra=monto+(monto*0.5);
		horasextra=horas-40;
		salario=salario+(horasextra*montoextra);
	FinSi
	Escribir "El salario a cobrar por el trabajador es de: $",salario;
FinAlgoritmo
