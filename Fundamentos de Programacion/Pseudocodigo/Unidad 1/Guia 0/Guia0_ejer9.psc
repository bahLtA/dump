Algoritmo Guia0_ejer9
	Definir SueldoNeto,AporteJubilatorio,SueldoLiquido como real;
	Escribir "Ingrese el sueldo neto";
	Leer SueldoNeto;
	AporteJubilatorio=SueldoNeto*0.16;
	SueldoLiquido=SueldoNeto-AporteJubilatorio;
	Escribir "El aporte jubilatorio es de ",AporteJubilatorio,"$",Sin Saltar;
	Escribir " Y el sueldo liquido es de ", SueldoLiquido,"$";
FinAlgoritmo