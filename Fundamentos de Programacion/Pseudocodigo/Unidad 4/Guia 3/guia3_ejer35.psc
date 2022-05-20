Algoritmo guia3_ejer35
	Definir men10pol,men50pol,mas50pol,cod,cantPol,cont,CapAseg,Cuota,totPol,totCapAseg,CapAsegXVend Como Real;
	Definir com,totCom,totCuota Como Real;
	Definir masPol,masCom,mayorPol,mayorCom Como Real;
	Escribir "Ingrese el porcentaje de comision para menos de 10 polizas";
	leer men10pol;
	men10pol=men10pol/100;
	Escribir "Ingrese el porcentaje de comision para menos de 50 polizas";
	leer men50pol;
	men50pol=men50pol/100;
	Escribir "Ingrese el porcentaje de comision para mas de 50 polizas";
	leer mas50pol;
	mas50pol=mas50pol/100;
	Escribir "Ingrese el codigo del vendedor";
	leer cod;
	Mientras cod<>0 Hacer
		Escribir "Ingrese la cantidad de polizas vendidas";
		leer cantPol;
		si cantPol>masPol Entonces
			masPol=cantPol;
			mayorPol=cod;
		FinSi
		totPol=totPol+cantPol;
		cont=0;
		totCuota=0;
		//		Repetir
		Mientras ant=cod Hacer
			Escribir "Ingrese el capital asegurado";
			leer CapAseg;
			totCapAseg=totCapAseg+CapAseg;
			Escribir "Ingrese la cuota mensual a pagar";
			leer Cuota;
			totCuota=totCuota+cuota;
			cont=cont+1;
			Escribir "Ingrese el codigo de otro vendedor";
			leer cod;
		FinMientras
		
//		Hasta Que cont=cantPol
		si cantPol>10 Entonces
			com=totCuota*men10pol;
		SiNo
			si cantPol>50 Entonces
				com=totCuota*men50pol;
			SiNo
				com=totCuota*mas50pol;
			FinSi
		FinSi
		si com>masCom Entonces
			masCom=com;
			mayorCom=cod;
		FinSi
		totCom=totCom+com;
		Escribir "La comision del vendedor ",cod," es de $",com," con un total de ",pol," polizas vendidas";
		Escribir "";
		Escribir "Ingrese el codigo de otro vendedor";
		leer cod;
	FinMientras
	Escribir "";
	Escribir "Total de polizas vendidas: $",totPol;
	Escribir "Total de capital asegurado: $",totCapAseg;
	Escribir "Total a pagar en comisión: $",totCom;
	Escribir "";
	Escribir "El vendedor que mas polizas vendió fue: ",mayorPol;
	Escribir "El vendedor que mas comisión tuvo fue: ",mayorCom;
FinAlgoritmo
