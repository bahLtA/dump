Algoritmo Guia0_ejer8
	definir Billetes5,Billetes10,Billetes20,Billetes50,Billetes100,dinerototal como real;
	dinerototal=0;
	Escribir "Ingrese la cantidad de billetes de 5$";
	Leer Billetes5;
	Escribir "Ingrese la cantidad de billetes de 10$";
	Leer Billetes10;
	Escribir "Ingrese la cantidad de billetes de 20$";
	Leer Billetes20;
	Escribir "Ingrese la cantidad de billetes de 50$";
	Leer Billetes50;
	Escribir "Ingrese la cantidad de billetes de 100$";
	leer Billetes100;
	dinerototal=Billetes5*5+Billetes10*10+Billetes20*20+Billetes50*50+Billetes100*100;
	Escribir "El dinero total de la caja de seguridad es de ",dinerototal,"$";
FinAlgoritmo