#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int capital_solicitado,tasa_anual,plazo;
	float interes_simple,valor_cuota;
	cout<<"Ingrese el capital solicitado"<<endl;
	cin>>capital_solicitado;
	cout<<"Ingrese la tasa anual"<<endl;
	cin>>tasa_anual;
	cout<<"Ingrese el plazo a pagar"<<endl;
	cin>>plazo;
	interes_simple=(capital_solicitado*tasa_anual*plazo)/(100*12);
	valor_cuota=(capital_solicitado+interes_simple)/plazo;
	cout<<"El valor de la cuota es de: $"<<valor_cuota;
	return 0;
}

