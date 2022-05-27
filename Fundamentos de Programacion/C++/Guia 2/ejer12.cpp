#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int zona,precio_base,precio_final;
	float imp;
	cout<<"Ingrese el precio del alquiler"<<endl;
	cin>>precio_base;
	cout<<"Ingrese la zona donde se encuentra la vivienda"<<endl;
	cin>>zona;
	switch (zona){
	case 1: imp=precio_base*0.15;
	break;
	case 2: imp=precio_base*0.10;
	break;
	case 3: imp=precio_base*0.08;
	break;
	}
	precio_final=precio_base+imp;
	cout<<endl<<"Precio base: $"<<precio_base<<endl;
	cout<<"Monto de impuestos y comisiones: $"<<imp<<endl;
	cout<<"Total a pagar: $"<<precio_final;
	return 0;
}

