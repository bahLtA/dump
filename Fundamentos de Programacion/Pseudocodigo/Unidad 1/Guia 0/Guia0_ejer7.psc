Algoritmo Guia0_ejer7
	Definir costo,precio,porcentaje,calculo como real;
	Escribir "Ingrese el precio de venta del producto";
	leer precio;
	Escribir "Ingrese el porcentaje de ganancia del producto (sin %)";
	leer porcentaje;
	calculo=(porcentaje*precio)/100;
	costo=precio-calculo;
	Escribir "El valor del costo del producto es de: ",costo;
FinAlgoritmo
