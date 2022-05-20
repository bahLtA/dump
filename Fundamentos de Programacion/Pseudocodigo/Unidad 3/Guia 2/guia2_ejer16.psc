Algoritmo guia2_ejer16
	Definir caja,iva,ddl,fruta,mouse,subtotal,total,desc como real;
	Definir nya,gusto como caracter;
	Definir regalo Como Logico;
	Escribir "Ingrese el precio unitario de los alfajores de ddl";
	leer ddl;
	Escribir "Ingrese el precio unitario de los alfajores de fruta";
	leer fruta;
	Escribir "Ingrese el precio unitario de los alfajores de mouse";
	Escribir mouse;
	
	Escribir "Ingrese el nombre del cliente";
	leer nya;
	Escribir "Ingrese el gusto que desea(Dulce de Leche, Frutal o Mouse";
	leer gusto;
	Escribir "Ingrese las unidades que contenga la caja";
	leer caja;
	Escribir "¿Es para regalo? (V o F)";
	leer regalo;
	si gusto="Dulce de Leche" Entonces
		subtotal=ddl*caja;
	FinSi
	si gusto="Frutal" entonces
		subtotal=fruta*caja;
	FinSi
	si gusto="Mouse" Entonces
		subtotal=mouse*caja;
	FinSi
	segun caja Hacer
		6: 	total=subtotal;
		12:	desc=subtotal*0.1;
			total=subtotal-desc;
		24:	desc=subtotal*0.2;
			total=subtotal-desc;
	FinSegun
	si regalo entonces
		total=total+250;
	FinSi
	iva=total*0.21;
	total=total+iva;
	Escribir "";
	Escribir "Cliente: ",nya;
	Escribir "Caja: ",caja," unidades";
	Escribir "Gusto: ",gusto;
	Escribir "Subtotal: $",subtotal;
	Escribir "Recargo regalo: ",regalo;
	Escribir "IVA 21%: ",iva;
	Escribir "Total: $",total;
	
	
	
	
	
FinAlgoritmo
