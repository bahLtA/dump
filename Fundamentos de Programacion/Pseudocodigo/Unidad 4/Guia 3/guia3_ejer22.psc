Algoritmo guia3_ejer22
	Definir patente,nya,cereal Como Caracter;
	Definir cantTon,cont,sumSoja,sumTon Como Real;
	cont=0;sumSoja=0;sumTon=0;
	Escribir "Ingrese la patente del camion";
	leer patente;
	Mientras patente<>"XYZ 123" Hacer
		Escribir "Ingrese apellido y nombre del remitente";
		leer nya;
		Escribir "Ingrese el tipo de cereal";
		leer cereal;
		Escribir cereal;
		Escribir "Ingrese la cantidad de toneladas de cereal";
		leer cantTon;
		cont=cont+1;
		sumTon=sumTon+cantTon;
		si Mayusculas(cereal)="SOJA" Entonces
			sumSoja=sumSoja+cantTon;
			Escribir cereal;
		FinSi
		Escribir "";
		Escribir "Ingrese otra patente";
		leer patente;
	FinMientras
	Escribir cont," camiones descargaron cereal ese dia";
	Escribir "Se acopiaron ",sumSoja," Toneladas de soja";
	Escribir "El total de toneladas acopiadadas es de: ",sumTon," toneladas";
FinAlgoritmo
