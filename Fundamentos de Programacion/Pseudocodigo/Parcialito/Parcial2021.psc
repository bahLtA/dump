Algoritmo Parcial2021
	Definir CDS, localidad,localmenos,cdsmenos Como Caracter;
	Definir cantbebes,dni,pesoant,pesoact,cont,relacion,conts,contb,tot,menor Como Real;
	menor=999999;
	cont=0;
	conts=0;
	contb=0;
	tot=0;
	Escribir "Ingrese el nombre del centro de salud";
	leer cds;
	
	mientras cds<>"zzz" Hacer
		conts=0;
		Escribir "Ingrese el nombre de la localidad";
		leer localidad;
		Escribir "Ingrese la cantidad de bebes atendidos";
		leer cantbebes;
		Repetir
			Escribir "Ingrese el DNI del bebe";
			leer dni;
			Escribir "Ingrese el peso anterior del bebe";
			leer pesoant;
			Escribir "Ingrese el peso actual del bebe";
			leer pesoact;
			relacion=((pesoact-pesoant)*100)/pesoact;
			Escribir "";
			Escribir "DNI ",dni;
			Escribir "Peso anterior: ",pesoant;
			Escribir "Peso actual: ", pesoact;
			si relacion=0 Entonces
				Escribir relacion,"% Igual";
				conts=conts+1;
			SiNo
				si relacion>0 Entonces
					Escribir relacion,"% SUBE";
					conts=conts+1;
				SiNo
					Escribir relacion,"% BAJA";
					contB=contB+1;
				FinSi
			FinSi
			cont=cont+1;
		Hasta Que cont=cantbebes
		si cantbebes<menor Entonces
			menor=cantbebes;
			localmenos=localidad;
			cdsmenos=cds;
		FinSi
		tot=tot+cantbebes;
		Escribir "cantidad bebes atendidos: ",cantbebes;
		Escribir "cantidad de bebes que mantuvieron o aumentaron: ",conts;
		
		Escribir "";
		Escribir "Ingrese el centro de salud";
		leer cds;
	FinMientras
	Escribir "Cantidad total de bebes atendidos en todo el periodo: ",tot;
	Escribir "Cantidad total de bebes que perdieron peso: ",contB;
	Escribir "Centro de salud con menor cantidad de bebes atendidos: ",cdsmenos,"-",localmenos," Con un total de ",menor;
FinAlgoritmo
