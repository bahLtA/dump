Algoritmo Guia3_Ejer20
	Definir PrecSuper,PrecPremium,PrecDiesel,cod,cantLitros Como Real;
	Definir Patente,Comb Como Caracter;
	Definir sumSuper,sumPremium,sumDiesel,MontoTotal como real;
	
	Escribir "Ingrese el precio de la nafta Super";
	leer PrecSuper;
	Escribir "Ingrese el precio de la nafta Premium";
	leer PrecPremium;
	Escribir "Ingrese el precio del diesel";
	leer PrecDiesel;
	
	Escribir "Ingrese la patente del auto";
	leer Patente;
	
	Mientras patente<>"xxx" Hacer
		Escribir "ingrese el codigo del empleado";
		leer cod;
		Escribir "Ingrese el tipo de combustible";
		leer Comb;
		Escribir "Ingrese la cantidad de litros";
		leer cantLitros;
		si Comb="super" o Comb="Súper" o comb="Super" o comb="SUPER" o comb="súper" o comb="SÚPER" Entonces
			sumSuper=sumSuper+cantLitros;
			MontoTotal=MontoTotal+(PrecSuper*cantLitros);
		FinSi
		si comb="Premium" o comb="premium" o comb="PREMIUM" Entonces
			sumPremium=sumPremium+cantLitros;
			MontoTotal=MontoTotal+(PrecPremium*cantLitros);
		FinSi
		si comb="Diesel" o comb="diesel" o comb="DIESEL" Entonces
			sumDiesel=sumDiesel+cantLitros;
			MontoTotal=MontoTotal+(PrecDiesel*cantLitros);
		FinSi
		Escribir "";
		Escribir "Ingrese la patente de otro auto";
		leer patente;
	FinMientras
	Escribir "";
	Escribir "Se vendieron ",sumSuper," litros de nafta Súper";
	Escribir "Se vendieron ",sumPremium," litros de nafta Premium";
	Escribir "Se vendieron ",sumDiesel," litros de Diesel";
	Escribir "";
	Escribir "El total recaudado por la estación es de: $",MontoTotal;
	
FinAlgoritmo
