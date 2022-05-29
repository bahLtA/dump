#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string nya,distribuidora,cPago;
	int precio_lista,cant,forma_de_pago,precio_final,monto_cuota,imp=0;
	bool cuota=false;
	
	cout<<"Ingrese el nombre de la distribuidora"<<endl;
	getline(cin,distribuidora);
	cout<<"Ingrese el nombre del cliente"<<endl;
	getline(cin,nya);
	cout<<"Ingrese el precio de lista del zapato"<<endl;
	cin>>precio_lista;
	cout<<"Ingrese la cantidad de zapatos comprados (pares)"<<endl;
	cin>>cant;
	cout<<"Ingrese la forma de pago"<<endl;
	cin>>forma_de_pago;
	
	precio_final=precio_lista*cant;
	
	if (forma_de_pago==1){
		imp=precio_final*0.1;
		precio_final-=imp;
		cPago="Contado";
	}else if (forma_de_pago==2){
		cPago="6 cuotas";
		cuota=true;
		monto_cuota=precio_final/6;
	}else if (forma_de_pago==3){
		imp=precio_final*0.23;
		precio_final+=imp;
		cPago="12 cuotas";
		cuota=true;
		monto_cuota=precio_final/12;
	}
	
	cout<<endl<<"Distribuidora: "<<distribuidora<<endl;
	cout<<"Nombre del cliente: "<<nya<<endl;
	cout<<"Cantidad de zapatos vendidos: "<<cant<<endl;
	cout<<"Precio de lista: $"<<precio_lista<<endl;
	cout<<"Forma de pago: "<<cPago<<endl;
	cout<<"Recargo o Impuesto: "<<imp<<endl;
	if (cuota){
		cout<<"El monto de las cuotas es de: $"<<monto_cuota<<endl;
	}
	cout<<"Total a pagar: "<<precio_final;
	return 0;
}

