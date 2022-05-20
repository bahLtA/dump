Algoritmo guia3_ejer15
	Definir n,cont,CodDep,TNatacion,TCarrera,TBici,TiempoTotal,TiempoGanador,TiempoPromedio Como real;
	Definir TPerdedor,HoraFinal,MinutoFinal,numPerdedor como real;
	Definir sumN,sumC,sumB,contaux,numGanador,num Como Real;
	TiempoGanador=99999999;
	Escribir "Ingrese la cantidad de competidores";
	leer n;
	Escribir "";
	Repetir
		Escribir "Ingrese el numero del competidor";
		Leer Num;
		Repetir
		Escribir "Ingrese el codigo del deporte (1=natacion, 2=carrera, 3=bicicleta)";
		leer CodDep;
		Segun CodDep Hacer
			1:	Escribir "Ingrese el tiempo que hizo el competidor ",num," en este deporte (en minutos)";
				leer TNatacion;
				sumN=sumN+TNatacion;
			2:	Escribir "Ingrese el tiempo que hizo el competidor ",num," en este deporte (en minutos)";
				leer TCarrera;
				sumC=sumC+TCarrera;
			3:	Escribir "Ingrese el tiempo que hizo el competidor ",num," en este deporte (en minutos)";
				leer TBici;
				sumB=sumB+TBici;
		FinSegun
		contaux=contaux+1;
		Hasta Que contaux=3
		contaux=0;
		TiempoTotal=TNatacion+TCarrera+TBici;
		Escribir "El tiempo total es de ",TiempoTotal," minutos";
		si TiempoTotal<TiempoGanador Entonces
			TiempoGanador=TiempoTotal;
			numGanador=num;
		FinSi
		si TiempoTotal>TPerdedor Entonces
			TPerdedor=TiempoTotal;
			numPerdedor=num;
		FinSi
		Escribir "";
		cont=cont+1;
	Hasta Que cont=n
	
	HoraFinal=trunc(TPerdedor/60);
	MinutoFinal=Tperdedor%60;
	
	Escribir "";
	Escribir "El tiempo del ganador es de ",TiempoGanador," minutos";
	Escribir "La Carrera terminó a las ",HoraFinal+17,":",MinutoFinal,"hs";
	Escribir "El tiempo promedio en Natación es de: ",sumN/n;
	Escribir "El tiempo promedio en Carrera es de: ",sumC/n;
	Escribir "El tiempo promedio en Bicicleta es de: ",sumB/n;
	
	
FinAlgoritmo
