Algoritmo guia3_ejer30
	Definir n,i,cont,contaux Como Real;
	Definir nom Como Caracter;
	Definir contfalt,cant1000,cant500,cant200,cant100,max1000,max500,max200,max100,falt1000,falt500,falt200,falt100 Como Real;
	Definir falta Como Logico;
	Definir falt1000g,falt500g,falt200g,falt100g Como Real;
	max1000=1000;
	max500=2000;
	max200=5000;
	max100=5000;
	Escribir "Ingrese la cantidad de sucursales del banco";
	leer n;
	Repetir
		Escribir "Ingrese el nombre de la sucursal";
		leer nom;
		Escribir "Ingrese la cantidad de cajeros de la sucursal ",nom;
		leer i;
		contaux=0;
		falt1000=0;
		falt500=0;
		falt200=0;
		falt100=0;
		Repetir
			falta=falso;
			Escribir "Ingrese la cantidad de billetes de 1000";
			leer cant1000;
			Escribir "Ingrese la cantidad de billetes de 500";
			leer cant500;
			Escribir "Ingrese la cantidad de billetes de 200";
			leer cant200;
			Escribir "Ingrese la cantidad de billetes de 100";
			leer cant100;
			si cant1000<(max1000*0.1) Entonces
				falt1000=falt1000+(max1000-cant1000);
				falta=Verdadero;
			FinSi
			si cant500<(max500*0.1) Entonces
				falt500=falt500+(max500-cant500);
				falta=Verdadero;
			FinSi
			si cant200<(max200*0.1) Entonces
				falt200=falt200+(max200-cant200);
				falta=Verdadero;
			FinSi
			si cant100<(max100*0.1) Entonces
				falt100=falt100+(max100-cant100);
				falta=Verdadero;
			FinSi
			si falta Entonces
				contfalt=contfalt+1;
			FinSi
			contaux=contaux+1;
		Hasta Que contaux=i
		Escribir "Sucursal: ",nom;
		Escribir "Faltan ",falt1000," billetes de $1000";
		Escribir "Faltan ",falt500," billetes de $500";
		Escribir "Faltan ",falt200," billetes de $200";
		Escribir "Faltan ",falt100," billetes de $100";
		falt1000g=falt1000g+falt1000;
		falt500g=falt500g+falt500;
		falt200g=falt200g+falt200;
		falt100g=falt100g+falt100;
		
		cont=cont+1;
	Hasta Que cont=n
	Escribir "Cajeros con faltante: ",contfalt;
	Escribir "";
	Escribir "Total billetes de 1000 faltantes: ",falt1000g;
	Escribir "Total billetes de 500 faltantes: ",falt500g;
	Escribir "Total billetes de 200 faltantes: ",falt200g;
	Escribir "Total billetes de 100 faltantes: ",falt100g;
	
FinAlgoritmo
