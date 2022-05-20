Algoritmo ej37
	Definir sucnom, ant Como Caracter;
	Definir cant1000, cant500, cant200, cant100 Como Entero;
	Definir max1000, max500, max200, max100 Como Entero;
	Definir falt1000, falt500, falt200, falt100 Como Entero;
	Definir g_falt1000, g_falt500, g_falt200, g_falt100 Como Entero;
	Definir cont_caj_falt Como Entero;
	Definir faltante Como Logico;
	
	max1000 = 1000;
	max500 = 2000;
	max200 = 5000;
	max100 = 5000;
	
	cont_caj_falt = 0;
	g_falt1000 = 0;
	g_falt500 = 0;
	g_falt200 = 0;
	g_falt100 = 0;
	
	Escribir 'nombre sucursal: ';
	Leer sucnom;
	Mientras sucnom <> 'ZZZ' Hacer
		ant = sucnom;
		
		falt1000 = 0;
		falt500 = 0;
		falt200 = 0;
		falt100 = 0;
		
		Mientras sucnom = ant Hacer
			faltante = falso;
			
			Escribir 'cant billetes 1000: ';
			leer cant1000;
			Escribir 'cant billetes 500: ';
			leer cant500;
			Escribir 'cant billetes 200: ';
			leer cant200;
			Escribir 'cant billetes 100: ';
			leer cant100;
			
			si cant1000 < (max1000 * 0.1)
				Entonces 
					falt1000 = falt1000 + (max1000 - cant1000);
					faltante = Verdadero;
			FinSi
			si cant500 < (max500 * 0.1)
				Entonces 
					falt500 = falt500 + (max500 - cant500);
					faltante = Verdadero;
			FinSi
			si cant200 < (max200 * 0.1)
				Entonces 
					falt200 = falt200 + (max200 - cant200);
					faltante = Verdadero;
			FinSi
			si cant100 < (max100 * 0.1)
				Entonces 
					falt100 = falt100 + (max100 - cant100);
					faltante = Verdadero;
			FinSi
			
			si faltante
				Entonces cont_caj_falt = cont_caj_falt + 1;
			FinSi
			
			//informo por cajero
		
			Escribir 'nombre sucursal: ';
			Leer sucnom;
		FinMientras
		//informo por sucursal
		Escribir 'Sucursal: ', ant;
		Escribir 'faltantes billetes 1000: ',falt1000;
		Escribir 'faltantes billetes 500: ',falt500;
		Escribir 'faltantes billetes 200: ',falt200;
		Escribir 'faltantes billetes 100: ',falt100;
		
		g_falt1000 = g_falt1000 + falt1000;
		g_falt500 = g_falt500 + falt500;
		g_falt200 = g_falt200 + falt200;
		g_falt100 = g_falt100 + falt100;
	
	FinMientras
	//informo general
	Escribir 'cajeros con faltante: ', cont_caj_falt;
	
	Escribir 'total billetes de 1000 faltantes: ', g_falt1000;
	Escribir 'total billetes de 500 faltantes: ', g_falt500;
	Escribir 'total billetes de 200 faltantes: ', g_falt200;
	Escribir 'total billetes de 100 faltantes: ', g_falt100;
	
FinAlgoritmo
