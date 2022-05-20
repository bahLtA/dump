Algoritmo guia3_ejer17
	Definir n,aux,cont Como Real;
	aux=0;
	cont=0;
	Repetir
		n=Aleatorio(0,9999999);
		si n>aux Entonces
			Escribir "Numero mas alto ",n;
			aux=n;
			cont=cont+1;
		FinSi
	Hasta Que cont=10
FinAlgoritmo
