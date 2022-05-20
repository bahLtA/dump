Algoritmo guia2_ejer10
	Definir cat,antiguedad,sueldo,aumento Como Real;
	Definir nya Como Caracter;
	Escribir "Ingrese el Apellido y Nombre del empleado";
	leer nya;
	Escribir "Ingrese la categoria del empleado";
	leer cat;
	segun cat Hacer
		1: 	sueldo=60000;
		2:	sueldo=50000;
		3:	sueldo=40000;
		4:	sueldo=30000;
	FinSegun
	Escribir "Ingrese la antigüedad del empleado";
	leer antiguedad;
	si antiguedad>=0 y antiguedad<=10 Entonces
		aumento=sueldo+(sueldo*0.2);
	SiNo
		si antiguedad>=11 y antiguedad<=15 Entonces
			aumento=sueldo+(sueldo*0.5);
		SiNo
			si antiguedad>=16 y antiguedad<=20 Entonces
				aumento=sueldo+(sueldo*0.8);
			SiNo
				si antiguedad>20 Entonces
					aumento=sueldo+sueldo;
				FinSi
			FinSi
		FinSi
	FinSi
	
	Escribir "";
	Escribir "APELLIDO Y NOMBRE: ",nya;
	Escribir "CATEGORIA: ",cat,"					SUELDO BÁSICO: $",sueldo;
	Escribir "ANTIGÜEDAD: ",antiguedad," AÑOS";
	Escribir "SUELDO TOTAL: $",aumento;
	
FinAlgoritmo
