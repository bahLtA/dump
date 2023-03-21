#include <iostream>
using namespace std;

void CalcularComisiones(int &tot,int sueldoBase,int venta1,int venta2){
	tot = sueldoBase+(venta1*0.12)+(venta2*0.12);
}

int main(int argc, char *argv[]) {
	
	int sueldoBase,venta1,venta2,total;
	
	cout<<"Ingrese el sueldo base"<<endl;
	cin>>sueldoBase;
	cout<<"Ingrese el monto de la venta 1"<<endl;
	cin>>venta1;
	cout<<"Ingrese el monto de la venta 2"<<endl;
	cin>>venta2;
	
	CalcularComisiones(total,sueldoBase,venta1,venta2);
	
	cout<<"Este mes cobrara: $"<<total;
	return 0;
}

