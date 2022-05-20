Algoritmo Guia2_ejer3
	Definir Nombre1,nombre2,nombre3 Como Caracter;
	Escribir "Ingrese el nombre 1";
	leer nombre1;
	Escribir "Ingrese el nombre 2";
	leer nombre2;
	Escribir "Ingrese el nombre 3";
	leer nombre3;
	si	nombre3<nombre1 y nombre3<nombre2 Entonces
		si nombre2<nombre1 Entonces
			Escribir nombre3,", ",nombre2,", ",nombre1;
		SiNo
			Escribir nombre3,", ",nombre1,", ",nombre2;
		FinSi
	SiNo
		si nombre2<nombre1 y nombre2<nombre3 Entonces
			si nombre1<nombre3 Entonces
				Escribir nombre2,", ",nombre1,", ",nombre3;
			SiNo
				Escribir nombre2,", ",nombre3,", ",nombre1;
			FinSi
		SiNo
			si	nombre1<nombre2 y nombre1<nombre3 Entonces
				si	nombre2<nombre3 Entonces
					Escribir nombre1,", ",nombre2,", ",nombre3;
				SiNo
					Escribir nombre1,", ",nombre3,", ",nombre2;
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo
