Algoritmo guia2_ejer12
	Definir preciobase, zona,preciof,imp Como Real;
	Escribir "Ingrese el precio base del alquiler";
	leer preciobase;
	Escribir "Ingrese la zona donde queda el alquiler (1, 2 o 3)";
	leer zona;
	Segun zona Hacer
		1: imp=preciobase*0.15;
		2:imp=preciobase*0.1;
		3:imp=preciobase*0.08;
	FinSegun
	preciof=preciobase+imp;
	Escribir "";
	Escribir "El precio base del alquiler es de: $",preciobase;
	Escribir "El monto de impuestos es de: $",imp;
	Escribir "El total a pagar es de: $",preciof;
FinAlgoritmo
