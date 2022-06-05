#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int bol_com,bol_est,bol_jub,col,cant_est,cant_jub,cant_com,recaudado_recorrido,recaudado_total=0;
	int menos_recaudado=999999,colectivo_menos,sum_est=0;
	
	cout<<"Ingrese el precio del boleto comun"<<endl;
	cin>>bol_com;
	bol_est=bol_com-(bol_com*0.2);
	bol_jub=bol_com-(bol_com*0.4);
	
	cout<<"Ingrese el numero del colectivo"<<endl;
	cin>>col;
	while (col!=99){
		cout<<"Ingrese la cantidad de boletos estudiantes"<<endl;
		cin>>cant_est;
		cout<<"Ingrese la cantidad de boletos comunes"<<endl;
		cin>>cant_com;
		cout<<"Ingrese la cantidad de boletos jubilados"<<endl;
		cin>>cant_jub;
		
		
		// Lo recaudado en este recorrido
		recaudado_recorrido=(cant_com*bol_com)+(cant_est*bol_est)+(cant_jub*bol_jub);
		
		
		// Cantidad de boletos estudiante vendidos durante el dia
		sum_est+=cant_est;
		
		
		// Total recaudado en todos los recorridos ingresados
		recaudado_total+=recaudado_recorrido;
		
		// el colectivo que menos recaudo
		if (menos_recaudado>recaudado_recorrido){
			menos_recaudado=recaudado_recorrido;
			colectivo_menos=col;
		}
		
		cout<<endl<<"El total recaudado es: $"<<recaudado_recorrido<<endl<<endl;
		
		cout<<"Ingrese el numero del colectivo"<<endl;
		cin>>col;
	}
	cout<<endl<<sum_est<<" boletos estudiantes vendidos"<<endl;
	cout<<"Total recaudado en todos los recorridos ingresados"<<endl;
	cout<<"El colectivo que menos recaudo fue el "<<colectivo_menos<<" con un monto de $"<<menos_recaudado;
	return 0;
}

