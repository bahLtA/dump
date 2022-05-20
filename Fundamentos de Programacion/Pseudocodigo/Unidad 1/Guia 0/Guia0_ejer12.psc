Algoritmo Guia0_ejer12
	Definir Credito,Tasa,Plazo,interesSimple,valorCuota como real;
	Escribir "Ingrese el capital solicitado en el credito";
	leer Credito;
	Escribir "Ingrese la tasa anual del credito solicitado";
	leer Tasa;
	Escribir "Ingrese el plazo a pagar el credito";
	leer Plazo;
	interesSimple=(Credito*tasa*plazo)/(100*12);
	valorCuota=(Credito+interesSimple)/plazo;
	Escribir "El valor de la cuota es de ",valorCuota ,"$";
FinAlgoritmo
