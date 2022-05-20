Algoritmo guia3_ejer24
	Definir precio,cant,total Como Real;
	Escribir "Ingrese la cantidad de unidades vendidas";
	leer cant;
	Mientras cant<>0 Hacer
		Escribir "Ingrese el precio unitario";
		leer precio;
		si cant<0 y precio<0 Entonces
			total=total+(cant*precio);
		SiNo
			Escribir "El precio y la cantidad debe ser un número positivo, ingreselo nuevamente";
		FinSi
		Escribir "";
		Escribir "Ingrese nuevamente la cantidad de unidades vendidas";
		leer cant;
	FinMientras
	Escribir "";
	Escribir "El importe total de la factura es de: $",total;
FinAlgoritmo
