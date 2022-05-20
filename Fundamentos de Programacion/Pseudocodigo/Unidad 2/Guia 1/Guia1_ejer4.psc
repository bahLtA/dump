Algoritmo Guia1_ejer4
	Definir comun,estudiante,trabajador,aux,numInicialCom,numInicialEst,numInicialTrab,numFinalCom,numFinalEst,numFinalTrab,totalCom,totalEst,totalTrab,totalrecaudado como real;
	Escribir "Ingrese el precio del boleto de estudiante";
	leer estudiante;
	Escribir "Ingrese la numeracion inicial de boletos comunes";
	leer numInicialCom;
	Escribir "Ingrese la numeracion final de boletos comunes";
	leer numFinalCom;
	Escribir "Ingrese la numeracion inicial de boletos estudiantiles";
	leer numInicialEst;
	Escribir "Ingrese la numeracion final de boletos estudiantiles";
	leer numFinalEst;
	Escribir "Ingrese la numeracion inicial de boletos trabajadores";
	leer numInicialTrab;
	Escribir "Ingrese la numeracion final de boletos trabajadores";
	leer numFinalTrab;
	comun=estudiante*2;
	trabajador=comun*0.4;
	totalCom=numFinalCom-numInicialCom;
	totalEst=numFinalEst-numInicialEst;
	totalTrab=numFinalTrab-numInicialTrab;
	totalrecaudado=comun*totalCom+estudiante*totalEst+trabajador*totalTrab;
	Escribir "La cantidad de boletos comunes vendidos fue ",totalCom," lo recaudado en boletos comunes es de ",comun*totalCom,"$";
	Escribir "La cantidad de boletos estudiantiles vendidos fue ", totalEst," lo recaudado en boletos estudiantiles es de ",estudiante*totalEst,"$";
	Escribir "La cantidad de boletos de trabajadores vendidos fue ", totalTrab," lo recaudado en boletos de trabajadores es de ",trabajador*totalTrab,"$";
	Escribir "El total recaudado es de ",totalrecaudado,"$";
FinAlgoritmo
