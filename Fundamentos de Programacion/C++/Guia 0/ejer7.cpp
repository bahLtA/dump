#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int costo,precio,porcentaje,calculo;
	cout<<"Ingrese el precio de venta del producto"<<endl;
	cin>>precio;
	cout<<"Ingrese el porcentaje de ganancia del producto"<<endl;
	cin>>porcentaje;
	calculo=(porcentaje*precio)/100;
	costo=precio-calculo;
	cout<<"El valor del costo del producto es de: "<<costo;
	return 0;
}

