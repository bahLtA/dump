Algoritmo guia3_ejer29
	Definir Ciudad Como Caracter;
	Definir CantLluvias,cont,mmLlovidos,aux,dia,mmdia,summm,menMM,maxMM,maxdia,mendia,contciudades,sumLluvias,contLluvias,cont20 como real;
	Definir mas20 Como Logico;
	mas20=falso;
	Escribir "Ingrese el nombre de la ciudad";
	leer Ciudad;
	Mientras Mayusculas(Ciudad)<>"ZZZ" Hacer
		Escribir "Ingrese la cantidad de lluvias que hubo en ese mes";
		leer CantLluvias;
		cont=0;
		summm=0;
		Escribir "Ingrese la cantidad de milimetros llovidos";
		leer mmLlovidos;
		sumLluvias=sumLluvias+mmLlovidos;
		aux=mmLlovidos;
		Repetir
			Escribir "Ingrese el dia de la lluvia";
			leer dia;
			Escribir "Ingrese los mm llovidos el dia ",dia;
			leer mmdia;
			si aux-mmdia<0 entonces
				Escribir "No dan las cuentas pa, mandale de nuevo";
				aux=aux+mmdia;
				cont=cont-1;
			FinSi
			si mmdia>maxMM Entonces
				maxMM=mmdia;
				maxdia=dia;
			FinSi
			si mmdia<menMM Entonces
				menMM=mmdia;
				mendia=dia;
			FinSi
			si CantLluvias>20 Entonces
				mas20=Verdadero;
				cont20=cont20+1;
			FinSi
			aux=aux-mmdia;
			cont=cont+1;
			contLluvias=contLluvias+1;
		Hasta Que cont=CantLluvias y aux=0
		Escribir "";
		prom=mmLlovidos/CantLluvias;
		Escribir "Ciudad: ",Ciudad;
		Escribir "Media aritmética: ",prom;
		Escribir "Mediana: ";
		Escribir "El dia con la menor cantidad de mm llovidos fue el ",mendia," con ",menMM,"mm";
		Escribir "El dia con la mayor cantidad de mm llovidos fue el ",maxdia," con ",maxMM,"mm";
		Escribir "";
		contciudades=contciudades+1;
		Escribir "Ingrese el nombre de otra ciudad";
		leer Ciudad;
	FinMientras
	promciudades=sumLluvias/contLluvias;
	Escribir "";
	Escribir "Cantidad de ciudades donde se registraron lluvias: ",contciudades;
	Escribir "Promedio de todas las lluvias de todas las ciudades: ",promciudades;
	si mas20 Entonces
		Escribir "Hubo ",cont20," ciudades con mas de 20 lluvias en el mes";
	FinSi
FinAlgoritmo
