Algoritmo Guia3_ejer16
	Definir imp1,imp2,imp3,imp4,aux,totimp Como real;
	Definir Patente,Marca Como Caracter;
	Definir precio,cont,cat,imp como real;
	Escribir "Ingrese el impuesto de la categoria 1";
	Leer imp1;
	imp1=imp1/100;
	Escribir "Ingrese el impuesto de la categoria 2";
	leer imp2;
	imp2=imp2/100;
	Escribir "Ingrese el impuesto de la categoria 3";
	leer imp3;
	imp3=imp3/100;
	Escribir "Ingrese el impuesto de la categoria 4";
	leer imp4;
	imp4=imp4/100;
	
	Escribir "";
	
	Repetir
		Escribir "Ingrese la patente del auto";
		leer Patente;
		Escribir "Ingrese la marca del auto";
		leer Marca;
		Escribir "Ingrese el valor del auto";
		leer precio;
		Escribir "Ingrese la categoria del auto (1, 2, 3 o 4)";
		leer cat;
		segun cat Hacer
			1: 	imp=precio*imp1;
			2: 	imp=precio*imp2;
			3:	imp=precio*imp3;
			4:	imp=precio*imp4;
		FinSegun
		
		Escribir "";
		Escribir "";
		
		Escribir "Patente: ",Patente;
		Escribir "Valor: ",precio;
		Escribir "Categoria: ",cat;
		Escribir "total a pagar en concepto de impuestos: ",imp;
		
		totimp=totimp+imp;
		cont=cont+1;
	Hasta Que cont=5000
FinAlgoritmo
