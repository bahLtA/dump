Algoritmo Guia3_Ejer8
	Definir n1,n2 Como Caracter;
	Definir cont Como Real;
	n2="";
	Escribir "Ingrese un nombre";
	leer n1;
	Mientras n1<>n2 Hacer
		n2=n1;
		Escribir "Ingrese otro nombre";
		leer n1;
		cont=cont+1;
	FinMientras
	Escribir "El total de nombres es de: ", cont;
FinAlgoritmo
