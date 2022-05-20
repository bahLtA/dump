Algoritmo guia3_ejer37
	Definir nombresuc,ant Como Caracter;
	Definir max1000,max500,max200,max100,c1000,c500,c200,c100,falt1000,falt500,falt200,falt100,g_falt1000,g_falt500,g_falt200,g_falt100 Como Real;
	Escribir "Ingrese el nombre de la sucursal";
	Leer nombresuc;
	max100=5000;
	max200=5000;
	max500=2000;
	max1000=1000;
	cont=0;
	Mientras nombresuc<>"ZZZ" Hacer
		ant=nombresuc;
		falt1000=0;
		falt500=0;
		falt200=0;
		falt100=0;
		mientras nombresuc=ant Hacer
			Escribir "cant billetes 1000";
			leer c1000;
			Escribir "cant billetes 500";
			leer c500;
			Escribir "cant billetes 200";
			leer c200;
			Escribir "cant billetes 100";
			leer c100;
			si c1000<max1000*0.1 Entonces
				falt1000=falt1000+(max1000-c1000);
//				Escribir "Faltan ",falt1000," billetes de 1000";
				cont=cont+1;
			FinSi
			si c500<max500*0.1 Entonces
				falt500=falt500+(max500-c500);
//				Escribir "Faltan ",falt500," billetes de 500";
				cont=cont+1;
			FinSi
			si c200<max200*0.1 Entonces
				falt200=falt200+(max200-c200);
//				Escribir "Faltan ",falt200," billetes de 200";
				cont=cont+1;
			FinSi
			si c100<max100*0.1 Entonces
				falt100=falt100+(max100-c100);
//				Escribir "Faltan ",falt100," billetes de 100";
				cont=cont+1;
			FinSi
			Escribir "";
			Escribir "Ingrese el nombre de la sucursal";
			leer nombresuc;
		FinMientras
		Escribir "Sucursal: ",ant;
		Escribir "Faltan: ",falt1000," billetes de 1000";
		Escribir "Faltan: ",falt500," billetes de 500";
		Escribir "Faltan: ",falt200," billetes de 200";
		Escribir "Faltan: ",falt100," billetes de 100";
		g_falt1000=g_falt1000+falt1000;
		g_falt500=g_falt500+falt500;
		g_falt200=g_falt200+falt200;
		g_falt100=g_falt100+falt100;
	FinMientras
	Escribir "Cant total de cajeros con faltante: ",cont;
	Escribir "Faltan: ",g_falt1000," billetes de 1000";
	Escribir "Faltan: ",g_falt500," billetes de 500";
	Escribir "Faltan: ",g_falt200," billetes de 200";
	Escribir "Faltan: ",g_falt100," billetes de 100";
FinAlgoritmo
