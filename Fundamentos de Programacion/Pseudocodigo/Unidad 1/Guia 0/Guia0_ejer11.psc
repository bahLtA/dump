Algoritmo Guia0_ejer11
	Definir Nombre Como Caracter;
	Definir cantidadArt, precioArt, monto,montoFinal, montomenosdesc,descuento,IVA como real;
	Escribir "Ingrese el Nombre del cliente";
	leer nombre;
	Escribir "Ingrese la cantidad de articulos que compro";
	leer cantidadArt;
	Escribir "Ingrese el precio unitario del articulo";
	Leer precioArt;
	monto=cantidadArt*precioArt;
	descuento=(cantidadArt*precioArt)*0.05;
	montomenosdesc=monto-descuento;
	IVA=montomenosdesc*0.21;
	montoFinal=montomenosdesc+IVA;
	Escribir "La compra de ",Nombre," es de ", montoFinal,"$";
FinAlgoritmo