Algoritmo guia2_ejer13
	Definir parc1,parc2,parc3,nota,notaRegular,notaProm,prom Como Real;
	Escribir "Ingrese la nota del parcial 1";
	leer parc1;
	Escribir "Ingrese la nota del parcial 2";
	leer parc2;
	Escribir "Ingrese la nota del parcial 3";
	leer parc3;
	Escribir "Ingrese la nota para promocionar";
	leer notaProm;
	Escribir "Ingrese la nota para regularizar";
	leer notaRegular;
	
	prom=(parc1+parc2+parc3)/3;
	nota=redon((prom-notaProm)*6/(100-notaProm)+4);
	Segun nota Hacer
		4: escribir "Aprobado";
		5: escribir "Aprobado";
		6: escribir "Bueno";
		7: escribir "Bueno";
		8: escribir "Distinguido";
		9: escribir "Distinguido";
		10: escribir "Sobresaliente";
	FinSegun
	si prom>=notaProm Entonces
		Escribir "El alumno promociono";
	SiNo
		si	prom>notaRegular Entonces
			Escribir "El alumno regularizo";
		SiNo
			Escribir "El alumno quedo libre";
		FinSi
	FinSi
FinAlgoritmo
