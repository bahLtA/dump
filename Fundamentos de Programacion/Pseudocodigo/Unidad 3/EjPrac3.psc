Algoritmo EjPrac3
	Definir tot,totkms como real;
	Definir precio,kmsrec,precioF,desc como real;
	Definir dest,nombre Como Caracter;
	Escribir "Ingrese el nombre";
	Leer nombre;
	Escribir "Ingrese el total de km recorridos hasta el momento";
	leer totkms;
	Escribir "Ingrese el precio del viaje";
	leer precio;
	Escribir "Ingrese el destino del viaje";
	leer dest;
	Escribir "Ingrese los km del viaje";
	Leer kmsrec;
	tot=totkms+kmsrec;
	si tot>3500 Entonces
		desc=precio*0.2;
	SiNo
		si tot>2000 Entonces
			desc=precio*0.15;
		SiNo
			si	tot>500 Entonces
				desc=precio*0.05;
			SiNo
				desc=0;
			FinSi
		FinSi
	FinSi
	precioF=tot-desc;
	Escribir "Cliente: ", nombre, " Km Acumulados: ",totkms;
	Escribir "Datos del cliente: $",precio," Kms: ",kmsrec;
	Escribir "Descuento: $",desc," Precio Final: $",precioF;
FinAlgoritmo
