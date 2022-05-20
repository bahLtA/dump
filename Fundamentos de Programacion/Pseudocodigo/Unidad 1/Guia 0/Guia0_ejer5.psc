Algoritmo Guia0_ejer5
	Definir totalMujeres,totalHombres,totalgeneral,porcentajeHombre,porcentajeMujer Como Real;
	Escribir "Ingrese la cantidad de mujeres";
	Leer totalMujeres;
	Escribir "Ingrese el total general";
	Leer totalgeneral;
	totalHombres=totalgeneral-totalMujeres;
	porcentajeHombre=(totalHombres*100)/totalgeneral;
	porcentajeMujer=(totalMujeres*100)/totalgeneral;
	Escribir "Las mujeres son el ",porcentajeMujer,"% del total";
	Escribir "Los hombres son el ",porcentajeHombre,"% del total";
FinAlgoritmo
