Algoritmo Guia1_ejer7
	Definir XdeA,YdeA,XdeB,YdeB,XdeC,YdeC,DistAB,DistBC,DistCA,DistTotal,aux como real;
	Escribir "Ingrese el punto X de A";
	Leer XdeA;
	Escribir "Ingrese el punto Y de A";
	leer YdeA;
	Escribir "Ingrese el punto X de B";
	leer XdeB;
	Escribir "Ingrese el punto Y de B";
	leer YdeB;
	Escribir "Ingrese el punto X de C";
	Leer XdeC;
	Escribir "Ingrese el punto Y de C";
	Leer YdeC;
	//calculos
	aux=(XdeB-XdeA)^2+(YdeB-YdeA)^2;
	DistAB=rc(aux);
	aux=(XdeC-XdeB)^2+(YdeC-YdeB)^2;
	DistBC=rc(aux);
	aux=(XdeA-XdeC)^2+(YdeA-YdeC)^2;
	DistCA=rc(aux);
	DistTotal=DistAB+DistBC+DistCA;
	//
	Escribir "La distancia del Aeropuerto A al B es de ",DistAB;
	Escribir "La distancia del Aeropuerto B al C es de ",DistBC;
	Escribir "La distancia del Aeropuerto C al A es de ",DistCA;
	Escribir "La distancia total recorrida por el avion es de ",DistTotal;
FinAlgoritmo