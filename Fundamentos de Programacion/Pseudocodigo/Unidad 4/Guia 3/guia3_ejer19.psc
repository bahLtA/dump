Algoritmo guia3_ejer19
	Definir n,GanAnt,t,cont,contAband,contMej,TiempoGan,NuevoGan como real;
	Definir NyA,Ganador Como Caracter;
	Escribir "Ingrese la cantidad de participantes";
	leer n;
	Escribir "Ingrese el mejor tiempo de la edicion anterior";
	leer GanAnt;
	
	Repetir
		Escribir "Ingrese el nombre del participante";
		leer NyA;
		Escribir "Ingrese el tiempo empleado por ",NyA;
		leer t;
		si t<NuevoGan Entonces
			NuevoGan=t;			//Tiempo del Ganador
			Ganador=NyA; 		//Nombre del Ganador
		FinSi
		si t<GanAnt Entonces
			contMej=contMej+1;		//contador de los que mejoraron el tiempo de la competencia anterior
		FinSi
		si t=0 Entonces
			contAband=contAband+1;		//contador de los que abandonaron la prueba
		FinSi
		cont=cont+1;
		Escribir "";
	Hasta Que cont=n
	
	Escribir "";
	Escribir "El ganador es: ",Ganador," con un tiempo de: ",NuevoGan;
	Escribir contAband," abandonaron la prueba";
	Escribir contMej," mejoraron el tiempo de la prueba anterior";
FinAlgoritmo
