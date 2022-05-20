Algoritmo guia2_ejer4
	Definir lado1,lado2,lado3,perimetro Como Real;
	Definir mensaje Como Caracter;
	
	Escribir "Ingrese el 1er lado";
	leer lado1;
	Escribir "Ingrese el 2do lado";
	leer lado2;
	Escribir "Ingrese el 3er lado";
	leer lado3;
	
	si lado1=lado2 Entonces
		si lado1=lado3 Entonces
			mensaje="Equilátero";
		SiNo
			mensaje="Isósceles";
		FinSi
	SiNo
		si lado1=lado3 Entonces
			mensaje="Isósceles";
		SiNo
			si lado2=lado3 Entonces
				mensaje="Isósceles";
			SiNo
				mensaje="Escaleno";
			FinSi
		FinSi
	FinSi
	perimetro=lado1+lado2+lado3;
	Escribir "";
	Escribir "Tipo de triangulo: ",mensaje;
	Escribir "Perimetro: ",perimetro;
	
FinAlgoritmo
