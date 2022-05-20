Algoritmo guia2_ejer15
	Definir nya,nyadist,tipopago Como Caracter;
	Definir preciolista,cant,formapago,preciof,montof,desc,montocuota como real;
	Escribir "Ingrese el nombre de la distribuidora";
	leer nyadist;
	Escribir "Ingrese el nombre del cliente";
	leer nya;
	Escribir "Ingrese la cantidad de zapatos vendidos";
	leer cant;
	Escribir "Ingrese el precio de lista del zapato";
	leer preciolista;
	Escribir "Ingrese la forma de pago (1: Contado, 2: 6 cuotas, 3: 12 cuotas)";
	leer formapago;
	Segun formapago Hacer
		1:	desc=preciolista*0.1;
			tipopago="Contado";
		2:	desc=1;
			tipopago="6 Cuotas";
		3:	desc=preciolista*0.23;
			tipopago="12 Cuotas";
	FinSegun
	Escribir "";
	Escribir "Distribuidora ",nyadist,"		Cliente: ",nya;
	Escribir "Zapatos vendidos: ",cant,"		Precio:	$",preciolista;
	Escribir "Forma de pago: ",tipopago;
	Escribir "Recargo o descuento: ",desc;
	Escribir "Total a pagar: $",preciolista+desc;
FinAlgoritmo
