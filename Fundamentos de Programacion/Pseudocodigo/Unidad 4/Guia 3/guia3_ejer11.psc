Algoritmo guia3_ejer11
	Definir N,Peso,Altura,MaxAlto,MinPeso,cont Como Real;
	Definir NyA,NyAAlto,NyAFlaco Como Caracter;
	Escribir "Ingrese la cantidad de alumnos";
	Leer N;
	cont=0;Peso=0;Altura=0;MaxAlto=0;MinPeso=9999;
	
	Repetir
		Escribir "Ingrese el nombre del alumno";
		Leer NyA;
		Escribir "Ingrese el peso del alumno: ",NyA;
		leer Peso;
		si Peso<MinPeso Entonces
			MinPeso=Peso;
			NyAFlaco=NyA;
		FinSi
		Escribir "Ingrese la altura del alumno: ",NyA;
		leer Altura;
		si Altura>MaxAlto Entonces
			MaxAlto=Peso;
			NyAAlto=NyA;
		FinSi
		cont=cont+1;
	Hasta Que cont=N
	Escribir "";
	Escribir "El alumno mas alto es: ",NyAAlto;
	Escribir "El alumno mas flaco es: ",NyAFlaco;
FinAlgoritmo
