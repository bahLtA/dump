Algoritmo guia3_ejer21
	Definir obra1,obra2,obra3,obra4,obra,costo,cont,contL,mayorpedido,obramascara,porcentaje Como Real;
	Definir mat Como Caracter;
	
	Escribir "Ingrese el codigo de la obra";
	leer obra;
	Mientras obra<>9 Hacer
		Escribir "Ingrese el material retirado del deposito (L, C, O)";
		leer mat;
		Escribir "Ingrese el costo del material retirado";
		leer costo;
		Segun obra Hacer
			1:	obra1=obra1+costo;
			2:	obra2=obra2+costo;
			3:	obra3=obra3+costo;
			4: 	obra4=obra4+costo;
		FinSegun
		
		si costo>mayorpedido Entonces
			mayorpedido=costo;
			obramascara=obra;
		FinSi
		
		cont=cont+1;
		si mat="L" Entonces
			contL=contL+1;
		FinSi
		
		Escribir "";
		
		Escribir "Ingrese el codigo de la obra";
		leer obra;
	FinMientras
	porcentaje=(100*contL)/cont;
	Escribir "";
	Escribir "El costo total de la obra 1 fue: $",obra1;
	Escribir "El costo total de la obra 2 fue: $",obra2;
	Escribir "El costo total de la obra 3 fue: $",obra3;
	Escribir "El costo total de la obra 4 fue: $",obra4;
	Escribir "";
	Escribir "el porcentaje de pedidos de ladrillos fue del ",porcentaje,"%";
	Escribir "";
	Escribir "La obra que realizo el pedido de mayor costo fue la obra ",obramascara,"con un pedido de $",mayorpedido;
	
FinAlgoritmo
