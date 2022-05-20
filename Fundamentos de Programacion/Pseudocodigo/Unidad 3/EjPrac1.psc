Algoritmo EjPrac1
	Definir Nombre,Dest Como Caracter;
	Definir TotAcum,precio,kms,total,desc,imp como real;
	Escribir "Ingrese Nombre";
	Leer Nombre;
	Escribir "Ingrese Km acumulados hasta la fecha";
	Leer TotAcum;
	Escribir "Ingrese el precio del viaje";
	leer precio;
	Escribir "Ingrese Kms a recorrer";
	leer kms;
	Escribir "Ingrese el destino del viaje";
	leer dest;
	total=TotAcum+kms;
	si total>3000 Entonces
		desc=precio*0.2;
	SiNo
		desc=precio*0.05;
	FinSi
	Escribir "Cliente ",Nombre,;
	
	
FinAlgoritmo
