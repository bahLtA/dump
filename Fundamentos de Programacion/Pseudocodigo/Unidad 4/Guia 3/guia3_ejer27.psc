Algoritmo guia3_ejer27
	Definir n,i,dni,cont,contaux,sueldo,dia,aux,monto,recargo,cont0,sumrecargo como real;
	Definir nya,cajero Como Caracter;
	Escribir "Ingrese la cantidad de empleados";
	leer n;
	Repetir
		contaux=0;
		recargo=0;
		Escribir "Ingrese el numero de documento del empleado";
		leer dni;
		Escribir "Ingrese nombre y apellido del empleado";
		leer nya;
		Escribir "Ingrese el sueldo depositado";
		leer sueldo;
		aux=sueldo;
		Escribir "Ingrese la cantidad de extracciones realizadas en el mes";
		leer i;
		Repetir
			recargounico=0;
			Escribir "Ingrese el dia de la extraccion nro ",i;
			leer dia;
			Escribir "Ingrese el monto retirado";
			leer monto; 
			aux=aux-monto;
			si aux<0 Entonces
				aux=aux+monto;
				Escribir "El monto retirado deja un saldo negativo, intente nuevamente";
				contaux=contaux-1;
			FinSi
			Escribir "Ingrese si el cajero estaba contratado por la empresa";
			leer cajero;
			si Mayusculas(cajero)="NC" Entonces
				recargo=recargo+monto*0.02;
				recargounico=monto*0.02;
				sumrecargo=sumrecargo+recargo;
				Escribir recargo,"$ de recargo";
			FinSi
			
			aux=aux-(monto+recargounico);
			si aux=0 Entonces
				cont0=cont0+1;
			FinSi
			contaux=contaux+1;
		Hasta Que contaux=i
		Escribir "";
		Escribir "Nombre y Apellido: ",nya;
		Escribir "DNI: ",dni;
		Escribir "Monto total retirado",monto;
		Escribir "Monto total de recargo",recargo;
		Escribir "";
		cont=cont+1;
	Hasta Que cont=n
	Escribir "La cantidad de empleados con saldo igual a cero: ",cont0;
	Escribir "El monto total retenido por recargo es de: ",sumrecargo;
FinAlgoritmo
