Algoritmo parcial2019
	Definir num,DNI,Monto,ant,cont,tot,contcol,sum,contmas2500 Como Real;
	tot=0;
	contcol=0;
	sum=0;
	Escribir "Ingrese el numero del colegio";
	leer num;
	mientras num<>0 Hacer
		ant=num;
		cont=0;
		contmas2500=0;
		Mientras ant=num Hacer
			Escribir "Ingrese el DNI del alumno";
			leer dni;
			Escribir "Ingrese el monto abonado";
			leer Monto;
			sum=sum+monto;
			cont=cont+1;
			si monto>2500 Entonces
				contmas2500=contmas2500+1;
			FinSi
			Escribir "";
			Escribir "Ingrese el numero del colegio";
			leer num;
		FinMientras
		contcol=contcol+1;
		tot=tot+cont;
		Escribir "Numero de colegio: ",ant;
		Escribir "Cantidad de alumnos que ya abonaron cuotas: ",cont;
		Escribir "cantidad de alumnos que abonaron mas de $2500: ",contmas2500;
	FinMientras
	Escribir "Total de alumnos que viajaran: ",tot;
	Escribir "Cantidad de colegios con los que se firmo contrato: ",contcol;
	Escribir "Total recaudado a la fecha: $",sum;
	
FinAlgoritmo
