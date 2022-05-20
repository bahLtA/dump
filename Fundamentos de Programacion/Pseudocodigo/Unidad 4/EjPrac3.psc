Algoritmo EjPrac3
	//Datos del cliente
	Definir nombre Como Caracter;
	Definir TAcum como real;
	//Datos del viaje
	Definir precioViaje,kms,precioF como real;
	Definir dest Como Caracter;
	//
	Definir cont,total, desc,totDesc,totPrecio,n como real;
	totDesc=0;totPrecio=0;
	Escribir "Ingrese la cantidad de clientes";
	leer n;
	para cont = 0 Hasta n Hacer
		Escribir "";
		Escribir "Ingrese el nombre del cliente";
		leer nombre;
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
		cont=cont+1;
	FinPara
	Escribir "";
	Escribir "El total recaudado es de: $",totPrecio;
	Escribir "El total descontado es de: $",totDesc;
FinAlgoritmo
