Algoritmo guia3_ejer14
	Definir Barra,BarraMasPicante Como Caracter;
	Definir N,MaxN,cont,cont1,cont2_4,cont5_10,cont_11 como real;
	MaxN=0;cont=0;cont1=0;cont2=0;
	Escribir "Ingrese el nombre del Barra";
	Leer Barra;
	Mientras Barra<>"ZZZ" Hacer
		Escribir "Ingrese la cantidad de veces que estuvo detenido el barra";
		leer n;
		si n>MaxN Entonces
			BarraMasPicante=Barra;
			MaxN=n;
		FinSi
		si n=1 Entonces
			cont1=cont1+1;
		FinSi
		si n>=2 y n<=4 Entonces
			cont2_4=cont2_4+1;
		FinSi
		si n>=5 y n<=10 Entonces
			cont5_10=cont5_10+1;
		FinSi
		si n>10 Entonces
			cont_11=cont_11+1;
		FinSi
		cont=cont+1;
	FinMientras
	Escribir "";
	Escribir "Cantidad de Detenciones			Cantidad de integrantes";
	Escribir "1								",cont1;
	Escribir "2 - 4							",cont2_4;
	Escribir "5 - 10							",cont5_10;
	Escribir "más de 10						",cont_11;
	Escribir "";
	Escribir "Cantidad de integrantes encuestados: ",cont;
FinAlgoritmo
