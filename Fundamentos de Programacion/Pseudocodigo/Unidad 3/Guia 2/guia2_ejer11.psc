Algoritmo guia2_ejer11
	Definir base,numsocio,total como real;
	Definir nombreclub,nya,tipo Como Caracter;
	Escribir "Ingrese el valor base de la cuota";
	leer base;
	Escribir "Ingrese el nombre del club";
	leer nombreclub;
	Escribir "Ingrese el numero de socio";
	leer numsocio;
	Escribir "Ingrese nombre y apellido del socio";
	leer nya;
	Escribir "Ingrese el tipo de socio";
	leer tipo;
	si tipo="activo" entonces
		total=base;
	FinSi
	si tipo="familiar" entonces
		total=base+(base*0.5);
	FinSi
	si tipo="cadete" entonces
		total=base-(base*0.2);
	FinSi
	
	Escribir "";
	
	Escribir "Club: ",nombreclub;
	Escribir "Tipo del socio ",tipo;
	Escribir "Total a pagar: $",total;
FinAlgoritmo
