Algoritmo Guia3_ejer9
	Definir n,tot,cont Como Entero;
	Escribir "Ingrese un numero";
	leer n;
	Mientras n<>0 Hacer
		tot=tot+n;
		Escribir tot;
		Escribir "Ingrese otro numero";
		leer n;
		cont=cont+1;
	FinMientras
	Escribir "El valor medio es de: ",tot/cont;
	Escribir "Se ingresaron un total de: ",cont;
FinAlgoritmo
