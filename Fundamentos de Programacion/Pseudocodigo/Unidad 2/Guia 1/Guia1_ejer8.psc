Algoritmo Guia1_ejer8
	Definir Sem1Suc1,Sem2Suc1,Sem1Suc2,Sem2Suc2,total,empleados,aux,bonifEmp como real;
	Escribir "Ingrese las ventas del semestre 1 de la sucursal 1";
	leer Sem1Suc1;
	Escribir "Ingrese las ventas del semestre 1 de la sucursal 2";
	leer Sem1Suc2;
	Escribir "Ingrese las ventas del semestre 2 de la sucursal 1";
	leer Sem2Suc1;
	Escribir "Ingrese las ventas del semestre 2 de la sucursal 2";
	leer Sem2Suc2;
	Escribir "Ingrese la cantidad de empleados que hay en las 2 sucursales";
	leer empleados;
	Escribir "El total de ventas de la sucursal 1 es de $",Sem1Suc1+Sem2Suc1;
	Escribir "El total de ventas de la sucursal 2 de de $",Sem1Suc2+Sem2Suc2;
	total=Sem1Suc1+Sem2Suc1+Sem1Suc2+Sem2Suc2;
	bonifEmp=total*0.2;
	Escribir "A cada empleado se le da una bonificacion de $",bonifEmp;
FinAlgoritmo
