Algoritmo Guia1_ejer6
	Definir NombreChofer1, NombreChofer2 Como Caracter;
	Definir SueldoBasico1,SueldoBasico2, kmrecorridos1,kmrecorridos2,final1,final2,total como real;
	Escribir "Ingrese el nombre del chofer 1";
	leer NombreChofer1;
	Escribir "Ingrese el sueldo basico de ",NombreChofer1;
	leer SueldoBasico1;
	Escribir "Ingrese los kilometros recorridos por ",NombreChofer1;
	Leer kmrecorridos1;
	
	Escribir "Ingrese el nombre del chofer 2";
	leer NombreChofer2;
	Escribir "Ingrese el sueldo basico de ",NombreChofer2;
	leer SueldoBasico2;
	Escribir "Ingrese los kilometros recorridos por ",NombreChofer2;
	Leer kmrecorridos2;
	
	final1=SueldoBasico1+kmrecorridos1*50;
	final2=SueldoBasico2+kmrecorridos2*50;
	total=final1+final2;
	
	Escribir "LIQUIDACION MENSUAL CHOFERES";
	Escribir NombreChofer1,"          ","TOTAL A COBRAR $",final1;
	Escribir NombreChofer2,"          ","TOTAL A COBRAR $",final2;
	Escribir "TOTAL GRAL $",total;
FinAlgoritmo
