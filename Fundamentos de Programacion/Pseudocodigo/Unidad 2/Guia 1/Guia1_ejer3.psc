Algoritmo Guia1_ejer3
	Definir hora1ro,minuto1ro,segundo1ro,hora2do,minuto2do,segundo2do,hora1F,hora2F,horaTot,vel Como real;
	Definir patente Como Caracter;
	Escribir "Ingrese la patente del auto";
	leer patente;
	Escribir "Ingrese la hora de paso por el 1er puesto (formato HH)";
	leer hora1ro;
	Escribir "Ingrese el minuto de paso por el 1er puesto (formato MM)";
	leer minuto1ro;
	Escribir "Ingrese el segundo de paso por el 1er puesto (formato SS)";
	leer segundo1ro;
	Escribir "Ingrese la hora de paso por el 2do puesto (formato HH)";
	leer hora2do;
	Escribir "Ingrese el minuto de paso por el 2do puesto (formato MM)";
	leer minuto2do;
	Escribir "Ingrese el segundo de paso por el 2do puesto (formato SS)";
	leer segundo2do;
	
	hora1F=hora1ro+minuto1ro/60+segundo1ro/3600;
	hora2F=hora2do+minuto2do/60+segundo2do/3600;
	horaTot=hora2f-hora1f;
	vel=7.5/horaTot;
	
	Escribir "El auto ",patente, " ingreso a las ", hora1ro,":",minuto1ro,":",segundo1ro;
	Escribir "y salio a las ",hora2do,":",minuto2do,":",segundo2do;
	Escribir "Su velocidad promedio en el pueblo fue de ", vel, " km/h";
FinAlgoritmo
