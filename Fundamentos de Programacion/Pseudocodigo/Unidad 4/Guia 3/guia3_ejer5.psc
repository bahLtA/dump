Algoritmo guia3_ejer5
	//FUNCION CUADRATICA
	Definir a,b,c,CoefX,CoefY,cont Como Entero;
	Escribir "Ingrese el valor de A";
	leer a;
	Escribir "Ingrese el valor de B";
	leer b;
	Escribir "Ingrese el valor de C";
	leer c;
	cont=a;
	Repetir
		CoefX=cont;
		CoefY=(a*CoefX*CoefX)+(b*CoefX)+c;
		Escribir "Para el valor de X = ",CoefX;
		Escribir "El par ordenado es: (",CoefX,"; ",CoefY,")";
		cont=cont+1;
	Hasta Que cont=b
FinAlgoritmo
