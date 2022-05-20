Algoritmo Guia0_ejer4
	Definir hh,mm,ss,horadet,segundostotales,aux Como Real;
	segundostotales=0;
	Escribir "ingrese la hora en formato hhmmss";
	leer horadet;
	hh=trunc(horadet/10000);
	mm=trunc(horadet/100)-(hh*100);
	ss=horadet-hh*10000-mm*100;
	Escribir "la hora es: ",hh,":",mm,":",ss;
	segundostotales=hh*3600+mm*60+ss;
	Escribir "la cantidad de segundos en total es: ", segundostotales;
	
FinAlgoritmo
