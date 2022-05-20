Algoritmo EjPrac2
	//Datos del cliente
	Definir nombre Como Caracter;
	Definir TAcum como real;
	//Datos del viaje
	Definir precioViaje,kms,precioF como real;
	Definir dest Como Caracter;
	//
	Definir total, desc,totDesc,totPrecio como real;
	totDesc=0;totPrecio=0;
	Escribir "Ingrese el nombre del cliente";
	leer nombre;
	Mientras nombre<>"ZZZ" Hacer
		Escribir "Ingrese los km acumulados hasta la fecha";
		leer TAcum;
		Escribir "Ingrese el precio del viaje";
		leer precioViaje;
		Escribir "Ingrese el destino del viaje";
		leer dest;
		Escribir "Ingrese los km a recorrer";
		leer kms;
		total=TAcum+kms;
		si total>3000 Entonces
			desc=precioViaje*0.2;
		SiNo
			desc=precioViaje*0.05;
		FinSi
		precioF=precioViaje-desc;
		Escribir "Cliente: ",nombre," Km acumulados: ",TAcum;
		Escribir "Datos del viaje: $",precioViaje," ",kms," kms ",dest;
		Escribir "Descuento: $", desc, " Importe: $",precioF;
		totDesc=totDesc+desc;
		totPrecio=totPrecio+precioF;
		Escribir "";
		Escribir "Ingrese el nombre del cliente";
		leer nombre;
	FinMientras
	Escribir "El total recaudado es de: $",totPrecio;
	Escribir "El total descontado es de: $",totDesc;
FinAlgoritmo
