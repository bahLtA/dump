Algoritmo guia3_ejer34
	Definir codigo,formacontado,importe,lugardepago,total,tot1,tot2,tot3,tot4,lug1,lug2,lug3,lug4,Pers_rapi,Mov_otr Como Real;
	Definir empresa,usuario,formadepago,mes,LugardePagoC,fechadepago Como Caracter;
	total=0;menorRec=999999999;
	Escribir "Ingrese el mes correspondiente";
	leer mes;
	Escribir "Ingrese el codigo de la empresa";
	leer codigo;
	Mientras codigo<>99 Hacer
		Escribir "Ingrese el nombre del usuario";
		leer usuario;
		Escribir "Ingrese la fecha de pago";
		leer fechadepago;
		Escribir "Ingrese el importe";
		leer importe;
		Escribir "Ingrese la forma de pago";
		leer formadepago;
		si formadepago="C" Entonces
			Escribir "Ingrese el lugar de pago";
			leer lugardepago;
			Segun lugardepago Hacer
				1: 	LugardePagoC="PagoFacil";
					lug1=lug1+importe;
				2: 	LugardePagoC="Rapipago";
					lug2=lug2+importe;
				3: 	LugardePagoC="Banco";
					lug3=lug3+importe;
				4:	LugardePagoC="Otro";
					lug4=lug4+importe;
			FinSegun
		FinSi
		si lugardepago=2 y codigo=2 Entonces
			Pers_rapi=Pers_rapi+importe;
		FinSi
		si lugardepago=4 y codigo=3 Entonces
			Mov_otr=Mov_otr+importe;
		FinSi
		total=total+importe;
		Escribir "";
		Escribir "resumen del mes: ",mes;
		Escribir "código de empresa: ",codigo;
		Escribir "Fecha: ",fechadepago;
		Escribir "Usuario: ",usuario;
		Escribir "Importe: ",importe;
		Escribir "Forma de pago",formadepago;
		si formadepago="C" Entonces
			Escribir "Pagó en ",LugardePagoC;
		FinSi
		Segun codigo Hacer
			1:	tot1=tot1+importe;
				Escribir "TOTAL DE LA EMPRESA: $",tot1;
			2:	tot2=tot2+importe;
				Escribir "TOTAL DE LA EMPRESA: $",tot2;
			3:	tot3=tot3+importe;
				Escribir "TOTAL DE LA EMPRESA: $",tot3;
			4:	tot4=tot4+importe;
				Escribir "TOTAL DE LA EMPRESA: $",tot4;
		FinSegun
		Escribir "";
		Escribir "Ingrese el codigo de la empresa";
		leer codigo;
	FinMientras
	Escribir "";
	Escribir "TOTAL COBRADO DE TODAS LAS EMPRESAS: $",total;
	si tot1<tot2 y tot1<tot3 y tot1<tot4 Entonces
		Escribir "La empresa de menor recaudación es la 1";
	SiNo
		si tot2<tot3 y tot2<tot4 Entonces
			Escribir "La empresa de menor recaudación es la 2";
		SiNo
			si tot3<tot4 Entonces
				Escribir "La empresa de menor recaudacion es la 3";
			SiNo
				Escribir "La empresa de menor recaudacion es la 4";
			FinSi
		FinSi
	FinSi
	Escribir "PERSONAL: Total abonado en rapipago: $",Pers_rapi;
	Escribir "Movistar: Total abonado en otros lugares de pago",Mov_otr;
FinAlgoritmo