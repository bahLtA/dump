Algoritmo Guia2ejer2
	Definir n como real;
	Escribir "Ingrese un numero";
	Leer n;
	//a)
	si n>0 Entonces
		Escribir "a) El numero ",n, " es positivo";
	SiNo
		si n<0 Entonces
			Escribir "a) El numero ",n," es negativo";
		SiNo
			Escribir "a) El numero es 0";
		FinSi
	FinSi
	Escribir "";
	//b)
	si n%2=0 Entonces
		Escribir "b) El numero ",N," es par";
	SiNo
		Escribir "b) El numero ",N," es impar";
	FinSi
	Escribir "";
	//c)
	si n%5=0 y n%3=0 Entonces
		Escribir "c) El numero ",n," es multiplo de 5 y de 3";
	SiNo
		Escribir "c) El numero ",n," no es multiplo ni de 5 ni de 3";
	FinSi
FinAlgoritmo
