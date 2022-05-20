Algoritmo guia3_ejer26
	Definir nya,materia Como Caracter;
	Definir cantAprob,nota,contaux,cont,contIng,sumTot,cont10,contmat Como Real;
	Escribir "Ingrese el nombre y apellido del alumno";
	leer nya;
	Mientras nya<>"ZZZ" Hacer
		Escribir "Ingrese la cantidad de materias aprobadas";
		leer cantAprob;
		si	cantAprob>1 Entonces
			contaux=cantAprob;
			Repetir
				Escribir "Ingrese el nombre de la materia";
				Leer materia;
				Escribir "Ingrese la nota de ",materia;
				leer nota;
				contaux=contaux-1;
				si Mayusculas(materia)="INGLES" Entonces
					contIng=contIng+1;
				FinSi
				contmat=contmat+1;
				sumTot=sumTot+nota;
			Hasta Que contaux=0
		FinSi
		si cantAprob>10 Entonces
			cont10=cont10+1;
		FinSi
		cont=cont+1;
		Escribir "";
		Escribir "Ingrese el nombre y apellido de otro alumno";
		leer nya;
	FinMientras
	Escribir "";
	Escribir "El promedio general es de ",sumTot/contmat;
	Escribir cont10," aprobaron mas de 10 materias";
	Escribir "El porcentaje de alumnos que aprobó Inglés fue ",(contIng*100)/cont,"%";
FinAlgoritmo
