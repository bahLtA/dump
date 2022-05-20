Algoritmo guia3_ejer7
	//FACTORIAL DE UN NUMERO
	Definir n,aux,fact Como real;
	Escribir "Ingrese un numero el cual desee saber su factorial";
	leer n;
	fact=1;
	aux=1;
	Mientras aux<>n+1 Hacer
		fact=fact*aux;
		aux=aux+1;
	FinMientras
	Escribir "El factorial de ",n," es: ",fact;
FinAlgoritmo
