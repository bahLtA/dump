#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int horas,monto,salario,horas_extra,monto_extra;
	
	cout<<"Ingrese el monto por hora"<<endl;
	cin>>monto;
	cout<<"Ingrese la cantidad de horas trabajadas"<<endl;
	cin>>horas;
	salario=monto*horas;
	if (horas>40){
		monto_extra=monto+(monto*0.5);
		horas_extra=horas-40;
		salario+=horas_extra*monto_extra;
	}
	cout<<endl<<"El salario a cobrar por el trabajador es de: $"<<salario;
	return 0;
}

