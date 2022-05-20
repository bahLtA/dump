Algoritmo Guia2_ejer5
	Definir Peso,estatura,imc como real;
	Escribir "Ingrese el peso de la persona";
	leer Peso;
	Escribir "Ingrese la estatura de la persona (en metros)";
	leer estatura;
	imc=peso/(estatura^2);
	si imc>0 y imc<=18.5 Entonces
		Escribir "Debajo del normal. IMC: ",imc;
	SiNo
		si imc>18.5 y imc<=25 Entonces
			Escribir "Normal. IMC: ",imc;
		SiNo
			si imc>25 y imc<=30 Entonces
				Escribir "Sobrepeso. IMC: ",imc; 
			SiNo
				si imc>30 Entonces
					Escribir "Obesidad. IMC: ",imc;
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo
