Algoritmo Guia3_ejer2
	//Fibonacci
	Definir ult,ant,n,aux Como Real;
	ult=1;
	n=3;
	ant=1;
	Escribir "1: ",Ant;
	Escribir "2: ",ult;
	Repetir
		aux=ult;
		ult=ult+ant;
		ant=aux;
		Escribir N,": ",ult;
		n=n+1;
	Hasta Que n>10 & ant>34 
FinAlgoritmo
