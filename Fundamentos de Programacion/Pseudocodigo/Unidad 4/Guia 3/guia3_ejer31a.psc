Algoritmo guia3_ejer31a
	definir cod,doc,sueldo,cont,sum,cont10000 como real;
	Definir mes,nya Como Caracter;
	Escribir "Ingrese el mes";
	leer mes;
	Escribir "Ingrese el codigo de la escuela";
	leer cod;
	Mientras cod<>999 Hacer
		Escribir "Ingrese el documento";
		leer doc;
		Escribir "Ingrese el nombre del docente";
		leer nya;
		Escribir "Ingrese el sueldo del docente ",nya;
		leer sueldo;
		cont=cont+1;
		sum=sum+sueldo;
		si sueldo>10000 Entonces
			cont10000=cont10000+1;
		FinSi
	FinMientras
	Escribir "";
	Escribir "Liquidacion del mes de ",mes;
	Escribir "Cantidad de docentes procesados: ",cont;
	Escribir "Total a pagar en todas las escuelas: ",sum;
	Escribir "Cantidad de docentes que cobran mas de $10.000: ",cont10000;
FinAlgoritmo
