Algoritmo guia2_ejer17
	Definir p1,p2,p3,p4,cant,precio,tipo,subtotal,total,desc Como Real;
	Definir men, color Como Caracter;
	Escribir "Ingrese el precio del papel 1";
	leer p1;
	Escribir "Ingrese el precio del papel 2";
	leer p2;
	Escribir "Ingrese el precio del papel 3";
	leer p3;
	Escribir "Ingrese el precio del papel 4";
	leer p4;
	Escribir "Ingrese el tipo de papel";
	leer tipo;
	Escribir "Ingrese la cantidad comprada";
	leer cant;
	segun tipo hacer
		1:	men="Blanco 80 gramos";
			precio=p1;
		2: 	men="Blanco 70 gramos";
			precio=p2;
		3:	men="Papel Prensa";
			precio=p3;
		4:	men="Ilustracion color (Blanco, azul o rojo)";
			precio=p4;
			Escribir "Ingrese el color";
			leer color;
			si color<>"Blanco"; Entonces
				precio=precio*1.05;
			FinSi
	FinSegun
	subtotal=precio*cant;
	si cant>10 Entonces
		desc=total*0.15;
	SiNo
		desc=0;
	FinSi
	total=subtotal-desc;
	Escribir "";
	Escribir "Papelera Papelitos";
	Escribir "Tipo de papel: ",men;
	Escribir "Precio de referencia: $",precio;
	Escribir "Total: $",subtotal,"		Descuento: $",desc;
	Escribir "Total a abonar: $",total;
	
FinAlgoritmo
