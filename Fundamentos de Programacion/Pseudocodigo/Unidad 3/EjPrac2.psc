Algoritmo EjPrac2
	Definir precio,unidades,tot como real;
	Escribir "Ingrese el precio unitario";
	leer precio;
	Escribir "Ingrese las unidades";
	leer unidades;
	tot=precio*unidades;
	si unidades>500 Entonces
		tot=tot-(tot*0.2);
	FinSi
	Escribir "El total es :", tot;
FinAlgoritmo
