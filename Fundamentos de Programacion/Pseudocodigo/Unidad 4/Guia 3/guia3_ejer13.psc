Algoritmo guia3_ejer13
	Definir Art,precioCompra,CantComprada,sumtot,cont,maxVenta Como Real;
	Definir tot1,tot2,tot3,tot4,tot5,precio1,precio2,precio3,precio4,precio5,sum1,sum2,sum3,sum4,sum5 Como real;
	Definir NyA,NyaMaxVenta Como Caracter;
	Escribir "Ingrese el precio del articulo 1: " Sin Saltar;
	Leer precio1;
	Escribir "Ingrese el precio del articulo 2: " Sin Saltar;
	leer precio2;
	Escribir "Ingrese el precio del articulo 3: " Sin Saltar;
	leer precio3;
	Escribir "Ingrese el precio del articulo 4: " Sin Saltar;
	leer precio4;
	Escribir "Ingrese el precio del articulo 5: " Sin Saltar;
	leer precio5;
	Escribir "";
	Escribir "Ingrese el nombre del cliente: "Sin Saltar;
	leer NyA;
	Mientras NyA<>"ZZZ" Hacer
		Escribir "Ingrese la cantidad de articulos comprados";
		leer CantComprada;
		Escribir "Ingrese el codigo del articulo";
		Leer art;
		Segun art Hacer
			1:	tot1=tot1+CantComprada;
				precioCompra=precio1*CantComprada;
				sum1=sum1+precioCompra;
			2: 	tot2=tot2+CantComprada;
				precioCompra=precio2*CantComprada;
				sum2=sum2+precioCompra;
			3: 	tot3=tot3+CantComprada;
				precioCompra=precio3*CantComprada;
				sum3=sum3+precioCompra;
			4: 	tot4=tot4+CantComprada;
				precioCompra=precio4*CantComprada;
				sum4=sum4+precioCompra;
			5: 	tot5=tot5+CantComprada;
				precioCompra=precio5*CantComprada;
				sum5=sum5+precioCompra;
		FinSegun
		si precioCompra>maxVenta Entonces
			maxVenta=precioCompra;
			NyaMaxVenta=NyA;
		FinSi
		sumtot=sumtot+precioCompra;
		Escribir "Ingrese el nombre del cliente: "Sin Saltar;
		leer NyA;
		cont=cont+1;
	FinMientras
	Escribir "";
	Escribir "Monto total de ventas: $",sumtot;
	Escribir "Del articulo 1 se vendio: $",sum1," Y un total de ",tot1," unidades";
	Escribir "Del articulo 2 se vendio: $",sum2," Y un total de ",tot2," unidades";
	Escribir "Del articulo 3 se vendio: $",sum3," Y un total de ",tot3," unidades";
	Escribir "Del articulo 4 se vendio: $",sum4," Y un total de ",tot4," unidades";
	Escribir "Del articulo 5 se vendio: $",sum5," Y un total de ",tot5," unidades";
	Escribir "Se realizaron un total de ",cont," ventas";
	Escribir "El cliente que mas compro fue: ",NyaMaxVenta,". Con un monto de: $",maxVenta;
FinAlgoritmo
