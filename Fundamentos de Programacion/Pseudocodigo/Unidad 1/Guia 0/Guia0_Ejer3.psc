Algoritmo Guia0_Ejer3
	// solo funciona para el siglo XXI
	Definir fecha, dia, mes, anio Como Real;
	Escribir  "ingrese la fecha (en formato MMDDAA)";
	leer fecha;
	mes=trunc(fecha/10000);
	dia=trunc(fecha/100)-(mes*100);
	anio=fecha-mes*10000-dia*100;
	Escribir "la fecha es: ", dia,"/",mes,"/20",anio;
FinAlgoritmo